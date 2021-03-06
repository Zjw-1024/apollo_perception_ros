// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/can_card_parameter.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto/can_card_parameter.pb.h"

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

namespace apollo_perception_standalone {
class CANCardParameterDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<CANCardParameter> {
} _CANCardParameter_default_instance_;

namespace protobuf_proto_2fcan_5fcard_5fparameter_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[3];

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
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CANCardParameter, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CANCardParameter, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CANCardParameter, brand_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CANCardParameter, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CANCardParameter, channel_id_),
  0,
  1,
  2,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(CANCardParameter)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_CANCardParameter_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "proto/can_card_parameter.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _CANCardParameter_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _CANCardParameter_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\036proto/can_card_parameter.proto\022\034apollo"
      "_perception_standalone\"\326\003\n\020CANCardParame"
      "ter\022J\n\005brand\030\001 \001(\0162;.apollo_perception_s"
      "tandalone.CANCardParameter.CANCardBrand\022"
      "H\n\004type\030\002 \001(\0162:.apollo_perception_standa"
      "lone.CANCardParameter.CANCardType\022O\n\ncha"
      "nnel_id\030\003 \001(\0162;.apollo_perception_standa"
      "lone.CANCardParameter.CANChannelId\"M\n\014CA"
      "NCardBrand\022\014\n\010FAKE_CAN\020\000\022\013\n\007ESD_CAN\020\001\022\022\n"
      "\016SOCKET_CAN_RAW\020\002\022\016\n\nHERMES_CAN\020\003\")\n\013CAN"
      "CardType\022\014\n\010PCI_CARD\020\000\022\014\n\010USB_CARD\020\001\"a\n\014"
      "CANChannelId\022\023\n\017CHANNEL_ID_ZERO\020\000\022\022\n\016CHA"
      "NNEL_ID_ONE\020\001\022\022\n\016CHANNEL_ID_TWO\020\002\022\024\n\020CHA"
      "NNEL_ID_THREE\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 535);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto/can_card_parameter.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_proto_2fcan_5fcard_5fparameter_2eproto

const ::google::protobuf::EnumDescriptor* CANCardParameter_CANCardBrand_descriptor() {
  protobuf_proto_2fcan_5fcard_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fcan_5fcard_5fparameter_2eproto::file_level_enum_descriptors[0];
}
bool CANCardParameter_CANCardBrand_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CANCardParameter_CANCardBrand CANCardParameter::FAKE_CAN;
const CANCardParameter_CANCardBrand CANCardParameter::ESD_CAN;
const CANCardParameter_CANCardBrand CANCardParameter::SOCKET_CAN_RAW;
const CANCardParameter_CANCardBrand CANCardParameter::HERMES_CAN;
const CANCardParameter_CANCardBrand CANCardParameter::CANCardBrand_MIN;
const CANCardParameter_CANCardBrand CANCardParameter::CANCardBrand_MAX;
const int CANCardParameter::CANCardBrand_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* CANCardParameter_CANCardType_descriptor() {
  protobuf_proto_2fcan_5fcard_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fcan_5fcard_5fparameter_2eproto::file_level_enum_descriptors[1];
}
bool CANCardParameter_CANCardType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CANCardParameter_CANCardType CANCardParameter::PCI_CARD;
const CANCardParameter_CANCardType CANCardParameter::USB_CARD;
const CANCardParameter_CANCardType CANCardParameter::CANCardType_MIN;
const CANCardParameter_CANCardType CANCardParameter::CANCardType_MAX;
const int CANCardParameter::CANCardType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* CANCardParameter_CANChannelId_descriptor() {
  protobuf_proto_2fcan_5fcard_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fcan_5fcard_5fparameter_2eproto::file_level_enum_descriptors[2];
}
bool CANCardParameter_CANChannelId_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const CANCardParameter_CANChannelId CANCardParameter::CHANNEL_ID_ZERO;
const CANCardParameter_CANChannelId CANCardParameter::CHANNEL_ID_ONE;
const CANCardParameter_CANChannelId CANCardParameter::CHANNEL_ID_TWO;
const CANCardParameter_CANChannelId CANCardParameter::CHANNEL_ID_THREE;
const CANCardParameter_CANChannelId CANCardParameter::CANChannelId_MIN;
const CANCardParameter_CANChannelId CANCardParameter::CANChannelId_MAX;
const int CANCardParameter::CANChannelId_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CANCardParameter::kBrandFieldNumber;
const int CANCardParameter::kTypeFieldNumber;
const int CANCardParameter::kChannelIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CANCardParameter::CANCardParameter()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_proto_2fcan_5fcard_5fparameter_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo_perception_standalone.CANCardParameter)
}
CANCardParameter::CANCardParameter(const CANCardParameter& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&brand_, &from.brand_,
    reinterpret_cast<char*>(&channel_id_) -
    reinterpret_cast<char*>(&brand_) + sizeof(channel_id_));
  // @@protoc_insertion_point(copy_constructor:apollo_perception_standalone.CANCardParameter)
}

