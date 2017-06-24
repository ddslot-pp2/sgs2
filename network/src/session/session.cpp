#include "session.h"

namespace network
{
    void session::do_read_header()
    {
        auto self(shared_from_this());
        boost::asio::async_read(socket_,
            boost::asio::buffer(&header_, sizeof(header_)),
            [this, self](boost::system::error_code ec, std::size_t /*length*/)
        {
            if (ec || header_ < 0 || header_ > max_packet_size)
            {
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
                //room_.deliver(read_msg_);
                return;
            }

            // do sth

            do_read_header();

        });
    }
}
