#include <iostream>
#include "server/server.h"
#include "io_helper.h"
#include "server_session/server_session.h"

int main()
{
    printf("hello server\n");

    // 로케일 설정
    // processor => process로 수정 필요!
    std::locale::global(std::locale(""));
    std::wcout.imbue(std::locale(""));

    // 패킷 등록
    //network::register_all_functions();

    network::initialize();

    // 필드 생성
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

