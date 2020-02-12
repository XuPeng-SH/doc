// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: status.proto

#include "status.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace demo {
class StatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Status> _instance;
} _Status_default_instance_;
}  // namespace demo
static void InitDefaultsscc_info_Status_status_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::demo::_Status_default_instance_;
    new (ptr) ::demo::Status();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::demo::Status::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Status_status_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Status_status_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_status_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_status_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_status_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_status_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::demo::Status, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::demo::Status, error_code_),
  PROTOBUF_FIELD_OFFSET(::demo::Status, reason_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::demo::Status)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::demo::_Status_default_instance_),
};

const char descriptor_table_protodef_status_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014status.proto\022\004demo\"=\n\006Status\022#\n\nerror_"
  "code\030\001 \001(\0162\017.demo.ErrorCode\022\016\n\006reason\030\002 "
  "\001(\t*\253\004\n\tErrorCode\022\013\n\007SUCCESS\020\000\022\024\n\020UNEXPE"
  "CTED_ERROR\020\001\022\022\n\016CONNECT_FAILED\020\002\022\025\n\021PERM"
  "ISSION_DENIED\020\003\022\024\n\020TABLE_NOT_EXISTS\020\004\022\024\n"
  "\020ILLEGAL_ARGUMENT\020\005\022\021\n\rILLEGAL_RANGE\020\006\022\025"
  "\n\021ILLEGAL_DIMENSION\020\007\022\026\n\022ILLEGAL_INDEX_T"
  "YPE\020\010\022\026\n\022ILLEGAL_TABLE_NAME\020\t\022\020\n\014ILLEGAL"
  "_TOPK\020\n\022\025\n\021ILLEGAL_ROWRECORD\020\013\022\025\n\021ILLEGA"
  "L_VECTOR_ID\020\014\022\031\n\025ILLEGAL_SEARCH_RESULT\020\r"
  "\022\022\n\016FILE_NOT_FOUND\020\016\022\017\n\013META_FAILED\020\017\022\020\n"
  "\014CACHE_FAILED\020\020\022\030\n\024CANNOT_CREATE_FOLDER\020"
  "\021\022\026\n\022CANNOT_CREATE_FILE\020\022\022\030\n\024CANNOT_DELE"
  "TE_FOLDER\020\023\022\026\n\022CANNOT_DELETE_FILE\020\024\022\025\n\021B"
  "UILD_INDEX_ERROR\020\025\022\021\n\rILLEGAL_NLIST\020\026\022\027\n"
  "\023ILLEGAL_METRIC_TYPE\020\027\022\021\n\rOUT_OF_MEMORY\020"
  "\030b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_status_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_status_2eproto_sccs[1] = {
  &scc_info_Status_status_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_status_2eproto_once;
static bool descriptor_table_status_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_status_2eproto = {
  &descriptor_table_status_2eproto_initialized, descriptor_table_protodef_status_2eproto, "status.proto", 649,
  &descriptor_table_status_2eproto_once, descriptor_table_status_2eproto_sccs, descriptor_table_status_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_status_2eproto::offsets,
  file_level_metadata_status_2eproto, 1, file_level_enum_descriptors_status_2eproto, file_level_service_descriptors_status_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_status_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_status_2eproto), true);
namespace demo {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ErrorCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_status_2eproto);
  return file_level_enum_descriptors_status_2eproto[0];
}
bool ErrorCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Status::InitAsDefaultInstance() {
}
class Status::_Internal {
 public:
};

Status::Status()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:demo.Status)
}
Status::Status(const Status& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_reason().empty()) {
    reason_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.reason_);
  }
  error_code_ = from.error_code_;
  // @@protoc_insertion_point(copy_constructor:demo.Status)
}

void Status::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Status_status_2eproto.base);
  reason_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_code_ = 0;
}

Status::~Status() {
  // @@protoc_insertion_point(destructor:demo.Status)
  SharedDtor();
}

void Status::SharedDtor() {
  reason_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Status::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Status& Status::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Status_status_2eproto.base);
  return *internal_default_instance();
}


void Status::Clear() {
// @@protoc_insertion_point(message_clear_start:demo.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  reason_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  error_code_ = 0;
  _internal_metadata_.Clear();
}

const char* Status::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .demo.ErrorCode error_code = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          _internal_set_error_code(static_cast<::demo::ErrorCode>(val));
        } else goto handle_unusual;
        continue;
      // string reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(_internal_mutable_reason(), ptr, ctx, "demo.Status.reason");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Status::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:demo.Status)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .demo.ErrorCode error_code = 1;
  if (this->error_code() != 0) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_error_code(), target);
  }

  // string reason = 2;
  if (this->reason().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_reason().data(), static_cast<int>(this->_internal_reason().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "demo.Status.reason");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_reason(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:demo.Status)
  return target;
}

size_t Status::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:demo.Status)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string reason = 2;
  if (this->reason().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_reason());
  }

  // .demo.ErrorCode error_code = 1;
  if (this->error_code() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_error_code());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Status::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:demo.Status)
  GOOGLE_DCHECK_NE(&from, this);
  const Status* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Status>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:demo.Status)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:demo.Status)
    MergeFrom(*source);
  }
}

void Status::MergeFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:demo.Status)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.reason().size() > 0) {

    reason_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.reason_);
  }
  if (from.error_code() != 0) {
    _internal_set_error_code(from._internal_error_code());
  }
}

void Status::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:demo.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Status::CopyFrom(const Status& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:demo.Status)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Status::IsInitialized() const {
  return true;
}

void Status::InternalSwap(Status* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  reason_.Swap(&other->reason_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(error_code_, other->error_code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Status::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace demo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::demo::Status* Arena::CreateMaybeMessage< ::demo::Status >(Arena* arena) {
  return Arena::CreateInternal< ::demo::Status >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
