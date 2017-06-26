#ifndef __PACKET_PROCESSOR_H
#define __PACKET_PROCESSOR_H

#include <memory>
#include "../../../network/src/io_helper.h"

#include "packet/LOBBY.pb.h"
#include "packet/GAME.pb.h"

using buf_ptr = std::shared_ptr<network::packet_buffer_type>;

class server_session;

void handle_LOBBY_CS_LOG_IN(std::shared_ptr<server_session> session, const LOBBY::CS_LOG_IN& read);
void handle_LOBBY_CS_SET_NICKNAME(std::shared_ptr<server_session> session, const LOBBY::CS_SET_NICKNAME& read);
void handle_GAME_CS_ENTER_FIELD(std::shared_ptr<server_session> session, const GAME::CS_ENTER_FIELD& read);
void handle_GAME_CS_LEAVE_FIELD(std::shared_ptr<server_session> session, const GAME::CS_LEAVE_FIELD& read);
void handle_GAME_CS_MOVE_OBJECT(std::shared_ptr<server_session> session, const GAME::CS_MOVE_OBJECT& read);
void handle_GAME_CS_USE_SKILL(std::shared_ptr<server_session> session, const GAME::CS_USE_SKILL& read);
void handle_GAME_CS_PING(std::shared_ptr<server_session> session, const GAME::CS_PING& read);


void register_all_functions();
void process_packet(std::shared_ptr<server_session> session, buf_ptr buffer, int size);



#endif
