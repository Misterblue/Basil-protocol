// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BasilMessage.proto

#ifndef PROTOBUF_INCLUDED_BasilMessage_2eproto
#define PROTOBUF_INCLUDED_BasilMessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google
#include "BasilTypes.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_BasilMessage_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_BasilMessage_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_BasilMessage_2eproto();
namespace BasilMessage {
class BasilMessage;
class BasilMessageDefaultTypeInternal;
extern BasilMessageDefaultTypeInternal _BasilMessage_default_instance_;
class BasilMessage_OpParametersEntry_DoNotUse;
class BasilMessage_OpParametersEntry_DoNotUseDefaultTypeInternal;
extern BasilMessage_OpParametersEntry_DoNotUseDefaultTypeInternal _BasilMessage_OpParametersEntry_DoNotUse_default_instance_;
class BasilMessage_PropertiesEntry_DoNotUse;
class BasilMessage_PropertiesEntry_DoNotUseDefaultTypeInternal;
extern BasilMessage_PropertiesEntry_DoNotUseDefaultTypeInternal _BasilMessage_PropertiesEntry_DoNotUse_default_instance_;
}  // namespace BasilMessage
namespace google {
namespace protobuf {
template<> ::BasilMessage::BasilMessage* Arena::CreateMaybeMessage<::BasilMessage::BasilMessage>(Arena*);
template<> ::BasilMessage::BasilMessage_OpParametersEntry_DoNotUse* Arena::CreateMaybeMessage<::BasilMessage::BasilMessage_OpParametersEntry_DoNotUse>(Arena*);
template<> ::BasilMessage::BasilMessage_PropertiesEntry_DoNotUse* Arena::CreateMaybeMessage<::BasilMessage::BasilMessage_PropertiesEntry_DoNotUse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace BasilMessage {

enum TransportClass {
  Default = 0,
  HighPriority = 10,
  MedPriority = 20,
  LowPriority = 30,
  BestCase = 40,
  TransportClass_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  TransportClass_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool TransportClass_IsValid(int value);
constexpr TransportClass TransportClass_MIN = Default;
constexpr TransportClass TransportClass_MAX = BestCase;
constexpr int TransportClass_ARRAYSIZE = TransportClass_MAX + 1;

const ::google::protobuf::EnumDescriptor* TransportClass_descriptor();
inline const ::std::string& TransportClass_Name(TransportClass value) {
  return ::google::protobuf::internal::NameOfEnum(
    TransportClass_descriptor(), value);
}
inline bool TransportClass_Parse(
    const ::std::string& name, TransportClass* value) {
  return ::google::protobuf::internal::ParseNamedEnum<TransportClass>(
    TransportClass_descriptor(), name, value);
}
enum BasilMessageOps {
  UnknownReq = 0,
  IdentifyDisplayableObjectReq = 4097,
  IdentifyDisplayableObjectResp = 4098,
  ForgetDisplayableObjectReq = 4099,
  ForgetDisplayableObjectResp = 4100,
  CreateObjectInstanceReq = 4101,
  CreateObjectInstanceResp = 4102,
  DeleteObjectInstanceReq = 4103,
  DeleteObjectInstanceResp = 4104,
  UpdateObjectPropertyReq = 4105,
  UpdateObjectPropertyResp = 4106,
  UpdateInstancePropertyReq = 4107,
  UpdateInstancePropertyResp = 4108,
  UpdateInstancePositionReq = 4109,
  UpdateInstancePositionResp = 4110,
  RequestObjectPropertiesReq = 4111,
  RequestObjectPropertiesResp = 4112,
  RequestInstancePropertiesReq = 4113,
  RequestInstancePropertiesResp = 4114,
  CloseSessionReq = 4115,
  CloseSessionResp = 4116,
  MakeConnectionReq = 4117,
  MakeConnectionResp = 4118,
  AliveCheckReq = 8193,
  AliveCheckResp = 8194,
  OpenSessionReq = 12289,
  OpenSessionResp = 12290,
  CameraViewReq = 12291,
  CameraViewResp = 12292,
  RegisterTopicReq = 16385,
  RegisterTopicResp = 16386,
  DeregisterTopicReq = 16387,
  DeregisterTopicResp = 16388,
  SubscribeReq = 16389,
  SubscribeResp = 16390,
  UnsubscribeReq = 16391,
  UnsubscribeResp = 16392,
  SendEventReq = 16393,
  SendEventResp = 16400,
  EventReq = 16401,
  EventResp = 16402,
  SubscriptionMadeReq = 16403,
  SubscriptionMadeResp = 16404,
  SubscriptionClearReq = 16405,
  SubscriptionClearResp = 16406,
  BasilMessageOps_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  BasilMessageOps_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool BasilMessageOps_IsValid(int value);
constexpr BasilMessageOps BasilMessageOps_MIN = UnknownReq;
constexpr BasilMessageOps BasilMessageOps_MAX = SubscriptionClearResp;
constexpr int BasilMessageOps_ARRAYSIZE = BasilMessageOps_MAX + 1;

const ::google::protobuf::EnumDescriptor* BasilMessageOps_descriptor();
inline const ::std::string& BasilMessageOps_Name(BasilMessageOps value) {
  return ::google::protobuf::internal::NameOfEnum(
    BasilMessageOps_descriptor(), value);
}
inline bool BasilMessageOps_Parse(
    const ::std::string& name, BasilMessageOps* value) {
  return ::google::protobuf::internal::ParseNamedEnum<BasilMessageOps>(
    BasilMessageOps_descriptor(), name, value);
}
// ===================================================================

class BasilMessage_PropertiesEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<BasilMessage_PropertiesEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<BasilMessage_PropertiesEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  BasilMessage_PropertiesEntry_DoNotUse();
  BasilMessage_PropertiesEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const BasilMessage_PropertiesEntry_DoNotUse& other);
  static const BasilMessage_PropertiesEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const BasilMessage_PropertiesEntry_DoNotUse*>(&_BasilMessage_PropertiesEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class BasilMessage_OpParametersEntry_DoNotUse : public ::google::protobuf::internal::MapEntry<BasilMessage_OpParametersEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > {
public:
  typedef ::google::protobuf::internal::MapEntry<BasilMessage_OpParametersEntry_DoNotUse, 
    ::std::string, ::std::string,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
    0 > SuperType;
  BasilMessage_OpParametersEntry_DoNotUse();
  BasilMessage_OpParametersEntry_DoNotUse(::google::protobuf::Arena* arena);
  void MergeFrom(const BasilMessage_OpParametersEntry_DoNotUse& other);
  static const BasilMessage_OpParametersEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const BasilMessage_OpParametersEntry_DoNotUse*>(&_BasilMessage_OpParametersEntry_DoNotUse_default_instance_); }
  void MergeFrom(const ::google::protobuf::Message& other) final;
  ::google::protobuf::Metadata GetMetadata() const;
};

// -------------------------------------------------------------------

class BasilMessage final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:BasilMessage.BasilMessage) */ {
 public:
  BasilMessage();
  virtual ~BasilMessage();

  BasilMessage(const BasilMessage& from);

  inline BasilMessage& operator=(const BasilMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BasilMessage(BasilMessage&& from) noexcept
    : BasilMessage() {
    *this = ::std::move(from);
  }

  inline BasilMessage& operator=(BasilMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const BasilMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BasilMessage* internal_default_instance() {
    return reinterpret_cast<const BasilMessage*>(
               &_BasilMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(BasilMessage* other);
  friend void swap(BasilMessage& a, BasilMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BasilMessage* New() const final {
    return CreateMaybeMessage<BasilMessage>(nullptr);
  }

  BasilMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<BasilMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const BasilMessage& from);
  void MergeFrom(const BasilMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(BasilMessage* other);
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::google::protobuf::StringPiece FullMessageName() {
    return "BasilMessage.BasilMessage";
  }
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // map<string, string> properties = 9;
  int properties_size() const;
  void clear_properties();
  static const int kPropertiesFieldNumber = 9;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      properties() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_properties();

  // map<string, string> opParameters = 10;
  int opparameters_size() const;
  void clear_opparameters();
  static const int kOpParametersFieldNumber = 10;
  const ::google::protobuf::Map< ::std::string, ::std::string >&
      opparameters() const;
  ::google::protobuf::Map< ::std::string, ::std::string >*
      mutable_opparameters();

  // string filter = 8;
  void clear_filter();
  static const int kFilterFieldNumber = 8;
  const ::std::string& filter() const;
  void set_filter(const ::std::string& value);
  #if LANG_CXX11
  void set_filter(::std::string&& value);
  #endif
  void set_filter(const char* value);
  void set_filter(const char* value, size_t size);
  ::std::string* mutable_filter();
  ::std::string* release_filter();
  void set_allocated_filter(::std::string* filter);

  // .BasilType.AccessAuthorization auth = 2;
  bool has_auth() const;
  void clear_auth();
  static const int kAuthFieldNumber = 2;
  const ::BasilType::AccessAuthorization& auth() const;
  ::BasilType::AccessAuthorization* release_auth();
  ::BasilType::AccessAuthorization* mutable_auth();
  void set_allocated_auth(::BasilType::AccessAuthorization* auth);

  // .BasilType.ObjectIdentifier objectId = 3;
  bool has_objectid() const;
  void clear_objectid();
  static const int kObjectIdFieldNumber = 3;
  const ::BasilType::ObjectIdentifier& objectid() const;
  ::BasilType::ObjectIdentifier* release_objectid();
  ::BasilType::ObjectIdentifier* mutable_objectid();
  void set_allocated_objectid(::BasilType::ObjectIdentifier* objectid);

  // .BasilType.InstanceIdentifier instanceId = 4;
  bool has_instanceid() const;
  void clear_instanceid();
  static const int kInstanceIdFieldNumber = 4;
  const ::BasilType::InstanceIdentifier& instanceid() const;
  ::BasilType::InstanceIdentifier* release_instanceid();
  ::BasilType::InstanceIdentifier* mutable_instanceid();
  void set_allocated_instanceid(::BasilType::InstanceIdentifier* instanceid);

  // .BasilType.InstancePositionInfo pos = 5;
  bool has_pos() const;
  void clear_pos();
  static const int kPosFieldNumber = 5;
  const ::BasilType::InstancePositionInfo& pos() const;
  ::BasilType::InstancePositionInfo* release_pos();
  ::BasilType::InstancePositionInfo* mutable_pos();
  void set_allocated_pos(::BasilType::InstancePositionInfo* pos);

  // .BasilType.AssetInformation assetInfo = 6;
  bool has_assetinfo() const;
  void clear_assetinfo();
  static const int kAssetInfoFieldNumber = 6;
  const ::BasilType::AssetInformation& assetinfo() const;
  ::BasilType::AssetInformation* release_assetinfo();
  ::BasilType::AssetInformation* mutable_assetinfo();
  void set_allocated_assetinfo(::BasilType::AssetInformation* assetinfo);

  // .BasilType.AaBoundingBox aabb = 7;
  bool has_aabb() const;
  void clear_aabb();
  static const int kAabbFieldNumber = 7;
  const ::BasilType::AaBoundingBox& aabb() const;
  ::BasilType::AaBoundingBox* release_aabb();
  ::BasilType::AaBoundingBox* mutable_aabb();
  void set_allocated_aabb(::BasilType::AaBoundingBox* aabb);

  // .BasilType.BasilException exception = 11;
  bool has_exception() const;
  void clear_exception();
  static const int kExceptionFieldNumber = 11;
  const ::BasilType::BasilException& exception() const;
  ::BasilType::BasilException* release_exception();
  ::BasilType::BasilException* mutable_exception();
  void set_allocated_exception(::BasilType::BasilException* exception);

  // .BasilType.BResponseRequest response = 13;
  bool has_response() const;
  void clear_response();
  static const int kResponseFieldNumber = 13;
  const ::BasilType::BResponseRequest& response() const;
  ::BasilType::BResponseRequest* release_response();
  ::BasilType::BResponseRequest* mutable_response();
  void set_allocated_response(::BasilType::BResponseRequest* response);

  // int32 op = 1;
  void clear_op();
  static const int kOpFieldNumber = 1;
  ::google::protobuf::int32 op() const;
  void set_op(::google::protobuf::int32 value);

  // .BasilMessage.TransportClass class = 14;
  void clear_class_();
  static const int kClassFieldNumber = 14;
  ::BasilMessage::TransportClass class_() const;
  void set_class_(::BasilMessage::TransportClass value);

  // @@protoc_insertion_point(class_scope:BasilMessage.BasilMessage)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::MapField<
      BasilMessage_PropertiesEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > properties_;
  ::google::protobuf::internal::MapField<
      BasilMessage_OpParametersEntry_DoNotUse,
      ::std::string, ::std::string,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      0 > opparameters_;
  ::google::protobuf::internal::ArenaStringPtr filter_;
  ::BasilType::AccessAuthorization* auth_;
  ::BasilType::ObjectIdentifier* objectid_;
  ::BasilType::InstanceIdentifier* instanceid_;
  ::BasilType::InstancePositionInfo* pos_;
  ::BasilType::AssetInformation* assetinfo_;
  ::BasilType::AaBoundingBox* aabb_;
  ::BasilType::BasilException* exception_;
  ::BasilType::BResponseRequest* response_;
  ::google::protobuf::int32 op_;
  int class__;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_BasilMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// BasilMessage

// int32 op = 1;
inline void BasilMessage::clear_op() {
  op_ = 0;
}
inline ::google::protobuf::int32 BasilMessage::op() const {
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.op)
  return op_;
}
inline void BasilMessage::set_op(::google::protobuf::int32 value) {
  
  op_ = value;
  // @@protoc_insertion_point(field_set:BasilMessage.BasilMessage.op)
}

// .BasilType.AccessAuthorization auth = 2;
inline bool BasilMessage::has_auth() const {
  return this != internal_default_instance() && auth_ != nullptr;
}
inline const ::BasilType::AccessAuthorization& BasilMessage::auth() const {
  const ::BasilType::AccessAuthorization* p = auth_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.auth)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::AccessAuthorization*>(
      &::BasilType::_AccessAuthorization_default_instance_);
}
inline ::BasilType::AccessAuthorization* BasilMessage::release_auth() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.auth)
  
  ::BasilType::AccessAuthorization* temp = auth_;
  auth_ = nullptr;
  return temp;
}
inline ::BasilType::AccessAuthorization* BasilMessage::mutable_auth() {
  
  if (auth_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::AccessAuthorization>(GetArenaNoVirtual());
    auth_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.auth)
  return auth_;
}
inline void BasilMessage::set_allocated_auth(::BasilType::AccessAuthorization* auth) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(auth_);
  }
  if (auth) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      auth = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, auth, submessage_arena);
    }
    
  } else {
    
  }
  auth_ = auth;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.auth)
}

