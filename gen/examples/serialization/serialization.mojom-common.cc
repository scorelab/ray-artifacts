// NOTE: This file was generated by the Mojo bindings generator.
#include "examples/serialization/serialization.mojom-common.h"

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
namespace examples {

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// static
MyStruct_Data* MyStruct_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MyStruct_Data))) MyStruct_Data();
}

// static
mojo::internal::ValidationError MyStruct_Data::Validate(
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
  const MyStruct_Data* object = static_cast<const MyStruct_Data*>(data);

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
    
  if (!object->c.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null c field in MyStruct struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->c.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  const mojo::internal::ArrayValidateParams c_validate_params(
      0, false, nullptr);
  auto validate_retval =
      mojo::String::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->c.offset),
          bounds_checker, &c_validate_params, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void MyStruct_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->c, handles);
}

void MyStruct_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->c, handles);
}

MyStruct_Data::MyStruct_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---

}  // namespace internal

// --- Request and response validator definitions for interfaces --- 

// --- Enums ---

// Base interface definitions (Name_, Version_, Constants, Enums)

// Struct Constants

// --- Struct builder definitions ---

// static
MyStructPtr MyStruct::New() {
  MyStructPtr rv;
  mojo::internal::StructHelper<MyStruct>::Initialize(&rv);
  return rv;
}

MyStruct::MyStruct()
    : a(),
      b(),
      c() {
}

MyStruct::~MyStruct() {
}


MyStructPtr MyStruct::Clone() const {
  MyStructPtr rv(New());
  rv->a = a;
  rv->b = b;
  rv->c = c;
  return rv;
}


bool MyStruct::Equals(const MyStruct& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->a, other.a))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->b, other.b))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->c, other.c))
    return false;
  return true;
}


// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

size_t MyStruct::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool MyStruct::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::MyStruct_Data* output_ptr;
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

bool MyStruct::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::MyStruct_Data::Validate(buf, &checker, err_str);
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
void MyStruct::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::MyStruct_Data* input =
      static_cast<internal::MyStruct_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const MyStruct& input) {
  size_t size = sizeof(internal::MyStruct_Data);
  size += GetSerializedSize_(input.c);
  return size;
}

mojo::internal::ValidationError Serialize_(
    MyStruct* input,
    mojo::internal::Buffer* buf,
    internal::MyStruct_Data** output) {
  if (input) {
    internal::MyStruct_Data* result =
        internal::MyStruct_Data::New(buf);
    result->a = input->a;
    result->b = input->b;
    SerializeString_(input->c, buf, &result->c.ptr);
    if (!result->c.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null c in MyStruct struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::MyStruct_Data* input,
                  MyStruct* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->a = input->a;
      result->b = input->b;
      Deserialize_(input->c.ptr, &result->c);
    } while (false);
  }
}


// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---
}  // namespace examples
