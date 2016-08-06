// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/sensors/interfaces/sensors.mojom-common.h"

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
namespace sensors {

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// static
SensorData_Data* SensorData_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SensorData_Data))) SensorData_Data();
}

// static
mojo::internal::ValidationError SensorData_Data::Validate(
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
  const SensorData_Data* object = static_cast<const SensorData_Data*>(data);

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
    
  if (!object->values.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null values field in SensorData struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->values.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  const mojo::internal::ArrayValidateParams values_validate_params(
      0, false, nullptr);
  auto validate_retval =
      mojo::Array<float>::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->values.offset),
          bounds_checker, &values_validate_params, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void SensorData_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->values, handles);
}

void SensorData_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->values, handles);
}

SensorData_Data::SensorData_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---


// static
SensorListener_OnAccuracyChanged_Params_Data* SensorListener_OnAccuracyChanged_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SensorListener_OnAccuracyChanged_Params_Data))) SensorListener_OnAccuracyChanged_Params_Data();
}

// static
mojo::internal::ValidationError SensorListener_OnAccuracyChanged_Params_Data::Validate(
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
  const SensorListener_OnAccuracyChanged_Params_Data* object = static_cast<const SensorListener_OnAccuracyChanged_Params_Data*>(data);

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

void SensorListener_OnAccuracyChanged_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void SensorListener_OnAccuracyChanged_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

SensorListener_OnAccuracyChanged_Params_Data::SensorListener_OnAccuracyChanged_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}



// static
SensorListener_OnSensorChanged_Params_Data* SensorListener_OnSensorChanged_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SensorListener_OnSensorChanged_Params_Data))) SensorListener_OnSensorChanged_Params_Data();
}

// static
mojo::internal::ValidationError SensorListener_OnSensorChanged_Params_Data::Validate(
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
  const SensorListener_OnSensorChanged_Params_Data* object = static_cast<const SensorListener_OnSensorChanged_Params_Data*>(data);

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
  {
    
  if (!object->data.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null data field in SensorListener_OnSensorChanged_Params struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->data.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  auto validate_retval = SensorData::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->data.offset),
          bounds_checker, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void SensorListener_OnSensorChanged_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->data, handles);
}

void SensorListener_OnSensorChanged_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->data, handles);
}

SensorListener_OnSensorChanged_Params_Data::SensorListener_OnSensorChanged_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}



// static
SensorService_AddListener_Params_Data* SensorService_AddListener_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SensorService_AddListener_Params_Data))) SensorService_AddListener_Params_Data();
}

// static
mojo::internal::ValidationError SensorService_AddListener_Params_Data::Validate(
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
  const SensorService_AddListener_Params_Data* object = static_cast<const SensorService_AddListener_Params_Data*>(data);

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
    
  const mojo::Handle listener_handle = object->listener.handle;
  if (listener_handle.value() == mojo::internal::kEncodedInvalidHandleValue) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "invalid listener field in SensorService_AddListener_Params struct";
    return mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE;
  }
  if (!bounds_checker->ClaimHandle(listener_handle)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_HANDLE;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void SensorService_AddListener_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&this->listener, handles);
}

void SensorService_AddListener_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&this->listener, handles);
}

SensorService_AddListener_Params_Data::SensorService_AddListener_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// --- Request and response validator definitions for interfaces ---
mojo::internal::ValidationError SensorListenerRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'SensorListener', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::SensorListener_Base::MessageOrdinals method_ordinal =
      static_cast<internal::SensorListener_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::SensorListener_Base::MessageOrdinals::OnAccuracyChanged: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'SensorListener', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::SensorListener_OnAccuracyChanged_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'SensorListener', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      return mojo::internal::ValidationError::NONE;
    }
    case internal::SensorListener_Base::MessageOrdinals::OnSensorChanged: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'SensorListener', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::SensorListener_OnSensorChanged_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'SensorListener', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      return mojo::internal::ValidationError::NONE;
    }
    default:
      break;
  }

  // Unrecognized message.
  MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "unknown request message name '"
                                         << message->header()->name
                                         << "' for interface "
                                            "'SensorListener'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
}
mojo::internal::ValidationError SensorServiceRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'SensorService', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::SensorService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::SensorService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::SensorService_Base::MessageOrdinals::AddListener: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'SensorService', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::SensorService_AddListener_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'SensorService', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      return mojo::internal::ValidationError::NONE;
    }
    default:
      break;
  }

  // Unrecognized message.
  MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "unknown request message name '"
                                         << message->header()->name
                                         << "' for interface "
                                            "'SensorService'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
} 

// --- Enums ---
bool SensorType_IsValidValue(SensorType value) {
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
      return true;
  }
  return false;
}
  
