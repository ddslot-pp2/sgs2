#include "server_session.h"

server_session::server_session(tcp::socket socket) : session(std::move(socket))
{
    
}

server_session::~server_session()
{

}

void server_session::on_read_packet(std::shared_ptr<packet_buffer_type> buf, unsigned short size)
{

}

void server_session::on_connect()
{

}

void server_session::on_disconnect(boost::system::error_code& ec)
{

}