// .BasilMessage.TransportClass class = 14;
inline void BasilMessage::clear_class_() {
  class__ = 0;
}
inline ::BasilMessage::TransportClass BasilMessage::class_() const {
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.class)
  return static_cast< ::BasilMessage::TransportClass >(class__);
}
inline void BasilMessage::set_class_(::BasilMessage::TransportClass value) {
  
  class__ = value;
  // @@protoc_insertion_point(field_set:BasilMessage.BasilMessage.class)
}

// .BasilType.ObjectIdentifier objectId = 3;
inline bool BasilMessage::has_objectid() const {
  return this != internal_default_instance() && objectid_ != nullptr;
}
inline const ::BasilType::ObjectIdentifier& BasilMessage::objectid() const {
  const ::BasilType::ObjectIdentifier* p = objectid_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.objectId)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::ObjectIdentifier*>(
      &::BasilType::_ObjectIdentifier_default_instance_);
}
inline ::BasilType::ObjectIdentifier* BasilMessage::release_objectid() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.objectId)
  
  ::BasilType::ObjectIdentifier* temp = objectid_;
  objectid_ = nullptr;
  return temp;
}
inline ::BasilType::ObjectIdentifier* BasilMessage::mutable_objectid() {
  
  if (objectid_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::ObjectIdentifier>(GetArenaNoVirtual());
    objectid_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.objectId)
  return objectid_;
}
inline void BasilMessage::set_allocated_objectid(::BasilType::ObjectIdentifier* objectid) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(objectid_);
  }
  if (objectid) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      objectid = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, objectid, submessage_arena);
    }
    
  } else {
    
  }
  objectid_ = objectid;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.objectId)
}

