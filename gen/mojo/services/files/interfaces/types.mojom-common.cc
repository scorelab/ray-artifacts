// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/files/interfaces/types.mojom-common.h"

#include <math.h>
#include <ostream>

#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/message_validation.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
namespace mojo {
namespace files {

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// static
Timespec_Data* Timespec_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Timespec_Data))) Timespec_Data();
}

// static
mojo::internal::ValidationError Timespec_Data::Validate(
    const void* data,
    mojo::internal::BoundsChecker* bounds_checker,
    std::string* err) {
  mojo::internal::ValidationError retval;
  
  if (!data)
    return mojo::internal::ValidationError::NONE;

  retval = ValidateStructHeaderAndClaimMemory(data, bounds_checker, err);
  if (retval != mojo::internal::ValidationError::NONE)
    return retval;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Timespec_Data* object = static_cast<const Timespec_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
        return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
  }

  return mojo::internal::ValidationError::NONE;
}

void Timespec_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Timespec_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Timespec_Data::Timespec_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// static
TimespecOrNow_Data* TimespecOrNow_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(TimespecOrNow_Data))) TimespecOrNow_Data();
}

// static
mojo::internal::ValidationError TimespecOrNow_Data::Validate(
    const void* data,
    mojo::internal::BoundsChecker* bounds_checker,
    std::string* err) {
  mojo::internal::ValidationError retval;
  
  if (!data)
    return mojo::internal::ValidationError::NONE;

  retval = ValidateStructHeaderAndClaimMemory(data, bounds_checker, err);
  if (retval != mojo::internal::ValidationError::NONE)
    return retval;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const TimespecOrNow_Data* object = static_cast<const TimespecOrNow_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
        return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
  }
  {
    
  if (!mojo::internal::ValidateEncodedPointer(&object->timespec.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  auto validate_retval = Timespec::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->timespec.offset),
          bounds_checker, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void TimespecOrNow_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->timespec, handles);
}

void TimespecOrNow_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->timespec, handles);
}

TimespecOrNow_Data::TimespecOrNow_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// static
FileInformation_Data* FileInformation_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(FileInformation_Data))) FileInformation_Data();
}

// static
mojo::internal::ValidationError FileInformation_Data::Validate(
    const void* data,
    mojo::internal::BoundsChecker* bounds_checker,
    std::string* err) {
  mojo::internal::ValidationError retval;
  
  if (!data)
    return mojo::internal::ValidationError::NONE;

  retval = ValidateStructHeaderAndClaimMemory(data, bounds_checker, err);
  if (retval != mojo::internal::ValidationError::NONE)
    return retval;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const FileInformation_Data* object = static_cast<const FileInformation_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
        return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
  }
  {
    
  if (!mojo::internal::ValidateEncodedPointer(&object->atime.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  auto validate_retval = Timespec::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->atime.offset),
          bounds_checker, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }
  {
    
  if (!mojo::internal::ValidateEncodedPointer(&object->mtime.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  auto validate_retval = Timespec::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->mtime.offset),
          bounds_checker, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void FileInformation_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->atime, handles);
  mojo::internal::Encode(&this->mtime, handles);
}

void FileInformation_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->atime, handles);
  mojo::internal::Decode(&this->mtime, handles);
}

FileInformation_Data::FileInformation_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// static
DirectoryEntry_Data* DirectoryEntry_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DirectoryEntry_Data))) DirectoryEntry_Data();
}

// static
mojo::internal::ValidationError DirectoryEntry_Data::Validate(
    const void* data,
    mojo::internal::BoundsChecker* bounds_checker,
    std::string* err) {
  mojo::internal::ValidationError retval;
  
  if (!data)
    return mojo::internal::ValidationError::NONE;

  retval = ValidateStructHeaderAndClaimMemory(data, bounds_checker, err);
  if (retval != mojo::internal::ValidationError::NONE)
    return retval;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DirectoryEntry_Data* object = static_cast<const DirectoryEntry_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
        return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::UNEXPECTED_STRUCT_HEADER;
  }
  {
    
  if (!object->name.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null name field in DirectoryEntry struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->name.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  const mojo::internal::ArrayValidateParams name_validate_params(
      0, false, nullptr);
  auto validate_retval =
      mojo::String::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->name.offset),
          bounds_checker, &name_validate_params, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void DirectoryEntry_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->name, handles);
}

void DirectoryEntry_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->name, handles);
}

DirectoryEntry_Data::DirectoryEntry_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---

}  // namespace internal

// --- Request and response validator definitions for interfaces --- 