std::ostream& operator<<(std::ostream& stream, const SensorType& val) {
  return (stream << static_cast<int32_t>(val));
}

// Base interface definitions (Name_, Version_, Constants, Enums)
const uint32_t internal::SensorListener_Base::Version_;

// Constants

// Enums
const char internal::SensorService_Base::Name_[] = "sensors::SensorService";
const uint32_t internal::SensorService_Base::Version_;

// Constants

// Enums

// Struct Constants

// --- Struct builder definitions ---

// static
SensorDataPtr SensorData::New() {
  SensorDataPtr rv;
  mojo::internal::StructHelper<SensorData>::Initialize(&rv);
  return rv;
}

SensorData::SensorData()
    : accuracy(),
      time_stamp(),
      values() {
}

SensorData::~SensorData() {
}


SensorDataPtr SensorData::Clone() const {
  SensorDataPtr rv(New());
  rv->accuracy = accuracy;
  rv->time_stamp = time_stamp;
  rv->values = values.Clone();
  return rv;
}


bool SensorData::Equals(const SensorData& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->accuracy, other.accuracy))
    return false;
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->time_stamp, other.time_stamp))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<float>>::Equals(this->values, other.values))
    return false;
  return true;
}


// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

size_t SensorData::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool SensorData::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::SensorData_Data* output_ptr;
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

bool SensorData::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::SensorData_Data::Validate(buf, &checker, err_str);
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
void SensorData::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::SensorData_Data* input =
      static_cast<internal::SensorData_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const SensorData& input) {
  size_t size = sizeof(internal::SensorData_Data);
  size += GetSerializedSize_(input.values);
  return size;
}

mojo::internal::ValidationError Serialize_(
    SensorData* input,
    mojo::internal::Buffer* buf,
    internal::SensorData_Data** output) {
  if (input) {
    internal::SensorData_Data* result =
        internal::SensorData_Data::New(buf);
    result->accuracy = input->accuracy;
    result->time_stamp = input->time_stamp;
    {
      const mojo::internal::ArrayValidateParams values_validate_params(
        0, false, nullptr);auto retval =mojo::SerializeArray_(&input->values, buf, &result->values.ptr,
                            &values_validate_params);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    if (!result->values.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null values in SensorData struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::SensorData_Data* input,
                  SensorData* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->accuracy = input->accuracy;
      result->time_stamp = input->time_stamp;
      Deserialize_(input->values.ptr, &result->values);
    } while (false);
  }
}


// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---


// static
SensorListener_OnAccuracyChanged_ParamsPtr SensorListener_OnAccuracyChanged_Params::New() {
  SensorListener_OnAccuracyChanged_ParamsPtr rv;
  mojo::internal::StructHelper<SensorListener_OnAccuracyChanged_Params>::Initialize(&rv);
  return rv;
}

SensorListener_OnAccuracyChanged_Params::SensorListener_OnAccuracyChanged_Params()
    : accuracy() {
}

SensorListener_OnAccuracyChanged_Params::~SensorListener_OnAccuracyChanged_Params() {
}


SensorListener_OnAccuracyChanged_ParamsPtr SensorListener_OnAccuracyChanged_Params::Clone() const {
  SensorListener_OnAccuracyChanged_ParamsPtr rv(New());
  rv->accuracy = accuracy;
  return rv;
}


bool SensorListener_OnAccuracyChanged_Params::Equals(const SensorListener_OnAccuracyChanged_Params& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->accuracy, other.accuracy))
    return false;
  return true;
}


size_t SensorListener_OnAccuracyChanged_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool SensorListener_OnAccuracyChanged_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::SensorListener_OnAccuracyChanged_Params_Data* output_ptr;
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

bool SensorListener_OnAccuracyChanged_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::SensorListener_OnAccuracyChanged_Params_Data::Validate(buf, &checker, err_str);
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
void SensorListener_OnAccuracyChanged_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::SensorListener_OnAccuracyChanged_Params_Data* input =
      static_cast<internal::SensorListener_OnAccuracyChanged_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const SensorListener_OnAccuracyChanged_Params& input) {
  size_t size = sizeof(internal::SensorListener_OnAccuracyChanged_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    SensorListener_OnAccuracyChanged_Params* input,
    mojo::internal::Buffer* buf,
    internal::SensorListener_OnAccuracyChanged_Params_Data** output) {
  if (input) {
    internal::SensorListener_OnAccuracyChanged_Params_Data* result =
        internal::SensorListener_OnAccuracyChanged_Params_Data::New(buf);
    result->accuracy = input->accuracy;
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::SensorListener_OnAccuracyChanged_Params_Data* input,
                  SensorListener_OnAccuracyChanged_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->accuracy = input->accuracy;
    } while (false);
  }
}



