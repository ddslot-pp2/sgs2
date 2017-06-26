#ifndef __SEND_HELPER_H
#define __SEND_HELPER_H

#include "static_if.h"
#include "opcode.h"
#include "../../../network/src/io_helper.h"
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>

template <class Protobuf>
bool serialize_packet(network::opcode opcode, Protobuf protobuf, char(&buffer)[network::packet_buf_size], int& written)
{
  auto ret = false;
  static_if<std::is_pointer<Protobuf>::value>([&](auto f)
  {
    written = protobuf->ByteSize();
    google::protobuf::io::ArrayOutputStream os(buffer + sizeof(unsigned short), written);
    ret = protobuf->SerializeToZeroCopyStream(&os);
  }).else_([&](auto f)
  {
    written = protobuf.ByteSize();
    google::protobuf::io::ArrayOutputStream os(buffer + sizeof(unsigned short), written);
    ret = protobuf.SerializeToZeroCopyStream(&os);
  });

  return ret;
}

template <class Session, class Protobuf>
void send_packet(Session session, network::opcode opcode, Protobuf protobuf)
{
  char buffer[network::packet_buf_size] = { 0, };
  auto written = 0;
  auto r = serialize_packet(opcode, protobuf, buffer, written);

  if (r)
  {
    std::memcpy(buffer, &opcode, sizeof(unsigned short));
    session->send(buffer, written + sizeof(unsigned short));
  }
  else
  {
    // error 
  }
}

#endif
