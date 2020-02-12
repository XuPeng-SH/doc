// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_status_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_status_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_status_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_status_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_status_2eproto;
namespace demo {
class Status;
class StatusDefaultTypeInternal;
extern StatusDefaultTypeInternal _Status_default_instance_;
}  // namespace demo
PROTOBUF_NAMESPACE_OPEN
template<> ::demo::Status* Arena::CreateMaybeMessage<::demo::Status>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace demo {

enum ErrorCode : int {
  SUCCESS = 0,
  UNEXPECTED_ERROR = 1,
  CONNECT_FAILED = 2,
  PERMISSION_DENIED = 3,
  TABLE_NOT_EXISTS = 4,
  ILLEGAL_ARGUMENT = 5,
  ILLEGAL_RANGE = 6,
  ILLEGAL_DIMENSION = 7,
  ILLEGAL_INDEX_TYPE = 8,
  ILLEGAL_TABLE_NAME = 9,
  ILLEGAL_TOPK = 10,
  ILLEGAL_ROWRECORD = 11,
  ILLEGAL_VECTOR_ID = 12,
  ILLEGAL_SEARCH_RESULT = 13,
  FILE_NOT_FOUND = 14,
  META_FAILED = 15,
  CACHE_FAILED = 16,
  CANNOT_CREATE_FOLDER = 17,
  CANNOT_CREATE_FILE = 18,
  CANNOT_DELETE_FOLDER = 19,
  CANNOT_DELETE_FILE = 20,
  BUILD_INDEX_ERROR = 21,
  ILLEGAL_NLIST = 22,
  ILLEGAL_METRIC_TYPE = 23,
  OUT_OF_MEMORY = 24,
  ErrorCode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ErrorCode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ErrorCode_IsValid(int value);
constexpr ErrorCode ErrorCode_MIN = SUCCESS;
constexpr ErrorCode ErrorCode_MAX = OUT_OF_MEMORY;
constexpr int ErrorCode_ARRAYSIZE = ErrorCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorCode_descriptor();
template<typename T>
inline const std::string& ErrorCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ErrorCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ErrorCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ErrorCode_descriptor(), enum_t_value);
}
inline bool ErrorCode_Parse(
    const std::string& name, ErrorCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ErrorCode>(
    ErrorCode_descriptor(), name, value);
}
// ===================================================================

class Status :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:demo.Status) */ {
 public:
  Status();
  virtual ~Status();

  Status(const Status& from);
  Status(Status&& from) noexcept
    : Status() {
    *this = ::std::move(from);
  }

  inline Status& operator=(const Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Status& operator=(Status&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Status* internal_default_instance() {
    return reinterpret_cast<const Status*>(
               &_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Status& a, Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Status* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Status* New() const final {
    return CreateMaybeMessage<Status>(nullptr);
  }

  Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Status>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Status& from);
  void MergeFrom(const Status& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Status* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "demo.Status";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_status_2eproto);
    return ::descriptor_table_status_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReasonFieldNumber = 2,
    kErrorCodeFieldNumber = 1,
  };
  // string reason = 2;
  void clear_reason();
  const std::string& reason() const;
  void set_reason(const std::string& value);
  void set_reason(std::string&& value);
  void set_reason(const char* value);
  void set_reason(const char* value, size_t size);
  std::string* mutable_reason();
  std::string* release_reason();
  void set_allocated_reason(std::string* reason);
  private:
  const std::string& _internal_reason() const;
  void _internal_set_reason(const std::string& value);
  std::string* _internal_mutable_reason();
  public:

  // .demo.ErrorCode error_code = 1;
  void clear_error_code();
  ::demo::ErrorCode error_code() const;
  void set_error_code(::demo::ErrorCode value);
  private:
  ::demo::ErrorCode _internal_error_code() const;
  void _internal_set_error_code(::demo::ErrorCode value);
  public:

  // @@protoc_insertion_point(class_scope:demo.Status)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr reason_;
  int error_code_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_status_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Status

// .demo.ErrorCode error_code = 1;
inline void Status::clear_error_code() {
  error_code_ = 0;
}
inline ::demo::ErrorCode Status::_internal_error_code() const {
  return static_cast< ::demo::ErrorCode >(error_code_);
}
inline ::demo::ErrorCode Status::error_code() const {
  // @@protoc_insertion_point(field_get:demo.Status.error_code)
  return _internal_error_code();
}
inline void Status::_internal_set_error_code(::demo::ErrorCode value) {
  
  error_code_ = value;
}
inline void Status::set_error_code(::demo::ErrorCode value) {
  _internal_set_error_code(value);
  // @@protoc_insertion_point(field_set:demo.Status.error_code)
}

// string reason = 2;
inline void Status::clear_reason() {
  reason_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Status::reason() const {
  // @@protoc_insertion_point(field_get:demo.Status.reason)
  return _internal_reason();
}
inline void Status::set_reason(const std::string& value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:demo.Status.reason)
}
inline std::string* Status::mutable_reason() {
  // @@protoc_insertion_point(field_mutable:demo.Status.reason)
  return _internal_mutable_reason();
}
inline const std::string& Status::_internal_reason() const {
  return reason_.GetNoArena();
}
inline void Status::_internal_set_reason(const std::string& value) {
  
  reason_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Status::set_reason(std::string&& value) {
  
  reason_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:demo.Status.reason)
}
inline void Status::set_reason(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  reason_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:demo.Status.reason)
}
inline void Status::set_reason(const char* value, size_t size) {
  
  reason_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:demo.Status.reason)
}
inline std::string* Status::_internal_mutable_reason() {
  
  return reason_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Status::release_reason() {
  // @@protoc_insertion_point(field_release:demo.Status.reason)
  
  return reason_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Status::set_allocated_reason(std::string* reason) {
  if (reason != nullptr) {
    
  } else {
    
  }
  reason_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), reason);
  // @@protoc_insertion_point(field_set_allocated:demo.Status.reason)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace demo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::demo::ErrorCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::demo::ErrorCode>() {
  return ::demo::ErrorCode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_status_2eproto
