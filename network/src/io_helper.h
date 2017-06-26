#ifndef __IO_HELPER_H
#define __IO_HELPER_H

#include <boost/asio.hpp>

namespace network
{
    void create_io_service();
    boost::asio::io_service& io_service();

    void initialize();
    void start(size_t thread_pool_size);
    void stop();
}

#endif
