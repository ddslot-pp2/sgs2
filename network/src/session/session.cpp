#include "session.h"

namespace network
{
    session::session(tcp::socket socket)
        : socket_(std::move(socket)), header_(0)
    {

    }

    session::~session()
    {

    }

    void session::start()
    {
        on_connect();
        do_read_header();
    }

    void session::close()
    {

    }

    void session::do_read_header()
    {
        auto self(shared_from_this());
        boost::asio::async_read(socket_,
            boost::asio::buffer(&header_, sizeof(header_)),
            [this, self](boost::system::error_code ec, std::size_t /*length*/)
        {
            if (ec || header_ <= 0 || header_ > max_packet_size)
            {
                on_disconnect(ec);
                return;
            }

            do_read_body();
        });
    }

    void session::do_read_body()
    {
        receive_buffer_ = std::make_shared<packet_buffer_type>();

        auto self(shared_from_this());
        boost::asio::async_read(socket_,
            boost::asio::buffer(receive_buffer_->data(), header_),
            [this, self](boost::system::error_code ec, std::size_t /*length*/)
        {
            if (ec)
            {
                on_disconnect(ec);
                return;
            }

            on_read_packet(std::move(receive_buffer_), header_);            

            do_read_header();

        });
    }
}