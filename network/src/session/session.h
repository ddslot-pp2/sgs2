#ifndef __SESSION_H
#define __SESSION_H

#include <memory>
#include <boost/asio.hpp>
#include "../io_helper.h"

namespace network
{
    using boost::asio::ip::tcp;

    class session : std::enable_shared_from_this<session>
    {
    public:
        explicit session(tcp::socket socket);
        virtual ~session();

        void start();
        void close();

    protected:

        void do_read_header();
        void do_read_body();

        virtual void on_read_packet(std::shared_ptr<packet_buffer_type> buf, unsigned short size) {}
        virtual void on_connect() {}
        virtual void on_disconnect(boost::system::error_code& ec) {}


        tcp::socket socket_;
        unsigned short header_;
        std::shared_ptr<packet_buffer_type> receive_buffer_;
    };
}

#endif
