// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/gpu/interfaces/context_provider.mojom-common.h"

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


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---


// static
ContextProvider_Create_Params_Data* ContextProvider_Create_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ContextProvider_Create_Params_Data))) ContextProvider_Create_Params_Data();
}

// static
mojo::internal::ValidationError ContextProvider_Create_Params_Data::Validate(
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
  const ContextProvider_Create_Params_Data* object = static_cast<const ContextProvider_Create_Params_Data*>(data);

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
    
  const mojo::Handle viewport_parameter_listener_handle = object->viewport_parameter_listener.handle;
  if (!bounds_checker->ClaimHandle(viewport_parameter_listener_handle)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_HANDLE;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void ContextProvider_Create_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&this->viewport_parameter_listener, handles);
}

void ContextProvider_Create_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&this->viewport_parameter_listener, handles);
}

ContextProvider_Create_Params_Data::ContextProvider_Create_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// static
ContextProvider_Create_ResponseParams_Data* ContextProvider_Create_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ContextProvider_Create_ResponseParams_Data))) ContextProvider_Create_ResponseParams_Data();
}

// static
mojo::internal::ValidationError ContextProvider_Create_ResponseParams_Data::Validate(
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
  const ContextProvider_Create_ResponseParams_Data* object = static_cast<const ContextProvider_Create_ResponseParams_Data*>(data);

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
    
  const mojo::Handle gles2_client_handle = object->gles2_client.handle;
  if (!bounds_checker->ClaimHandle(gles2_client_handle)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_HANDLE;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void ContextProvider_Create_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&this->gles2_client, handles);
}

void ContextProvider_Create_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&this->gles2_client, handles);
}

ContextProvider_Create_ResponseParams_Data::ContextProvider_Create_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// --- Request and response validator definitions for interfaces ---
mojo::internal::ValidationError ContextProviderRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'ContextProvider', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::ContextProvider_Base::MessageOrdinals method_ordinal =
      static_cast<internal::ContextProvider_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::ContextProvider_Base::MessageOrdinals::Create: {
      retval =
          mojo::internal::ValidateMessageIsRequestExpectingResponse(message,
                                                                    err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'ContextProvider', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::ContextProvider_Create_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'ContextProvider', "
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
                                            "'ContextProvider'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
}
mojo::internal::ValidationError ContextProviderResponseValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlResponse(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "response validation error for interface 'ContextProvider', "
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
            << "response validation error for interface 'ContextProvider', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
    ReportValidationError(retval, err);
    return retval;
  }

  internal::ContextProvider_Base::MessageOrdinals method_ordinal =
      static_cast<internal::ContextProvider_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::ContextProvider_Base::MessageOrdinals::Create: {
      retval = mojo::internal::ValidateMessagePayload<
                  internal::ContextProvider_Create_ResponseParams_Data>(
                      message, err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "response validation error for interface 'ContextProvider',"
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
                                             "'ContextProvider'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
} 

// --- Enums ---

// Base interface definitions (Name_, Version_, Constants, Enums)
const uint32_t internal::ContextProvider_Base::Version_;

// Constants

// Enums

// Struct Constants

// --- Struct builder definitions ---

// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---


// static
ContextProvider_Create_ParamsPtr ContextProvider_Create_Params::New() {
  ContextProvider_Create_ParamsPtr rv;
  mojo::internal::StructHelper<ContextProvider_Create_Params>::Initialize(&rv);
  return rv;
}

ContextProvider_Create_Params::ContextProvider_Create_Params()
    : viewport_parameter_listener() {
}

ContextProvider_Create_Params::~ContextProvider_Create_Params() {
}



bool ContextProvider_Create_Params::Equals(const ContextProvider_Create_Params& other) const {
  if (!mojo::internal::ValueTraits<mojo::InterfaceHandle<mojo::ViewportParameterListener>>::Equals(this->viewport_parameter_listener, other.viewport_parameter_listener))
    return false;
  return true;
}


size_t ContextProvider_Create_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool ContextProvider_Create_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::ContextProvider_Create_Params_Data* output_ptr;
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

bool ContextProvider_Create_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::ContextProvider_Create_Params_Data::Validate(buf, &checker, err_str);
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
void ContextProvider_Create_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::ContextProvider_Create_Params_Data* input =
      static_cast<internal::ContextProvider_Create_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const ContextProvider_Create_Params& input) {
  size_t size = sizeof(internal::ContextProvider_Create_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    ContextProvider_Create_Params* input,
    mojo::internal::Buffer* buf,
    internal::ContextProvider_Create_Params_Data** output) {
  if (input) {
    internal::ContextProvider_Create_Params_Data* result =
        internal::ContextProvider_Create_Params_Data::New(buf);
    mojo::internal::InterfaceHandleToData(input->viewport_parameter_listener.Pass(),
                                          &result->viewport_parameter_listener);
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::ContextProvider_Create_Params_Data* input,
                  ContextProvider_Create_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      mojo::internal::InterfaceDataToHandle(&input->viewport_parameter_listener, &result->viewport_parameter_listener);
    } while (false);
  }
}


// static
ContextProvider_Create_ResponseParamsPtr ContextProvider_Create_ResponseParams::New() {
  ContextProvider_Create_ResponseParamsPtr rv;
  mojo::internal::StructHelper<ContextProvider_Create_ResponseParams>::Initialize(&rv);
  return rv;
}

ContextProvider_Create_ResponseParams::ContextProvider_Create_ResponseParams()
    : gles2_client() {
}

ContextProvider_Create_ResponseParams::~ContextProvider_Create_ResponseParams() {
}



bool ContextProvider_Create_ResponseParams::Equals(const ContextProvider_Create_ResponseParams& other) const {
  if (!mojo::internal::ValueTraits<mojo::InterfaceHandle<mojo::CommandBuffer>>::Equals(this->gles2_client, other.gles2_client))
    return false;
  return true;
}


size_t ContextProvider_Create_ResponseParams::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool ContextProvider_Create_ResponseParams::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::ContextProvider_Create_ResponseParams_Data* output_ptr;
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

bool ContextProvider_Create_ResponseParams::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::ContextProvider_Create_ResponseParams_Data::Validate(buf, &checker, err_str);
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
void ContextProvider_Create_ResponseParams::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::ContextProvider_Create_ResponseParams_Data* input =
      static_cast<internal::ContextProvider_Create_ResponseParams_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const ContextProvider_Create_ResponseParams& input) {
  size_t size = sizeof(internal::ContextProvider_Create_ResponseParams_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    ContextProvider_Create_ResponseParams* input,
    mojo::internal::Buffer* buf,
    internal::ContextProvider_Create_ResponseParams_Data** output) {
  if (input) {
    internal::ContextProvider_Create_ResponseParams_Data* result =
        internal::ContextProvider_Create_ResponseParams_Data::New(buf);
    mojo::internal::InterfaceHandleToData(input->gles2_client.Pass(),
                                          &result->gles2_client);
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::ContextProvider_Create_ResponseParams_Data* input,
                  ContextProvider_Create_ResponseParams* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      mojo::internal::InterfaceDataToHandle(&input->gles2_client, &result->gles2_client);
    } while (false);
  }
}

}  // namespace mojo
