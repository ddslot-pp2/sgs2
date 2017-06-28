#include "server_session.h"
#include "../packet_processor/packet_processor.h"

server_session::server_session(tcp::socket socket) : session(std::move(socket))
{
    
}

server_session::~server_session()
{

}

void server_session::on_read_packet(std::shared_ptr<network::packet_buffer_type> buf, unsigned short size)
{
    printf("server_session on_read_packet called\n");
    auto self = std::static_pointer_cast<server_session>(shared_from_this());
    handle_packet(self, buf, size);

}

void server_session::on_connect()
{
    printf("server_session on_connected called\n");
}

void server_session::on_disconnect(boost::system::error_code& ec)
{

}