// --- Enums ---
bool Error_IsValidValue(Error value) {
  switch (static_cast<int32_t>(value)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
  }
  return false;
}
  
std::ostream& operator<<(std::ostream& stream, const Error& val) {
  return (stream << static_cast<int32_t>(val));
}
bool Whence_IsValidValue(Whence value) {
  switch (static_cast<int32_t>(value)) {
    case 0:
    case 1:
    case 2:
      return true;
  }
  return false;
}
  
std::ostream& operator<<(std::ostream& stream, const Whence& val) {
  return (stream << static_cast<int32_t>(val));
}
bool FileType_IsValidValue(FileType value) {
  switch (static_cast<int32_t>(value)) {
    case 0:
    case 1:
    case 2:
      return true;
  }
  return false;
}
  
std::ostream& operator<<(std::ostream& stream, const FileType& val) {
  return (stream << static_cast<int32_t>(val));
}

// Base interface definitions (Name_, Version_, Constants, Enums)

// Struct Constants

// --- Struct builder definitions ---

// static
TimespecPtr Timespec::New() {
  TimespecPtr rv;
  mojo::internal::StructHelper<Timespec>::Initialize(&rv);
  return rv;
}

Timespec::Timespec()
    : seconds(),
      nanoseconds() {
}

Timespec::~Timespec() {
}


TimespecPtr Timespec::Clone() const {
  TimespecPtr rv(New());
  rv->seconds = seconds;
  rv->nanoseconds = nanoseconds;
  return rv;
}


bool Timespec::Equals(const Timespec& other) const {
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->seconds, other.seconds))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->nanoseconds, other.nanoseconds))
    return false;
  return true;
}


// static
TimespecOrNowPtr TimespecOrNow::New() {
  TimespecOrNowPtr rv;
  mojo::internal::StructHelper<TimespecOrNow>::Initialize(&rv);
  return rv;
}

TimespecOrNow::TimespecOrNow()
    : now(),
      timespec() {
}

TimespecOrNow::~TimespecOrNow() {
}


TimespecOrNowPtr TimespecOrNow::Clone() const {
  TimespecOrNowPtr rv(New());
  rv->now = now;
  rv->timespec = timespec.Clone();
  return rv;
}


bool TimespecOrNow::Equals(const TimespecOrNow& other) const {
  if (!mojo::internal::ValueTraits<bool>::Equals(this->now, other.now))
    return false;
  if (!mojo::internal::ValueTraits<TimespecPtr>::Equals(this->timespec, other.timespec))
    return false;
  return true;
}


// static
FileInformationPtr FileInformation::New() {
  FileInformationPtr rv;
  mojo::internal::StructHelper<FileInformation>::Initialize(&rv);
  return rv;
}

FileInformation::FileInformation()
    : type(),
      size(),
      atime(),
      mtime() {
}

FileInformation::~FileInformation() {
}


FileInformationPtr FileInformation::Clone() const {
  FileInformationPtr rv(New());
  rv->type = type;
  rv->size = size;
  rv->atime = atime.Clone();
  rv->mtime = mtime.Clone();
  return rv;
}


bool FileInformation::Equals(const FileInformation& other) const {
  if (!mojo::internal::ValueTraits<FileType>::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->size, other.size))
    return false;
  if (!mojo::internal::ValueTraits<TimespecPtr>::Equals(this->atime, other.atime))
    return false;
  if (!mojo::internal::ValueTraits<TimespecPtr>::Equals(this->mtime, other.mtime))
    return false;
  return true;
}


// static
DirectoryEntryPtr DirectoryEntry::New() {
  DirectoryEntryPtr rv;
  mojo::internal::StructHelper<DirectoryEntry>::Initialize(&rv);
  return rv;
}

DirectoryEntry::DirectoryEntry()
    : type(),
      name() {
}

DirectoryEntry::~DirectoryEntry() {
}


DirectoryEntryPtr DirectoryEntry::Clone() const {
  DirectoryEntryPtr rv(New());
  rv->type = type;
  rv->name = name;
  return rv;
}


bool DirectoryEntry::Equals(const DirectoryEntry& other) const {
  if (!mojo::internal::ValueTraits<FileType>::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->name, other.name))
    return false;
  return true;
}


// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

