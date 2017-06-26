#include "packet_processor.h"


void handle_packet(std::shared_ptr<server_session> session, buf_ptr buf, unsigned short size)
{
    std::shared_ptr<imessage> read = std::make_shared<CS_LOGIN>();

    handle_CS_LOGIN(session, read);


}