// static
SensorListener_OnSensorChanged_ParamsPtr SensorListener_OnSensorChanged_Params::New() {
  SensorListener_OnSensorChanged_ParamsPtr rv;
  mojo::internal::StructHelper<SensorListener_OnSensorChanged_Params>::Initialize(&rv);
  return rv;
}

SensorListener_OnSensorChanged_Params::SensorListener_OnSensorChanged_Params()
    : data() {
}

SensorListener_OnSensorChanged_Params::~SensorListener_OnSensorChanged_Params() {
}


SensorListener_OnSensorChanged_ParamsPtr SensorListener_OnSensorChanged_Params::Clone() const {
  SensorListener_OnSensorChanged_ParamsPtr rv(New());
  rv->data = data.Clone();
  return rv;
}


bool SensorListener_OnSensorChanged_Params::Equals(const SensorListener_OnSensorChanged_Params& other) const {
  if (!mojo::internal::ValueTraits<SensorDataPtr>::Equals(this->data, other.data))
    return false;
  return true;
}


size_t SensorListener_OnSensorChanged_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool SensorListener_OnSensorChanged_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::SensorListener_OnSensorChanged_Params_Data* output_ptr;
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

bool SensorListener_OnSensorChanged_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::SensorListener_OnSensorChanged_Params_Data::Validate(buf, &checker, err_str);
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
void SensorListener_OnSensorChanged_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::SensorListener_OnSensorChanged_Params_Data* input =
      static_cast<internal::SensorListener_OnSensorChanged_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const SensorListener_OnSensorChanged_Params& input) {
  size_t size = sizeof(internal::SensorListener_OnSensorChanged_Params_Data);
  size += input.data.is_null()
              ? 0
              : GetSerializedSize_(*input.data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    SensorListener_OnSensorChanged_Params* input,
    mojo::internal::Buffer* buf,
    internal::SensorListener_OnSensorChanged_Params_Data** output) {
  if (input) {
    internal::SensorListener_OnSensorChanged_Params_Data* result =
        internal::SensorListener_OnSensorChanged_Params_Data::New(buf);
    {auto retval =Serialize_(input->data.get(),
                 buf,
                 &result->data.ptr);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    if (!result->data.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null data in SensorListener_OnSensorChanged_Params struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::SensorListener_OnSensorChanged_Params_Data* input,
                  SensorListener_OnSensorChanged_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (input->data.ptr) {
        result->data = SensorData::New();
        Deserialize_(input->data.ptr, result->data.get());
      }
    } while (false);
  }
}



// static
SensorService_AddListener_ParamsPtr SensorService_AddListener_Params::New() {
  SensorService_AddListener_ParamsPtr rv;
  mojo::internal::StructHelper<SensorService_AddListener_Params>::Initialize(&rv);
  return rv;
}

SensorService_AddListener_Params::SensorService_AddListener_Params()
    : type(),
      listener() {
}

SensorService_AddListener_Params::~SensorService_AddListener_Params() {
}



bool SensorService_AddListener_Params::Equals(const SensorService_AddListener_Params& other) const {
  if (!mojo::internal::ValueTraits<SensorType>::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::ValueTraits<mojo::InterfaceHandle<SensorListener>>::Equals(this->listener, other.listener))
    return false;
  return true;
}


size_t SensorService_AddListener_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool SensorService_AddListener_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::SensorService_AddListener_Params_Data* output_ptr;
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

bool SensorService_AddListener_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::SensorService_AddListener_Params_Data::Validate(buf, &checker, err_str);
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
void SensorService_AddListener_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::SensorService_AddListener_Params_Data* input =
      static_cast<internal::SensorService_AddListener_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const SensorService_AddListener_Params& input) {
  size_t size = sizeof(internal::SensorService_AddListener_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    SensorService_AddListener_Params* input,
    mojo::internal::Buffer* buf,
    internal::SensorService_AddListener_Params_Data** output) {
  if (input) {
    internal::SensorService_AddListener_Params_Data* result =
        internal::SensorService_AddListener_Params_Data::New(buf);
    result->type =
      static_cast<int32_t>(input->type);
    mojo::internal::InterfaceHandleToData(input->listener.Pass(),
                                          &result->listener);
    if (!result->listener.handle.is_valid()) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid listener in SensorService_AddListener_Params struct");
      return mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::SensorService_AddListener_Params_Data* input,
                  SensorService_AddListener_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->type = static_cast<SensorType>(input->type);
      mojo::internal::InterfaceDataToHandle(&input->listener, &result->listener);
    } while (false);
  }
}

}  // namespace sensors