// .BasilType.InstanceIdentifier instanceId = 4;
inline bool BasilMessage::has_instanceid() const {
  return this != internal_default_instance() && instanceid_ != nullptr;
}
inline const ::BasilType::InstanceIdentifier& BasilMessage::instanceid() const {
  const ::BasilType::InstanceIdentifier* p = instanceid_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.instanceId)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::InstanceIdentifier*>(
      &::BasilType::_InstanceIdentifier_default_instance_);
}
inline ::BasilType::InstanceIdentifier* BasilMessage::release_instanceid() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.instanceId)
  
  ::BasilType::InstanceIdentifier* temp = instanceid_;
  instanceid_ = nullptr;
  return temp;
}
inline ::BasilType::InstanceIdentifier* BasilMessage::mutable_instanceid() {
  
  if (instanceid_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::InstanceIdentifier>(GetArenaNoVirtual());
    instanceid_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.instanceId)
  return instanceid_;
}
inline void BasilMessage::set_allocated_instanceid(::BasilType::InstanceIdentifier* instanceid) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(instanceid_);
  }
  if (instanceid) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      instanceid = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, instanceid, submessage_arena);
    }
    
  } else {
    
  }
  instanceid_ = instanceid;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.instanceId)
}

// .BasilType.InstancePositionInfo pos = 5;
inline bool BasilMessage::has_pos() const {
  return this != internal_default_instance() && pos_ != nullptr;
}
inline const ::BasilType::InstancePositionInfo& BasilMessage::pos() const {
  const ::BasilType::InstancePositionInfo* p = pos_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.pos)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::InstancePositionInfo*>(
      &::BasilType::_InstancePositionInfo_default_instance_);
}
inline ::BasilType::InstancePositionInfo* BasilMessage::release_pos() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.pos)
  
  ::BasilType::InstancePositionInfo* temp = pos_;
  pos_ = nullptr;
  return temp;
}
inline ::BasilType::InstancePositionInfo* BasilMessage::mutable_pos() {
  
  if (pos_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::InstancePositionInfo>(GetArenaNoVirtual());
    pos_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.pos)
  return pos_;
}
inline void BasilMessage::set_allocated_pos(::BasilType::InstancePositionInfo* pos) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(pos_);
  }
  if (pos) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      pos = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, pos, submessage_arena);
    }
    
  } else {
    
  }
  pos_ = pos;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.pos)
}

