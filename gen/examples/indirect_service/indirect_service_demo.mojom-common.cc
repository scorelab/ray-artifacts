// NOTE: This file was generated by the Mojo bindings generator.
#include "examples/indirect_service/indirect_service_demo.mojom-common.h"

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
namespace examples {

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---


// static
IntegerService_Increment_Params_Data* IntegerService_Increment_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(IntegerService_Increment_Params_Data))) IntegerService_Increment_Params_Data();
}

// static
mojo::internal::ValidationError IntegerService_Increment_Params_Data::Validate(
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
  const IntegerService_Increment_Params_Data* object = static_cast<const IntegerService_Increment_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

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

void IntegerService_Increment_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void IntegerService_Increment_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

IntegerService_Increment_Params_Data::IntegerService_Increment_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// static
IntegerService_Increment_ResponseParams_Data* IntegerService_Increment_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(IntegerService_Increment_ResponseParams_Data))) IntegerService_Increment_ResponseParams_Data();
}

// static
mojo::internal::ValidationError IntegerService_Increment_ResponseParams_Data::Validate(
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
  const IntegerService_Increment_ResponseParams_Data* object = static_cast<const IntegerService_Increment_ResponseParams_Data*>(data);

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

void IntegerService_Increment_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void IntegerService_Increment_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

IntegerService_Increment_ResponseParams_Data::IntegerService_Increment_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}



// static
IndirectIntegerService_Set_Params_Data* IndirectIntegerService_Set_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(IndirectIntegerService_Set_Params_Data))) IndirectIntegerService_Set_Params_Data();
}

// static
mojo::internal::ValidationError IndirectIntegerService_Set_Params_Data::Validate(
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
  const IndirectIntegerService_Set_Params_Data* object = static_cast<const IndirectIntegerService_Set_Params_Data*>(data);

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
    
  const mojo::Handle service_handle = object->service.handle;
  if (!bounds_checker->ClaimHandle(service_handle)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_HANDLE;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void IndirectIntegerService_Set_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&this->service, handles);
}

void IndirectIntegerService_Set_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&this->service, handles);
}

IndirectIntegerService_Set_Params_Data::IndirectIntegerService_Set_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}



// static
IndirectIntegerService_Get_Params_Data* IndirectIntegerService_Get_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(IndirectIntegerService_Get_Params_Data))) IndirectIntegerService_Get_Params_Data();
}

// static
mojo::internal::ValidationError IndirectIntegerService_Get_Params_Data::Validate(
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
  const IndirectIntegerService_Get_Params_Data* object = static_cast<const IndirectIntegerService_Get_Params_Data*>(data);

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
    
  const mojo::Handle service_handle = object->service;
  if (!bounds_checker->ClaimHandle(service_handle)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_HANDLE;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void IndirectIntegerService_Get_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&this->service, handles);
}

void IndirectIntegerService_Get_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&this->service, handles);
}

IndirectIntegerService_Get_Params_Data::IndirectIntegerService_Get_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// --- Request and response validator definitions for interfaces ---
mojo::internal::ValidationError IntegerServiceRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'IntegerService', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::IntegerService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::IntegerService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::IntegerService_Base::MessageOrdinals::Increment: {
      retval =
          mojo::internal::ValidateMessageIsRequestExpectingResponse(message,
                                                                    err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'IntegerService', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::IntegerService_Increment_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'IntegerService', "
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
                                            "'IntegerService'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
}
mojo::internal::ValidationError IntegerServiceResponseValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlResponse(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "response validation error for interface 'IntegerService', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  retval = mojo::internal::ValidateMessageIsResponse(message, err);
  if (retval != mojo::internal::ValidationError::NONE) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "response validation error for interface 'IntegerService', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
    ReportValidationError(retval, err);
    return retval;
  }

  internal::IntegerService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::IntegerService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::IntegerService_Base::MessageOrdinals::Increment: {
      retval = mojo::internal::ValidateMessagePayload<
                  internal::IntegerService_Increment_ResponseParams_Data>(
                      message, err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "response validation error for interface 'IntegerService',"
               " message name '" << message->header()->name << "': " <<
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
  MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "unknown response message name '"
                                          << message->header()->name
                                          << "' for interface "
                                             "'IntegerService'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
}
mojo::internal::ValidationError IndirectIntegerServiceRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'IndirectIntegerService', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::IndirectIntegerService_Base::MessageOrdinals method_ordinal =
      static_cast<internal::IndirectIntegerService_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::IndirectIntegerService_Base::MessageOrdinals::Set: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'IndirectIntegerService', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::IndirectIntegerService_Set_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'IndirectIntegerService', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      return mojo::internal::ValidationError::NONE;
    }
    case internal::IndirectIntegerService_Base::MessageOrdinals::Get: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'IndirectIntegerService', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::IndirectIntegerService_Get_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'IndirectIntegerService', "
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
                                            "'IndirectIntegerService'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
} 

