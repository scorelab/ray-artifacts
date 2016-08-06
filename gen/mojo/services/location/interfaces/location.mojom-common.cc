// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/location/interfaces/location.mojom-common.h"

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

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// static
Location_Data* Location_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Location_Data))) Location_Data();
}

// static
mojo::internal::ValidationError Location_Data::Validate(
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
  const Location_Data* object = static_cast<const Location_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

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

void Location_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Location_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Location_Data::Location_Data() {
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
LocationPtr Location::New() {
  LocationPtr rv;
  mojo::internal::StructHelper<Location>::Initialize(&rv);
  return rv;
}

Location::Location()
    : time(),
      has_elapsed_real_time_nanos(false),
      elapsed_real_time_nanos(),
      latitude(),
      longitude(),
      has_altitude(false),
      altitude(),
      has_speed(false),
      speed(),
      has_bearing(false),
      bearing(),
      has_accuracy(false),
      accuracy() {
}

Location::~Location() {
}


LocationPtr Location::Clone() const {
  LocationPtr rv(New());
  rv->time = time;
  rv->has_elapsed_real_time_nanos = has_elapsed_real_time_nanos;
  rv->elapsed_real_time_nanos = elapsed_real_time_nanos;
  rv->latitude = latitude;
  rv->longitude = longitude;
  rv->has_altitude = has_altitude;
  rv->altitude = altitude;
  rv->has_speed = has_speed;
  rv->speed = speed;
  rv->has_bearing = has_bearing;
  rv->bearing = bearing;
  rv->has_accuracy = has_accuracy;
  rv->accuracy = accuracy;
  return rv;
}


bool Location::Equals(const Location& other) const {
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->time, other.time))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_elapsed_real_time_nanos, other.has_elapsed_real_time_nanos))
    return false;
  if (!mojo::internal::ValueTraits<uint64_t>::Equals(this->elapsed_real_time_nanos, other.elapsed_real_time_nanos))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->latitude, other.latitude))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->longitude, other.longitude))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_altitude, other.has_altitude))
    return false;
  if (!mojo::internal::ValueTraits<double>::Equals(this->altitude, other.altitude))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_speed, other.has_speed))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->speed, other.speed))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_bearing, other.has_bearing))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->bearing, other.bearing))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_accuracy, other.has_accuracy))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->accuracy, other.accuracy))
    return false;
  return true;
}


// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

size_t Location::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool Location::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::Location_Data* output_ptr;
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

bool Location::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::Location_Data::Validate(buf, &checker, err_str);
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
void Location::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::Location_Data* input =
      static_cast<internal::Location_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const Location& input) {
  size_t size = sizeof(internal::Location_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    Location* input,
    mojo::internal::Buffer* buf,
    internal::Location_Data** output) {
  if (input) {
    internal::Location_Data* result =
        internal::Location_Data::New(buf);
    result->time = input->time;
    result->has_elapsed_real_time_nanos = input->has_elapsed_real_time_nanos;
    result->elapsed_real_time_nanos = input->elapsed_real_time_nanos;
    result->latitude = input->latitude;
    result->longitude = input->longitude;
    result->has_altitude = input->has_altitude;
    result->altitude = input->altitude;
    result->has_speed = input->has_speed;
    result->speed = input->speed;
    result->has_bearing = input->has_bearing;
    result->bearing = input->bearing;
    result->has_accuracy = input->has_accuracy;
    result->accuracy = input->accuracy;
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::Location_Data* input,
                  Location* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->time = input->time;
      result->has_elapsed_real_time_nanos = input->has_elapsed_real_time_nanos;
      result->elapsed_real_time_nanos = input->elapsed_real_time_nanos;
      result->latitude = input->latitude;
      result->longitude = input->longitude;
      result->has_altitude = input->has_altitude;
      result->altitude = input->altitude;
      result->has_speed = input->has_speed;
      result->speed = input->speed;
      result->has_bearing = input->has_bearing;
      result->bearing = input->bearing;
      result->has_accuracy = input->has_accuracy;
      result->accuracy = input->accuracy;
    } while (false);
  }
}


// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---
}  // namespace mojo