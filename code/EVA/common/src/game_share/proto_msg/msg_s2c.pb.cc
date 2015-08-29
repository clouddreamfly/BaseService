// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_s2c.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "msg_s2c.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MsgSetSession_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgSetSession_reflection_ = NULL;
const ::google::protobuf::Descriptor* MsgSyncDataCheckSum_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgSyncDataCheckSum_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_5fs2c_2eproto() {
  protobuf_AddDesc_msg_5fs2c_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg_s2c.proto");
  GOOGLE_CHECK(file != NULL);
  MsgSetSession_descriptor_ = file->message_type(0);
  static const int MsgSetSession_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSetSession, seed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSetSession, session_),
  };
  MsgSetSession_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgSetSession_descriptor_,
      MsgSetSession::default_instance_,
      MsgSetSession_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSetSession, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSetSession, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgSetSession));
  MsgSyncDataCheckSum_descriptor_ = file->message_type(1);
  static const int MsgSyncDataCheckSum_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSyncDataCheckSum, item_canuse_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSyncDataCheckSum, item_stuff_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSyncDataCheckSum, item_guard_card_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSyncDataCheckSum, item_use_limit_),
  };
  MsgSyncDataCheckSum_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgSyncDataCheckSum_descriptor_,
      MsgSyncDataCheckSum::default_instance_,
      MsgSyncDataCheckSum_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSyncDataCheckSum, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgSyncDataCheckSum, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgSyncDataCheckSum));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_5fs2c_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgSetSession_descriptor_, &MsgSetSession::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgSyncDataCheckSum_descriptor_, &MsgSyncDataCheckSum::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_5fs2c_2eproto() {
  delete MsgSetSession::default_instance_;
  delete MsgSetSession_reflection_;
  delete MsgSyncDataCheckSum::default_instance_;
  delete MsgSyncDataCheckSum_reflection_;
}

void protobuf_AddDesc_msg_5fs2c_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_define_5fpro_2eproto();
  ::ATTRIB_TYPE::protobuf_AddDesc_define_5fattrib_2eproto();
  ::protobuf_AddDesc_msg_5fplayer_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rmsg_s2c.proto\032\020define_pro.proto\032\023defin"
    "e_attrib.proto\032\020msg_player.proto\".\n\rMsgS"
    "etSession\022\014\n\004seed\030\001 \001(\007\022\017\n\007session\030\002 \001(\006"
    "\"o\n\023MsgSyncDataCheckSum\022\023\n\013item_canuse\030\001"
    " \001(\007\022\022\n\nitem_stuff\030\002 \001(\007\022\027\n\017item_guard_c"
    "ard\030\003 \001(\007\022\026\n\016item_use_limit\030\004 \001(\007", 233);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg_s2c.proto", &protobuf_RegisterTypes);
  MsgSetSession::default_instance_ = new MsgSetSession();
  MsgSyncDataCheckSum::default_instance_ = new MsgSyncDataCheckSum();
  MsgSetSession::default_instance_->InitAsDefaultInstance();
  MsgSyncDataCheckSum::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5fs2c_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5fs2c_2eproto {
  StaticDescriptorInitializer_msg_5fs2c_2eproto() {
    protobuf_AddDesc_msg_5fs2c_2eproto();
  }
} static_descriptor_initializer_msg_5fs2c_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MsgSetSession::kSeedFieldNumber;
const int MsgSetSession::kSessionFieldNumber;
#endif  // !_MSC_VER

MsgSetSession::MsgSetSession()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MsgSetSession)
}

void MsgSetSession::InitAsDefaultInstance() {
}

MsgSetSession::MsgSetSession(const MsgSetSession& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MsgSetSession)
}

void MsgSetSession::SharedCtor() {
  _cached_size_ = 0;
  seed_ = 0u;
  session_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgSetSession::~MsgSetSession() {
  // @@protoc_insertion_point(destructor:MsgSetSession)
  SharedDtor();
}

void MsgSetSession::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MsgSetSession::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgSetSession::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgSetSession_descriptor_;
}

