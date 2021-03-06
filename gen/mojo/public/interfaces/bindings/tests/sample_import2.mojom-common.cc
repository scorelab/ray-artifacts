// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/public/interfaces/bindings/tests/sample_import2.mojom-common.h"

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
namespace imported {

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// static
Size_Data* Size_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Size_Data))) Size_Data();
}

// static
mojo::internal::ValidationError Size_Data::Validate(
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
  const Size_Data* object = static_cast<const Size_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

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

void Size_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Size_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Size_Data::Size_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// static
Thing_Data* Thing_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Thing_Data))) Thing_Data();
}

// static
mojo::internal::ValidationError Thing_Data::Validate(
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
  const Thing_Data* object = static_cast<const Thing_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

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
    
  if (!object->location.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null location field in Thing struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->location.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  auto validate_retval = imported::Point::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->location.offset),
          bounds_checker, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }
  {
    
  if (!object->size.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null size field in Thing struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->size.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  auto validate_retval = Size::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->size.offset),
          bounds_checker, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void Thing_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->location, handles);
  mojo::internal::Encode(&this->size, handles);
}

void Thing_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->location, handles);
  mojo::internal::Decode(&this->size, handles);
}

Thing_Data::Thing_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---

}  // namespace internal

// --- Request and response validator definitions for interfaces --- 

// --- Enums ---
bool Color_IsValidValue(Color value) {
  switch (static_cast<int32_t>(value)) {
    case 0:
    case 1:
      return true;
  }
  return false;
}
  
std::ostream& operator<<(std::ostream& stream, const Color& val) {
  return (stream << static_cast<int32_t>(val));
}

// Base interface definitions (Name_, Version_, Constants, Enums)

// Struct Constants

// --- Struct builder definitions ---

// static
SizePtr Size::New() {
  SizePtr rv;
  mojo::internal::StructHelper<Size>::Initialize(&rv);
  return rv;
}

Size::Size()
    : width(),
      height() {
}

Size::~Size() {
}


SizePtr Size::Clone() const {
  SizePtr rv(New());
  rv->width = width;
  rv->height = height;
  return rv;
}


bool Size::Equals(const Size& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->height, other.height))
    return false;
  return true;
}


// static
ThingPtr Thing::New() {
  ThingPtr rv;
  mojo::internal::StructHelper<Thing>::Initialize(&rv);
  return rv;
}

Thing::Thing()
    : shape(imported::Shape::RECTANGLE),
      color(Color::BLACK),
      location(),
      size() {
}

Thing::~Thing() {
}


ThingPtr Thing::Clone() const {
  ThingPtr rv(New());
  rv->shape = shape;
  rv->color = color;
  rv->location = location.Clone();
  rv->size = size.Clone();
  return rv;
}


bool Thing::Equals(const Thing& other) const {
  if (!mojo::internal::ValueTraits<imported::Shape>::Equals(this->shape, other.shape))
    return false;
  if (!mojo::internal::ValueTraits<Color>::Equals(this->color, other.color))
    return false;
  if (!mojo::internal::ValueTraits<imported::PointPtr>::Equals(this->location, other.location))
    return false;
  if (!mojo::internal::ValueTraits<SizePtr>::Equals(this->size, other.size))
    return false;
  return true;
}


// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

size_t Size::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool Size::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::Size_Data* output_ptr;
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

bool Size::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::Size_Data::Validate(buf, &checker, err_str);
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
void Size::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::Size_Data* input =
      static_cast<internal::Size_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const Size& input) {
  size_t size = sizeof(internal::Size_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    Size* input,
    mojo::internal::Buffer* buf,
    internal::Size_Data** output) {
  if (input) {
    internal::Size_Data* result =
        internal::Size_Data::New(buf);
    result->width = input->width;
    result->height = input->height;
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::Size_Data* input,
                  Size* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->width = input->width;
      result->height = input->height;
    } while (false);
  }
}


size_t Thing::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool Thing::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::Thing_Data* output_ptr;
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

bool Thing::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::Thing_Data::Validate(buf, &checker, err_str);
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
void Thing::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::Thing_Data* input =
      static_cast<internal::Thing_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const Thing& input) {
  size_t size = sizeof(internal::Thing_Data);
  size += input.location.is_null()
              ? 0
              : GetSerializedSize_(*input.location);
  size += input.size.is_null()
              ? 0
              : GetSerializedSize_(*input.size);
  return size;
}

mojo::internal::ValidationError Serialize_(
    Thing* input,
    mojo::internal::Buffer* buf,
    internal::Thing_Data** output) {
  if (input) {
    internal::Thing_Data* result =
        internal::Thing_Data::New(buf);
    result->shape =
      static_cast<int32_t>(input->shape);
    result->color =
      static_cast<int32_t>(input->color);
    {auto retval =Serialize_(input->location.get(),
                 buf,
                 &result->location.ptr);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    if (!result->location.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null location in Thing struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    {auto retval =Serialize_(input->size.get(),
                 buf,
                 &result->size.ptr);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    if (!result->size.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null size in Thing struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::Thing_Data* input,
                  Thing* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->shape = static_cast<imported::Shape>(input->shape);
      result->color = static_cast<Color>(input->color);
      if (input->location.ptr) {
        result->location = imported::Point::New();
        Deserialize_(input->location.ptr, result->location.get());
      }
      if (input->size.ptr) {
        result->size = Size::New();
        Deserialize_(input->size.ptr, result->size.get());
      }
    } while (false);
  }
}


// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---
}  // namespace imported