// --- Enums ---

// Base interface definitions (Name_, Version_, Constants, Enums)
const char internal::IntegerService_Base::Name_[] = "mojo::examples::IntegerService";
const uint32_t internal::IntegerService_Base::Version_;

// Constants

// Enums
const char internal::IndirectIntegerService_Base::Name_[] = "mojo::examples::IndirectIntegerService";
const uint32_t internal::IndirectIntegerService_Base::Version_;

// Constants

// Enums

// Struct Constants

// --- Struct builder definitions ---

// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---


// static
IntegerService_Increment_ParamsPtr IntegerService_Increment_Params::New() {
  IntegerService_Increment_ParamsPtr rv;
  mojo::internal::StructHelper<IntegerService_Increment_Params>::Initialize(&rv);
  return rv;
}

IntegerService_Increment_Params::IntegerService_Increment_Params() {
}

IntegerService_Increment_Params::~IntegerService_Increment_Params() {
}


IntegerService_Increment_ParamsPtr IntegerService_Increment_Params::Clone() const {
  IntegerService_Increment_ParamsPtr rv(New());
  return rv;
}


bool IntegerService_Increment_Params::Equals(const IntegerService_Increment_Params& other) const {
  return true;
}


size_t IntegerService_Increment_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool IntegerService_Increment_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::IntegerService_Increment_Params_Data* output_ptr;
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

bool IntegerService_Increment_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::IntegerService_Increment_Params_Data::Validate(buf, &checker, err_str);
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
void IntegerService_Increment_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::IntegerService_Increment_Params_Data* input =
      static_cast<internal::IntegerService_Increment_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const IntegerService_Increment_Params& input) {
  size_t size = sizeof(internal::IntegerService_Increment_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    IntegerService_Increment_Params* input,
    mojo::internal::Buffer* buf,
    internal::IntegerService_Increment_Params_Data** output) {
  if (input) {
    internal::IntegerService_Increment_Params_Data* result =
        internal::IntegerService_Increment_Params_Data::New(buf);
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::IntegerService_Increment_Params_Data* input,
                  IntegerService_Increment_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
    } while (false);
  }
}


// static
IntegerService_Increment_ResponseParamsPtr IntegerService_Increment_ResponseParams::New() {
  IntegerService_Increment_ResponseParamsPtr rv;
  mojo::internal::StructHelper<IntegerService_Increment_ResponseParams>::Initialize(&rv);
  return rv;
}

IntegerService_Increment_ResponseParams::IntegerService_Increment_ResponseParams()
    : value() {
}

IntegerService_Increment_ResponseParams::~IntegerService_Increment_ResponseParams() {
}


IntegerService_Increment_ResponseParamsPtr IntegerService_Increment_ResponseParams::Clone() const {
  IntegerService_Increment_ResponseParamsPtr rv(New());
  rv->value = value;
  return rv;
}


bool IntegerService_Increment_ResponseParams::Equals(const IntegerService_Increment_ResponseParams& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->value, other.value))
    return false;
  return true;
}


size_t IntegerService_Increment_ResponseParams::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool IntegerService_Increment_ResponseParams::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::IntegerService_Increment_ResponseParams_Data* output_ptr;
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

bool IntegerService_Increment_ResponseParams::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::IntegerService_Increment_ResponseParams_Data::Validate(buf, &checker, err_str);
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
void IntegerService_Increment_ResponseParams::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::IntegerService_Increment_ResponseParams_Data* input =
      static_cast<internal::IntegerService_Increment_ResponseParams_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const IntegerService_Increment_ResponseParams& input) {
  size_t size = sizeof(internal::IntegerService_Increment_ResponseParams_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    IntegerService_Increment_ResponseParams* input,
    mojo::internal::Buffer* buf,
    internal::IntegerService_Increment_ResponseParams_Data** output) {
  if (input) {
    internal::IntegerService_Increment_ResponseParams_Data* result =
        internal::IntegerService_Increment_ResponseParams_Data::New(buf);
    result->value = input->value;
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::IntegerService_Increment_ResponseParams_Data* input,
                  IntegerService_Increment_ResponseParams* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->value = input->value;
    } while (false);
  }
}