// .BasilType.AssetInformation assetInfo = 6;
inline bool BasilMessage::has_assetinfo() const {
  return this != internal_default_instance() && assetinfo_ != nullptr;
}
inline const ::BasilType::AssetInformation& BasilMessage::assetinfo() const {
  const ::BasilType::AssetInformation* p = assetinfo_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.assetInfo)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::AssetInformation*>(
      &::BasilType::_AssetInformation_default_instance_);
}
inline ::BasilType::AssetInformation* BasilMessage::release_assetinfo() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.assetInfo)
  
  ::BasilType::AssetInformation* temp = assetinfo_;
  assetinfo_ = nullptr;
  return temp;
}
inline ::BasilType::AssetInformation* BasilMessage::mutable_assetinfo() {
  
  if (assetinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::AssetInformation>(GetArenaNoVirtual());
    assetinfo_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.assetInfo)
  return assetinfo_;
}
inline void BasilMessage::set_allocated_assetinfo(::BasilType::AssetInformation* assetinfo) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(assetinfo_);
  }
  if (assetinfo) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      assetinfo = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, assetinfo, submessage_arena);
    }
    
  } else {
    
  }
  assetinfo_ = assetinfo;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.assetInfo)
}

// .BasilType.AaBoundingBox aabb = 7;
inline bool BasilMessage::has_aabb() const {
  return this != internal_default_instance() && aabb_ != nullptr;
}
inline const ::BasilType::AaBoundingBox& BasilMessage::aabb() const {
  const ::BasilType::AaBoundingBox* p = aabb_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.aabb)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::AaBoundingBox*>(
      &::BasilType::_AaBoundingBox_default_instance_);
}
inline ::BasilType::AaBoundingBox* BasilMessage::release_aabb() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.aabb)
  
  ::BasilType::AaBoundingBox* temp = aabb_;
  aabb_ = nullptr;
  return temp;
}
inline ::BasilType::AaBoundingBox* BasilMessage::mutable_aabb() {
  
  if (aabb_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::AaBoundingBox>(GetArenaNoVirtual());
    aabb_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.aabb)
  return aabb_;
}
inline void BasilMessage::set_allocated_aabb(::BasilType::AaBoundingBox* aabb) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(aabb_);
  }
  if (aabb) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      aabb = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, aabb, submessage_arena);
    }
    
  } else {
    
  }
  aabb_ = aabb;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.aabb)
}

