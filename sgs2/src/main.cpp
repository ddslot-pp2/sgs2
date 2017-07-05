#include <iostream>
#include "server/server.h"
#include "io_helper.h"
#include "server_session/server_session.h"
#include "packet_processor/packet_processor.h"

int main()
{
    // ������ ����
    std::locale::global(std::locale(""));
    std::wcout.imbue(std::locale(""));

    // ��Ŷ ���
    register_handlers();
    network::initialize();

    // ���� ����
    tcp::endpoint endpoint(tcp::v4(), 3000);
    auto svr = std::make_unique<network::server<server_session>>(network::io_service(), endpoint);

    //network::start(8, [] {});
    network::start(8);



    getchar();

    network::stop();

    return 0;
}
