#include "../packet_processor.h"
#include <memory>
#include "../../server_session/server_session.h"
#include "../opcode.h"
#include "../send_helper.h"

void handle_CS_PING(std::shared_ptr<server_session> session, const GAME::CS_PING& read)
{
    //auto id = core::utf8_to_wstring(read.id());
    //wprintf(L"id: %s\n", id.c_str());

    //auto password = core::utf8_to_wstring(read.password());
    //wprintf(L"password: %s\n", password.c_str());

    auto error_message = "";
    auto result = true;

    // id 와 password 기준으로 유저의 account_id를 가져와
    auto account_id = 1000;


    LOBBY::SC_LOG_IN send;
    send.set_result(result);
    //send.set_timestamp(core::now_as_ms().count());

    send_packet(session, opcode::SC_LOG_IN, send);
}