// static
IndirectIntegerService_Set_ParamsPtr IndirectIntegerService_Set_Params::New() {
  IndirectIntegerService_Set_ParamsPtr rv;
  mojo::internal::StructHelper<IndirectIntegerService_Set_Params>::Initialize(&rv);
  return rv;
}

IndirectIntegerService_Set_Params::IndirectIntegerService_Set_Params()
    : service() {
}

IndirectIntegerService_Set_Params::~IndirectIntegerService_Set_Params() {
}



bool IndirectIntegerService_Set_Params::Equals(const IndirectIntegerService_Set_Params& other) const {
  if (!mojo::internal::ValueTraits<mojo::InterfaceHandle<IntegerService>>::Equals(this->service, other.service))
    return false;
  return true;
}


size_t IndirectIntegerService_Set_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool IndirectIntegerService_Set_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::IndirectIntegerService_Set_Params_Data* output_ptr;
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

bool IndirectIntegerService_Set_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::IndirectIntegerService_Set_Params_Data::Validate(buf, &checker, err_str);
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
void IndirectIntegerService_Set_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::IndirectIntegerService_Set_Params_Data* input =
      static_cast<internal::IndirectIntegerService_Set_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const IndirectIntegerService_Set_Params& input) {
  size_t size = sizeof(internal::IndirectIntegerService_Set_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    IndirectIntegerService_Set_Params* input,
    mojo::internal::Buffer* buf,
    internal::IndirectIntegerService_Set_Params_Data** output) {
  if (input) {
    internal::IndirectIntegerService_Set_Params_Data* result =
        internal::IndirectIntegerService_Set_Params_Data::New(buf);
    mojo::internal::InterfaceHandleToData(input->service.Pass(),
                                          &result->service);
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::IndirectIntegerService_Set_Params_Data* input,
                  IndirectIntegerService_Set_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      mojo::internal::InterfaceDataToHandle(&input->service, &result->service);
    } while (false);
  }
}



// static
IndirectIntegerService_Get_ParamsPtr IndirectIntegerService_Get_Params::New() {
  IndirectIntegerService_Get_ParamsPtr rv;
  mojo::internal::StructHelper<IndirectIntegerService_Get_Params>::Initialize(&rv);
  return rv;
}

IndirectIntegerService_Get_Params::IndirectIntegerService_Get_Params()
    : service() {
}

IndirectIntegerService_Get_Params::~IndirectIntegerService_Get_Params() {
}



bool IndirectIntegerService_Get_Params::Equals(const IndirectIntegerService_Get_Params& other) const {
  if (!mojo::internal::ValueTraits<mojo::InterfaceRequest<IntegerService>>::Equals(this->service, other.service))
    return false;
  return true;
}


size_t IndirectIntegerService_Get_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool IndirectIntegerService_Get_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::IndirectIntegerService_Get_Params_Data* output_ptr;
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

bool IndirectIntegerService_Get_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::IndirectIntegerService_Get_Params_Data::Validate(buf, &checker, err_str);
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
void IndirectIntegerService_Get_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::IndirectIntegerService_Get_Params_Data* input =
      static_cast<internal::IndirectIntegerService_Get_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const IndirectIntegerService_Get_Params& input) {
  size_t size = sizeof(internal::IndirectIntegerService_Get_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    IndirectIntegerService_Get_Params* input,
    mojo::internal::Buffer* buf,
    internal::IndirectIntegerService_Get_Params_Data** output) {
  if (input) {
    internal::IndirectIntegerService_Get_Params_Data* result =
        internal::IndirectIntegerService_Get_Params_Data::New(buf);
    result->service = input->service.PassMessagePipe().release();
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::IndirectIntegerService_Get_Params_Data* input,
                  IndirectIntegerService_Get_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->service.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&input->service)));
    } while (false);
  }
}

}  // namespace examples
}  // namespace mojo