const MsgSetSession& MsgSetSession::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fs2c_2eproto();
  return *default_instance_;
}

MsgSetSession* MsgSetSession::default_instance_ = NULL;

MsgSetSession* MsgSetSession::New() const {
  return new MsgSetSession;
}

void MsgSetSession::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MsgSetSession*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(session_, seed_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgSetSession::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MsgSetSession)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed32 seed = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &seed_)));
          set_has_seed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_session;
        break;
      }

      // optional fixed64 session = 2;
      case 2: {
        if (tag == 17) {
         parse_session:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &session_)));
          set_has_session();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MsgSetSession)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MsgSetSession)
  return false;
#undef DO_
}

void MsgSetSession::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MsgSetSession)
  // optional fixed32 seed = 1;
  if (has_seed()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->seed(), output);
  }

  // optional fixed64 session = 2;
  if (has_session()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->session(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MsgSetSession)
}

::google::protobuf::uint8* MsgSetSession::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgSetSession)
  // optional fixed32 seed = 1;
  if (has_seed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->seed(), target);
  }

  // optional fixed64 session = 2;
  if (has_session()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->session(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgSetSession)
  return target;
}

int MsgSetSession::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional fixed32 seed = 1;
    if (has_seed()) {
      total_size += 1 + 4;
    }

    // optional fixed64 session = 2;
    if (has_session()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgSetSession::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgSetSession* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgSetSession*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgSetSession::MergeFrom(const MsgSetSession& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_seed()) {
      set_seed(from.seed());
    }
    if (from.has_session()) {
      set_session(from.session());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgSetSession::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgSetSession::CopyFrom(const MsgSetSession& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgSetSession::IsInitialized() const {

  return true;
}

void MsgSetSession::Swap(MsgSetSession* other) {
  if (other != this) {
    std::swap(seed_, other->seed_);
    std::swap(session_, other->session_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgSetSession::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgSetSession_descriptor_;
  metadata.reflection = MsgSetSession_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MsgSyncDataCheckSum::kItemCanuseFieldNumber;
const int MsgSyncDataCheckSum::kItemStuffFieldNumber;
const int MsgSyncDataCheckSum::kItemGuardCardFieldNumber;
const int MsgSyncDataCheckSum::kItemUseLimitFieldNumber;
#endif  // !_MSC_VER

MsgSyncDataCheckSum::MsgSyncDataCheckSum()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MsgSyncDataCheckSum)
}

void MsgSyncDataCheckSum::InitAsDefaultInstance() {
}

MsgSyncDataCheckSum::MsgSyncDataCheckSum(const MsgSyncDataCheckSum& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MsgSyncDataCheckSum)
}

void MsgSyncDataCheckSum::SharedCtor() {
  _cached_size_ = 0;
  item_canuse_ = 0u;
  item_stuff_ = 0u;
  item_guard_card_ = 0u;
  item_use_limit_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgSyncDataCheckSum::~MsgSyncDataCheckSum() {
  // @@protoc_insertion_point(destructor:MsgSyncDataCheckSum)
  SharedDtor();
}

void MsgSyncDataCheckSum::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MsgSyncDataCheckSum::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgSyncDataCheckSum::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgSyncDataCheckSum_descriptor_;
}

const MsgSyncDataCheckSum& MsgSyncDataCheckSum::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fs2c_2eproto();
  return *default_instance_;
}

MsgSyncDataCheckSum* MsgSyncDataCheckSum::default_instance_ = NULL;

MsgSyncDataCheckSum* MsgSyncDataCheckSum::New() const {
  return new MsgSyncDataCheckSum;
}

void MsgSyncDataCheckSum::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MsgSyncDataCheckSum*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(item_canuse_, item_use_limit_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgSyncDataCheckSum::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MsgSyncDataCheckSum)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed32 item_canuse = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &item_canuse_)));
          set_has_item_canuse();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_item_stuff;
        break;
      }

      // optional fixed32 item_stuff = 2;
      case 2: {
        if (tag == 21) {
         parse_item_stuff:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &item_stuff_)));
          set_has_item_stuff();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(29)) goto parse_item_guard_card;
        break;
      }

      // optional fixed32 item_guard_card = 3;
      case 3: {
        if (tag == 29) {
         parse_item_guard_card:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &item_guard_card_)));
          set_has_item_guard_card();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_item_use_limit;
        break;
      }

      // optional fixed32 item_use_limit = 4;
      case 4: {
        if (tag == 37) {
         parse_item_use_limit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &item_use_limit_)));
          set_has_item_use_limit();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MsgSyncDataCheckSum)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MsgSyncDataCheckSum)
  return false;
