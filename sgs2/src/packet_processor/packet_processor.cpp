#include "packet_processor.h"
#include <array>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include "opcode.h"


template <typename T, typename = typename std::enable_if_t<std::is_base_of<::google::protobuf::Message, T>::value>>
void deserialize(std::shared_ptr<server_session> session, buf_ptr buffer, int size, std::function<void(std::shared_ptr<network::server_session>, const T&)> process_function)
{
	google::protobuf::io::ArrayInputStream is(buffer->data() + sizeof(unsigned short), size - sizeof(unsigned short));
	T read;

	try
	{
		auto r = read.ParseFromZeroCopyStream(&is);
		if (!r)
		{
			session->close();
			return;
		}
		process_function(session, read);
	}
	catch (std::logic_error& e)
	{
	}
	catch (std::exception& e)
	{
	}
}

using packet_processor = std::function<void(std::shared_ptr<server_session> session, buf_ptr buffer, int size)>;
packet_processor packet_functor[(std::numeric_limits<unsigned short>::max)()] = { nullptr };
 auto to_index = [](opcode code)
{
	return static_cast<std::underlying_type_t<opcode>>(code);
};

void register_all_functions()
{
	for (auto& functor : packet_functor)
	{
		functor = [](std::shared_ptr<server_session> session, buf_ptr const buffer, int size)
		{
			return;
		};
	}
	packet_functor[to_index(opcode::CS_LOG_IN)] = [](std::shared_ptr<server_session> session, buf_ptr buffer, int size) { deserialize<LOBBY::CS_LOG_IN>(std::move(session), std::move(buffer), size, handle_LOBBY_CS_LOG_IN); };
	packet_functor[to_index(opcode::CS_SET_NICKNAME)] = [](std::shared_ptr<server_session> session, buf_ptr buffer, int size) { deserialize<LOBBY::CS_SET_NICKNAME>(std::move(session), std::move(buffer), size, handle_LOBBY_CS_SET_NICKNAME); };
	packet_functor[to_index(opcode::CS_ENTER_FIELD)] = [](std::shared_ptr<server_session> session, buf_ptr buffer, int size) { deserialize<GAME::CS_ENTER_FIELD>(std::move(session), std::move(buffer), size, handle_GAME_CS_ENTER_FIELD); };
	packet_functor[to_index(opcode::CS_LEAVE_FIELD)] = [](std::shared_ptr<server_session> session, buf_ptr buffer, int size) { deserialize<GAME::CS_LEAVE_FIELD>(std::move(session), std::move(buffer), size, handle_GAME_CS_LEAVE_FIELD); };
	packet_functor[to_index(opcode::CS_MOVE_OBJECT)] = [](std::shared_ptr<server_session> session, buf_ptr buffer, int size) { deserialize<GAME::CS_MOVE_OBJECT>(std::move(session), std::move(buffer), size, handle_GAME_CS_MOVE_OBJECT); };
	packet_functor[to_index(opcode::CS_USE_SKILL)] = [](std::shared_ptr<server_session> session, buf_ptr buffer, int size) { deserialize<GAME::CS_USE_SKILL>(std::move(session), std::move(buffer), size, handle_GAME_CS_USE_SKILL); };
	packet_functor[to_index(opcode::CS_PING)] = [](std::shared_ptr<server_session> session, buf_ptr buffer, int size) { deserialize<GAME::CS_PING>(std::move(session), std::move(buffer), size, handle_GAME_CS_PING); };
}

void handle_packet(std::shared_ptr<server_session> session, buf_ptr buffer, int size)
{
	if (size < sizeof(opcode) || size - sizeof(unsigned short) < 0)
	{
		return;
	}

	auto packet_num = *reinterpret_cast<opcode*>(buffer->data());
	packet_functor[to_index(packet_num)](std::move(session), std::move(buffer), size);
}
