#ifndef __SESSION_H
#define __SESSION_H

#include <memory>
#include <boost/asio.hpp>

namespace network
{
    using boost::asio::ip::tcp;

    class session : std::enable_shared_from_this<session>
    {
    public:

        static constexpr unsigned short max_packet_size = 8000;
        static constexpr unsigned short packet_buf_size = 8096;

        using packet_buffer_type = std::shared_ptr<std::array<char, packet_buf_size>>;

        explicit session(tcp::socket socket)
            : socket_(std::move(socket)), header_(0)
        {
            
        }

        void start()
        {
            //room_.join(shared_from_this());
            do_read_header();
        }

    protected:
        void do_read_header();
        void do_read_body();


        tcp::socket socket_;
        unsigned short header_;
        packet_buffer_type receive_buffer_;
    };
}

#endif