size_t Timespec::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool Timespec::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::Timespec_Data* output_ptr;
  auto err = Serialize_(this, &overlay_buf, &output_ptr);
  if (err != mojo::internal::ValidationError::NONE) {
    // TODO(vardhan): Once Serialize_() outputs handles that it serialized
    // (even partially, if there are failures), we should CHECK fail here if
    // handles are non-empty.
    MOJO_DLOG(ERROR) << "Could not serialize: " <<
        mojo::internal::ValidationErrorToString(err);

    if (bytes_written)
      *bytes_written = overlay_buf.BytesUsed();
    return false;
  }

  std::vector<mojo::Handle> handles;
  output_ptr->EncodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Serialize() does not support handles.";

  if (bytes_written)
    *bytes_written = overlay_buf.BytesUsed();
  return true;
}

bool Timespec::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::Timespec_Data::Validate(buf, &checker, err_str);
  if (err != mojo::internal::ValidationError::NONE) {
    MOJO_DLOG(ERROR) << "Deserialization error "
                     << mojo::internal::ValidationErrorToString(err)
                     << ": " << *err_str;
    return false;
  }

  DeserializeWithoutValidation(buf);
  return true;
}

// TODO(vardhan): Make this |buf| a |const void*| once deserialization becomes
// immutable.
void Timespec::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::Timespec_Data* input =
      static_cast<internal::Timespec_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const Timespec& input) {
  size_t size = sizeof(internal::Timespec_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    Timespec* input,
    mojo::internal::Buffer* buf,
    internal::Timespec_Data** output) {
  if (input) {
    internal::Timespec_Data* result =
        internal::Timespec_Data::New(buf);
    result->seconds = input->seconds;
    result->nanoseconds = input->nanoseconds;
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::Timespec_Data* input,
                  Timespec* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->seconds = input->seconds;
      result->nanoseconds = input->nanoseconds;
    } while (false);
  }
}


size_t TimespecOrNow::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool TimespecOrNow::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::TimespecOrNow_Data* output_ptr;
  auto err = Serialize_(this, &overlay_buf, &output_ptr);
  if (err != mojo::internal::ValidationError::NONE) {
    // TODO(vardhan): Once Serialize_() outputs handles that it serialized
    // (even partially, if there are failures), we should CHECK fail here if
    // handles are non-empty.
    MOJO_DLOG(ERROR) << "Could not serialize: " <<
        mojo::internal::ValidationErrorToString(err);

    if (bytes_written)
      *bytes_written = overlay_buf.BytesUsed();
    return false;
  }

  std::vector<mojo::Handle> handles;
  output_ptr->EncodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Serialize() does not support handles.";

  if (bytes_written)
    *bytes_written = overlay_buf.BytesUsed();
  return true;
}

bool TimespecOrNow::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::TimespecOrNow_Data::Validate(buf, &checker, err_str);
  if (err != mojo::internal::ValidationError::NONE) {
    MOJO_DLOG(ERROR) << "Deserialization error "
                     << mojo::internal::ValidationErrorToString(err)
                     << ": " << *err_str;
    return false;
  }

  DeserializeWithoutValidation(buf);
  return true;
}

// TODO(vardhan): Make this |buf| a |const void*| once deserialization becomes
// immutable.
void TimespecOrNow::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::TimespecOrNow_Data* input =
      static_cast<internal::TimespecOrNow_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const TimespecOrNow& input) {
  size_t size = sizeof(internal::TimespecOrNow_Data);
  size += input.timespec.is_null()
              ? 0
              : GetSerializedSize_(*input.timespec);
  return size;
}

mojo::internal::ValidationError Serialize_(
    TimespecOrNow* input,
    mojo::internal::Buffer* buf,
    internal::TimespecOrNow_Data** output) {
  if (input) {
    internal::TimespecOrNow_Data* result =
        internal::TimespecOrNow_Data::New(buf);
    result->now = input->now;
    {auto retval =Serialize_(input->timespec.get(),
                 buf,
                 &result->timespec.ptr);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::TimespecOrNow_Data* input,
                  TimespecOrNow* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->now = input->now;
      if (input->timespec.ptr) {
        result->timespec = Timespec::New();
        Deserialize_(input->timespec.ptr, result->timespec.get());
      }
    } while (false);
  }
}


size_t FileInformation::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool FileInformation::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::FileInformation_Data* output_ptr;
  auto err = Serialize_(this, &overlay_buf, &output_ptr);
  if (err != mojo::internal::ValidationError::NONE) {
    // TODO(vardhan): Once Serialize_() outputs handles that it serialized
    // (even partially, if there are failures), we should CHECK fail here if
    // handles are non-empty.
    MOJO_DLOG(ERROR) << "Could not serialize: " <<
        mojo::internal::ValidationErrorToString(err);

    if (bytes_written)
      *bytes_written = overlay_buf.BytesUsed();
    return false;
  }

  std::vector<mojo::Handle> handles;
  output_ptr->EncodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Serialize() does not support handles.";

  if (bytes_written)
    *bytes_written = overlay_buf.BytesUsed();
  return true;
}