// string filter = 8;
inline void BasilMessage::clear_filter() {
  filter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& BasilMessage::filter() const {
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.filter)
  return filter_.GetNoArena();
}
inline void BasilMessage::set_filter(const ::std::string& value) {
  
  filter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:BasilMessage.BasilMessage.filter)
}
#if LANG_CXX11
inline void BasilMessage::set_filter(::std::string&& value) {
  
  filter_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:BasilMessage.BasilMessage.filter)
}
#endif
inline void BasilMessage::set_filter(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  filter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:BasilMessage.BasilMessage.filter)
}
inline void BasilMessage::set_filter(const char* value, size_t size) {
  
  filter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:BasilMessage.BasilMessage.filter)
}
inline ::std::string* BasilMessage::mutable_filter() {
  
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.filter)
  return filter_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BasilMessage::release_filter() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.filter)
  
  return filter_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BasilMessage::set_allocated_filter(::std::string* filter) {
  if (filter != nullptr) {
    
  } else {
    
  }
  filter_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), filter);
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.filter)
}

// map<string, string> properties = 9;
inline int BasilMessage::properties_size() const {
  return properties_.size();
}
inline void BasilMessage::clear_properties() {
  properties_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
BasilMessage::properties() const {
  // @@protoc_insertion_point(field_map:BasilMessage.BasilMessage.properties)
  return properties_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
BasilMessage::mutable_properties() {
  // @@protoc_insertion_point(field_mutable_map:BasilMessage.BasilMessage.properties)
  return properties_.MutableMap();
}

// map<string, string> opParameters = 10;
inline int BasilMessage::opparameters_size() const {
  return opparameters_.size();
}
inline void BasilMessage::clear_opparameters() {
  opparameters_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::std::string >&
BasilMessage::opparameters() const {
  // @@protoc_insertion_point(field_map:BasilMessage.BasilMessage.opParameters)
  return opparameters_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::std::string >*
BasilMessage::mutable_opparameters() {
  // @@protoc_insertion_point(field_mutable_map:BasilMessage.BasilMessage.opParameters)
  return opparameters_.MutableMap();
}

// .BasilType.BasilException exception = 11;
inline bool BasilMessage::has_exception() const {
  return this != internal_default_instance() && exception_ != nullptr;
}
inline const ::BasilType::BasilException& BasilMessage::exception() const {
  const ::BasilType::BasilException* p = exception_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.exception)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::BasilException*>(
      &::BasilType::_BasilException_default_instance_);
}
inline ::BasilType::BasilException* BasilMessage::release_exception() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.exception)
  
  ::BasilType::BasilException* temp = exception_;
  exception_ = nullptr;
  return temp;
}
inline ::BasilType::BasilException* BasilMessage::mutable_exception() {
  
  if (exception_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::BasilException>(GetArenaNoVirtual());
    exception_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.exception)
  return exception_;
}
inline void BasilMessage::set_allocated_exception(::BasilType::BasilException* exception) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(exception_);
  }
  if (exception) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      exception = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, exception, submessage_arena);
    }
    
  } else {
    
  }
  exception_ = exception;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.exception)
}