#undef DO_
}

void MsgSyncDataCheckSum::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MsgSyncDataCheckSum)
  // optional fixed32 item_canuse = 1;
  if (has_item_canuse()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(1, this->item_canuse(), output);
  }

  // optional fixed32 item_stuff = 2;
  if (has_item_stuff()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(2, this->item_stuff(), output);
  }

  // optional fixed32 item_guard_card = 3;
  if (has_item_guard_card()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(3, this->item_guard_card(), output);
  }

  // optional fixed32 item_use_limit = 4;
  if (has_item_use_limit()) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(4, this->item_use_limit(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MsgSyncDataCheckSum)
}

::google::protobuf::uint8* MsgSyncDataCheckSum::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgSyncDataCheckSum)
  // optional fixed32 item_canuse = 1;
  if (has_item_canuse()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(1, this->item_canuse(), target);
  }

  // optional fixed32 item_stuff = 2;
  if (has_item_stuff()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(2, this->item_stuff(), target);
  }

  // optional fixed32 item_guard_card = 3;
  if (has_item_guard_card()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(3, this->item_guard_card(), target);
  }

  // optional fixed32 item_use_limit = 4;
  if (has_item_use_limit()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(4, this->item_use_limit(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgSyncDataCheckSum)
  return target;
}

int MsgSyncDataCheckSum::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional fixed32 item_canuse = 1;
    if (has_item_canuse()) {
      total_size += 1 + 4;
    }

    // optional fixed32 item_stuff = 2;
    if (has_item_stuff()) {
      total_size += 1 + 4;
    }

    // optional fixed32 item_guard_card = 3;
    if (has_item_guard_card()) {
      total_size += 1 + 4;
    }

    // optional fixed32 item_use_limit = 4;
    if (has_item_use_limit()) {
      total_size += 1 + 4;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgSyncDataCheckSum::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgSyncDataCheckSum* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgSyncDataCheckSum*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgSyncDataCheckSum::MergeFrom(const MsgSyncDataCheckSum& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_item_canuse()) {
      set_item_canuse(from.item_canuse());
    }
    if (from.has_item_stuff()) {
      set_item_stuff(from.item_stuff());
    }
    if (from.has_item_guard_card()) {
      set_item_guard_card(from.item_guard_card());
    }
    if (from.has_item_use_limit()) {
      set_item_use_limit(from.item_use_limit());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgSyncDataCheckSum::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgSyncDataCheckSum::CopyFrom(const MsgSyncDataCheckSum& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgSyncDataCheckSum::IsInitialized() const {

  return true;
}

void MsgSyncDataCheckSum::Swap(MsgSyncDataCheckSum* other) {
  if (other != this) {
    std::swap(item_canuse_, other->item_canuse_);
    std::swap(item_stuff_, other->item_stuff_);
    std::swap(item_guard_card_, other->item_guard_card_);
    std::swap(item_use_limit_, other->item_use_limit_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgSyncDataCheckSum::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgSyncDataCheckSum_descriptor_;
  metadata.reflection = MsgSyncDataCheckSum_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)