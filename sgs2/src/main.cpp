#include <iostream>
#include "server/server.h"
#include "io_helper.h"
#include "server_session/server_session.h"

int main()
{
    printf("hello server\n");

    // ������ ����
    // processor => process�� ���� �ʿ�!
    std::locale::global(std::locale(""));
    std::wcout.imbue(std::locale(""));

    // ��Ŷ ���
    //network::register_all_functions();

    network::initialize();

    // �ʵ� ����
    //field_manager::instance().create_fields();

    //auto svr = network::server<network::server_session>::create(3000);

    tcp::endpoint endpoint(tcp::v4(), 3000);
    auto svr = std::make_shared<network::server<server_session>>(network::io_service(), endpoint);

    //network::start(8, [] {});
    network::start(8);



    getchar();

    network::stop();

    return 0;
}

