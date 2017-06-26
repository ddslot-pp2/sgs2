#ifndef __PACKET_PROCESSOR_H
#define __PACKET_PROCESSOR_H

#include <memory>
#include "../server_session/server_session.h"
#include "packet/sample_packet.h"

using buf_ptr = std::shared_ptr<network::session::packet_buffer_type>;

void register_handler();

void handle_packet(std::shared_ptr<server_session> session, buf_ptr buf, unsigned short size);

void handle_CS_LOGIN(std::shared_ptr<server_session> session, const CS_LOGIN& read);




#endif