// .BasilType.BResponseRequest response = 13;
inline bool BasilMessage::has_response() const {
  return this != internal_default_instance() && response_ != nullptr;
}
inline const ::BasilType::BResponseRequest& BasilMessage::response() const {
  const ::BasilType::BResponseRequest* p = response_;
  // @@protoc_insertion_point(field_get:BasilMessage.BasilMessage.response)
  return p != nullptr ? *p : *reinterpret_cast<const ::BasilType::BResponseRequest*>(
      &::BasilType::_BResponseRequest_default_instance_);
}
inline ::BasilType::BResponseRequest* BasilMessage::release_response() {
  // @@protoc_insertion_point(field_release:BasilMessage.BasilMessage.response)
  
  ::BasilType::BResponseRequest* temp = response_;
  response_ = nullptr;
  return temp;
}
inline ::BasilType::BResponseRequest* BasilMessage::mutable_response() {
  
  if (response_ == nullptr) {
    auto* p = CreateMaybeMessage<::BasilType::BResponseRequest>(GetArenaNoVirtual());
    response_ = p;
  }
  // @@protoc_insertion_point(field_mutable:BasilMessage.BasilMessage.response)
  return response_;
}
inline void BasilMessage::set_allocated_response(::BasilType::BResponseRequest* response) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(response_);
  }
  if (response) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      response = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, response, submessage_arena);
    }
    
  } else {
    
  }
  response_ = response;
  // @@protoc_insertion_point(field_set_allocated:BasilMessage.BasilMessage.response)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace BasilMessage

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::BasilMessage::TransportClass> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::BasilMessage::TransportClass>() {
  return ::BasilMessage::TransportClass_descriptor();
}
template <> struct is_proto_enum< ::BasilMessage::BasilMessageOps> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::BasilMessage::BasilMessageOps>() {
  return ::BasilMessage::BasilMessageOps_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_BasilMessage_2eproto
