#include "../packet_processor.h"
#include <memory>
#include "../../server_session/server_session.h"
#include "../opcode.h"
#include "../send_helper.h"

void handle_CS_LOG_IN(std::shared_ptr<server_session> session, const LOBBY::CS_LOG_IN& read)
{

}