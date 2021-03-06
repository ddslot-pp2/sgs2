// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GAME.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "GAME.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace GAME {
class CS_PINGDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<CS_PING> {
} _CS_PING_default_instance_;
class SC_PINGDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<SC_PING> {
} _SC_PING_default_instance_;

namespace protobuf_GAME_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CS_PING, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CS_PING, timestamp_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SC_PING, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SC_PING, timestamp_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(CS_PING)},
  { 6, -1, sizeof(SC_PING)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_CS_PING_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_SC_PING_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "GAME.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _CS_PING_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _SC_PING_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _CS_PING_default_instance_.DefaultConstruct();
  _SC_PING_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\nGAME.proto\022\004GAME\"\034\n\007CS_PING\022\021\n\ttimesta"
      "mp\030\001 \001(\003\"\034\n\007SC_PING\022\021\n\ttimestamp\030\001 \001(\003b\006"
      "proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 86);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "GAME.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_GAME_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CS_PING::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CS_PING::CS_PING()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GAME_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:GAME.CS_PING)
}
CS_PING::CS_PING(const CS_PING& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:GAME.CS_PING)
}

void CS_PING::SharedCtor() {
  timestamp_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

CS_PING::~CS_PING() {
  // @@protoc_insertion_point(destructor:GAME.CS_PING)
  SharedDtor();
}

void CS_PING::SharedDtor() {
}

void CS_PING::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CS_PING::descriptor() {
  protobuf_GAME_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_GAME_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CS_PING& CS_PING::default_instance() {
  protobuf_GAME_2eproto::InitDefaults();
  return *internal_default_instance();
}

CS_PING* CS_PING::New(::google::protobuf::Arena* arena) const {
  CS_PING* n = new CS_PING;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CS_PING::Clear() {
// @@protoc_insertion_point(message_clear_start:GAME.CS_PING)
  timestamp_ = GOOGLE_LONGLONG(0);
}

bool CS_PING::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GAME.CS_PING)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GAME.CS_PING)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GAME.CS_PING)
  return false;
#undef DO_
}

void CS_PING::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GAME.CS_PING)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 timestamp = 1;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:GAME.CS_PING)
}

::google::protobuf::uint8* CS_PING::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:GAME.CS_PING)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 timestamp = 1;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:GAME.CS_PING)
  return target;
}

size_t CS_PING::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GAME.CS_PING)
  size_t total_size = 0;

  // int64 timestamp = 1;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CS_PING::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GAME.CS_PING)
  GOOGLE_DCHECK_NE(&from, this);
  const CS_PING* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CS_PING>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GAME.CS_PING)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GAME.CS_PING)
    MergeFrom(*source);
  }
}

void CS_PING::MergeFrom(const CS_PING& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GAME.CS_PING)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void CS_PING::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GAME.CS_PING)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CS_PING::CopyFrom(const CS_PING& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GAME.CS_PING)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CS_PING::IsInitialized() const {
  return true;
}

void CS_PING::Swap(CS_PING* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CS_PING::InternalSwap(CS_PING* other) {
  std::swap(timestamp_, other->timestamp_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CS_PING::GetMetadata() const {
  protobuf_GAME_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_GAME_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CS_PING

// int64 timestamp = 1;
void CS_PING::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 CS_PING::timestamp() const {
  // @@protoc_insertion_point(field_get:GAME.CS_PING.timestamp)
  return timestamp_;
}
void CS_PING::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:GAME.CS_PING.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SC_PING::kTimestampFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SC_PING::SC_PING()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_GAME_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:GAME.SC_PING)
}
SC_PING::SC_PING(const SC_PING& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  timestamp_ = from.timestamp_;
  // @@protoc_insertion_point(copy_constructor:GAME.SC_PING)
}

void SC_PING::SharedCtor() {
  timestamp_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

SC_PING::~SC_PING() {
  // @@protoc_insertion_point(destructor:GAME.SC_PING)
  SharedDtor();
}

void SC_PING::SharedDtor() {
}

void SC_PING::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SC_PING::descriptor() {
  protobuf_GAME_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_GAME_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SC_PING& SC_PING::default_instance() {
  protobuf_GAME_2eproto::InitDefaults();
  return *internal_default_instance();
}

SC_PING* SC_PING::New(::google::protobuf::Arena* arena) const {
  SC_PING* n = new SC_PING;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SC_PING::Clear() {
// @@protoc_insertion_point(message_clear_start:GAME.SC_PING)
  timestamp_ = GOOGLE_LONGLONG(0);
}

bool SC_PING::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GAME.SC_PING)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 timestamp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GAME.SC_PING)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GAME.SC_PING)
  return false;
#undef DO_
}

void SC_PING::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GAME.SC_PING)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 timestamp = 1;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->timestamp(), output);
  }

  // @@protoc_insertion_point(serialize_end:GAME.SC_PING)
}

::google::protobuf::uint8* SC_PING::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:GAME.SC_PING)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 timestamp = 1;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->timestamp(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:GAME.SC_PING)
  return target;
}

size_t SC_PING::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GAME.SC_PING)
  size_t total_size = 0;

  // int64 timestamp = 1;
  if (this->timestamp() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->timestamp());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SC_PING::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GAME.SC_PING)
  GOOGLE_DCHECK_NE(&from, this);
  const SC_PING* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SC_PING>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GAME.SC_PING)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GAME.SC_PING)
    MergeFrom(*source);
  }
}

void SC_PING::MergeFrom(const SC_PING& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GAME.SC_PING)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void SC_PING::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GAME.SC_PING)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SC_PING::CopyFrom(const SC_PING& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GAME.SC_PING)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SC_PING::IsInitialized() const {
  return true;
}

void SC_PING::Swap(SC_PING* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SC_PING::InternalSwap(SC_PING* other) {
  std::swap(timestamp_, other->timestamp_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SC_PING::GetMetadata() const {
  protobuf_GAME_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_GAME_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SC_PING

// int64 timestamp = 1;
void SC_PING::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 SC_PING::timestamp() const {
  // @@protoc_insertion_point(field_get:GAME.SC_PING.timestamp)
  return timestamp_;
}
void SC_PING::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:GAME.SC_PING.timestamp)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace GAME

// @@protoc_insertion_point(global_scope)