void CANCardParameter::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&brand_, 0, reinterpret_cast<char*>(&channel_id_) -
    reinterpret_cast<char*>(&brand_) + sizeof(channel_id_));
}

CANCardParameter::~CANCardParameter() {
  // @@protoc_insertion_point(destructor:apollo_perception_standalone.CANCardParameter)
  SharedDtor();
}

void CANCardParameter::SharedDtor() {
}

void CANCardParameter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CANCardParameter::descriptor() {
  protobuf_proto_2fcan_5fcard_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fcan_5fcard_5fparameter_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CANCardParameter& CANCardParameter::default_instance() {
  protobuf_proto_2fcan_5fcard_5fparameter_2eproto::InitDefaults();
  return *internal_default_instance();
}

CANCardParameter* CANCardParameter::New(::google::protobuf::Arena* arena) const {
  CANCardParameter* n = new CANCardParameter;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CANCardParameter::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo_perception_standalone.CANCardParameter)
  if (_has_bits_[0 / 32] & 7u) {
    ::memset(&brand_, 0, reinterpret_cast<char*>(&channel_id_) -
      reinterpret_cast<char*>(&brand_) + sizeof(channel_id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CANCardParameter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo_perception_standalone.CANCardParameter)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo_perception_standalone.CANCardParameter.CANCardBrand brand = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo_perception_standalone::CANCardParameter_CANCardBrand_IsValid(value)) {
            set_brand(static_cast< ::apollo_perception_standalone::CANCardParameter_CANCardBrand >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo_perception_standalone.CANCardParameter.CANCardType type = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo_perception_standalone::CANCardParameter_CANCardType_IsValid(value)) {
            set_type(static_cast< ::apollo_perception_standalone::CANCardParameter_CANCardType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .apollo_perception_standalone.CANCardParameter.CANChannelId channel_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo_perception_standalone::CANCardParameter_CANChannelId_IsValid(value)) {
            set_channel_id(static_cast< ::apollo_perception_standalone::CANCardParameter_CANChannelId >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo_perception_standalone.CANCardParameter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo_perception_standalone.CANCardParameter)
  return false;
#undef DO_
}

void CANCardParameter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo_perception_standalone.CANCardParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo_perception_standalone.CANCardParameter.CANCardBrand brand = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->brand(), output);
  }

  // optional .apollo_perception_standalone.CANCardParameter.CANCardType type = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  // optional .apollo_perception_standalone.CANCardParameter.CANChannelId channel_id = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->channel_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo_perception_standalone.CANCardParameter)
}

::google::protobuf::uint8* CANCardParameter::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo_perception_standalone.CANCardParameter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo_perception_standalone.CANCardParameter.CANCardBrand brand = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->brand(), target);
  }

  // optional .apollo_perception_standalone.CANCardParameter.CANCardType type = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  // optional .apollo_perception_standalone.CANCardParameter.CANChannelId channel_id = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->channel_id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo_perception_standalone.CANCardParameter)
  return target;
}