bool FileInformation::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::FileInformation_Data::Validate(buf, &checker, err_str);
  if (err != mojo::internal::ValidationError::NONE) {
    MOJO_DLOG(ERROR) << "Deserialization error "
                     << mojo::internal::ValidationErrorToString(err)
                     << ": " << *err_str;
    return false;
  }

  DeserializeWithoutValidation(buf);
  return true;
}

// TODO(vardhan): Make this |buf| a |const void*| once deserialization becomes
// immutable.
void FileInformation::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::FileInformation_Data* input =
      static_cast<internal::FileInformation_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const FileInformation& input) {
  size_t size = sizeof(internal::FileInformation_Data);
  size += input.atime.is_null()
              ? 0
              : GetSerializedSize_(*input.atime);
  size += input.mtime.is_null()
              ? 0
              : GetSerializedSize_(*input.mtime);
  return size;
}

mojo::internal::ValidationError Serialize_(
    FileInformation* input,
    mojo::internal::Buffer* buf,
    internal::FileInformation_Data** output) {
  if (input) {
    internal::FileInformation_Data* result =
        internal::FileInformation_Data::New(buf);
    result->type =
      static_cast<int32_t>(input->type);
    result->size = input->size;
    {auto retval =Serialize_(input->atime.get(),
                 buf,
                 &result->atime.ptr);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    {auto retval =Serialize_(input->mtime.get(),
                 buf,
                 &result->mtime.ptr);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::FileInformation_Data* input,
                  FileInformation* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->type = static_cast<FileType>(input->type);
      result->size = input->size;
      if (input->atime.ptr) {
        result->atime = Timespec::New();
        Deserialize_(input->atime.ptr, result->atime.get());
      }
      if (input->mtime.ptr) {
        result->mtime = Timespec::New();
        Deserialize_(input->mtime.ptr, result->mtime.get());
      }
    } while (false);
  }
}


size_t DirectoryEntry::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool DirectoryEntry::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::DirectoryEntry_Data* output_ptr;
  auto err = Serialize_(this, &overlay_buf, &output_ptr);
  if (err != mojo::internal::ValidationError::NONE) {
    // TODO(vardhan): Once Serialize_() outputs handles that it serialized
    // (even partially, if there are failures), we should CHECK fail here if
    // handles are non-empty.
    MOJO_DLOG(ERROR) << "Could not serialize: " <<
        mojo::internal::ValidationErrorToString(err);

    if (bytes_written)
      *bytes_written = overlay_buf.BytesUsed();
    return false;
  }

  std::vector<mojo::Handle> handles;
  output_ptr->EncodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Serialize() does not support handles.";

  if (bytes_written)
    *bytes_written = overlay_buf.BytesUsed();
  return true;
}

bool DirectoryEntry::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::DirectoryEntry_Data::Validate(buf, &checker, err_str);
  if (err != mojo::internal::ValidationError::NONE) {
    MOJO_DLOG(ERROR) << "Deserialization error "
                     << mojo::internal::ValidationErrorToString(err)
                     << ": " << *err_str;
    return false;
  }

  DeserializeWithoutValidation(buf);
  return true;
}

// TODO(vardhan): Make this |buf| a |const void*| once deserialization becomes
// immutable.
void DirectoryEntry::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::DirectoryEntry_Data* input =
      static_cast<internal::DirectoryEntry_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const DirectoryEntry& input) {
  size_t size = sizeof(internal::DirectoryEntry_Data);
  size += GetSerializedSize_(input.name);
  return size;
}

mojo::internal::ValidationError Serialize_(
    DirectoryEntry* input,
    mojo::internal::Buffer* buf,
    internal::DirectoryEntry_Data** output) {
  if (input) {
    internal::DirectoryEntry_Data* result =
        internal::DirectoryEntry_Data::New(buf);
    result->type =
      static_cast<int32_t>(input->type);
    SerializeString_(input->name, buf, &result->name.ptr);
    if (!result->name.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null name in DirectoryEntry struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::DirectoryEntry_Data* input,
                  DirectoryEntry* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->type = static_cast<FileType>(input->type);
      Deserialize_(input->name.ptr, &result->name);
    } while (false);
  }
}


// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---
}  // namespace files
}  // namespace mojo