size_t CANCardParameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo_perception_standalone.CANCardParameter)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional .apollo_perception_standalone.CANCardParameter.CANCardBrand brand = 1;
    if (has_brand()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->brand());
    }

    // optional .apollo_perception_standalone.CANCardParameter.CANCardType type = 2;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .apollo_perception_standalone.CANCardParameter.CANChannelId channel_id = 3;
    if (has_channel_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->channel_id());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CANCardParameter::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo_perception_standalone.CANCardParameter)
  GOOGLE_DCHECK_NE(&from, this);
  const CANCardParameter* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CANCardParameter>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo_perception_standalone.CANCardParameter)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo_perception_standalone.CANCardParameter)
    MergeFrom(*source);
  }
}

void CANCardParameter::MergeFrom(const CANCardParameter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo_perception_standalone.CANCardParameter)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      brand_ = from.brand_;
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000004u) {
      channel_id_ = from.channel_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CANCardParameter::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo_perception_standalone.CANCardParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CANCardParameter::CopyFrom(const CANCardParameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo_perception_standalone.CANCardParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CANCardParameter::IsInitialized() const {
  return true;
}

void CANCardParameter::Swap(CANCardParameter* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CANCardParameter::InternalSwap(CANCardParameter* other) {
  std::swap(brand_, other->brand_);
  std::swap(type_, other->type_);
  std::swap(channel_id_, other->channel_id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CANCardParameter::GetMetadata() const {
  protobuf_proto_2fcan_5fcard_5fparameter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_proto_2fcan_5fcard_5fparameter_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CANCardParameter

// optional .apollo_perception_standalone.CANCardParameter.CANCardBrand brand = 1;
bool CANCardParameter::has_brand() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CANCardParameter::set_has_brand() {
  _has_bits_[0] |= 0x00000001u;
}
void CANCardParameter::clear_has_brand() {
  _has_bits_[0] &= ~0x00000001u;
}
void CANCardParameter::clear_brand() {
  brand_ = 0;
  clear_has_brand();
}
::apollo_perception_standalone::CANCardParameter_CANCardBrand CANCardParameter::brand() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.CANCardParameter.brand)
  return static_cast< ::apollo_perception_standalone::CANCardParameter_CANCardBrand >(brand_);
}
void CANCardParameter::set_brand(::apollo_perception_standalone::CANCardParameter_CANCardBrand value) {
  assert(::apollo_perception_standalone::CANCardParameter_CANCardBrand_IsValid(value));
  set_has_brand();
  brand_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.CANCardParameter.brand)
}

// optional .apollo_perception_standalone.CANCardParameter.CANCardType type = 2;
bool CANCardParameter::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CANCardParameter::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
void CANCardParameter::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
void CANCardParameter::clear_type() {
  type_ = 0;
  clear_has_type();
}
::apollo_perception_standalone::CANCardParameter_CANCardType CANCardParameter::type() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.CANCardParameter.type)
  return static_cast< ::apollo_perception_standalone::CANCardParameter_CANCardType >(type_);
}
void CANCardParameter::set_type(::apollo_perception_standalone::CANCardParameter_CANCardType value) {
  assert(::apollo_perception_standalone::CANCardParameter_CANCardType_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.CANCardParameter.type)
}

// optional .apollo_perception_standalone.CANCardParameter.CANChannelId channel_id = 3;
bool CANCardParameter::has_channel_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CANCardParameter::set_has_channel_id() {
  _has_bits_[0] |= 0x00000004u;
}
void CANCardParameter::clear_has_channel_id() {
  _has_bits_[0] &= ~0x00000004u;
}
void CANCardParameter::clear_channel_id() {
  channel_id_ = 0;
  clear_has_channel_id();
}
::apollo_perception_standalone::CANCardParameter_CANChannelId CANCardParameter::channel_id() const {
  // @@protoc_insertion_point(field_get:apollo_perception_standalone.CANCardParameter.channel_id)
  return static_cast< ::apollo_perception_standalone::CANCardParameter_CANChannelId >(channel_id_);
}
void CANCardParameter::set_channel_id(::apollo_perception_standalone::CANCardParameter_CANChannelId value) {
  assert(::apollo_perception_standalone::CANCardParameter_CANChannelId_IsValid(value));
  set_has_channel_id();
  channel_id_ = value;
  // @@protoc_insertion_point(field_set:apollo_perception_standalone.CANCardParameter.channel_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace apollo_perception_standalone

// @@protoc_insertion_point(global_scope)
