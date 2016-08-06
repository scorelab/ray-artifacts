// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/gpu/interfaces/viewport_parameter_listener.mojom-common.h"

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
ViewportParameterListener_OnVSyncParametersUpdated_Params_Data* ViewportParameterListener_OnVSyncParametersUpdated_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ViewportParameterListener_OnVSyncParametersUpdated_Params_Data))) ViewportParameterListener_OnVSyncParametersUpdated_Params_Data();
}

// static
mojo::internal::ValidationError ViewportParameterListener_OnVSyncParametersUpdated_Params_Data::Validate(
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
  const ViewportParameterListener_OnVSyncParametersUpdated_Params_Data* object = static_cast<const ViewportParameterListener_OnVSyncParametersUpdated_Params_Data*>(data);

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

void ViewportParameterListener_OnVSyncParametersUpdated_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ViewportParameterListener_OnVSyncParametersUpdated_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ViewportParameterListener_OnVSyncParametersUpdated_Params_Data::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// --- Request and response validator definitions for interfaces ---
mojo::internal::ValidationError ViewportParameterListenerRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'ViewportParameterListener', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::ViewportParameterListener_Base::MessageOrdinals method_ordinal =
      static_cast<internal::ViewportParameterListener_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::ViewportParameterListener_Base::MessageOrdinals::OnVSyncParametersUpdated: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'ViewportParameterListener', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'ViewportParameterListener', "
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
                                            "'ViewportParameterListener'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
} 

// --- Enums ---

// Base interface definitions (Name_, Version_, Constants, Enums)
const uint32_t internal::ViewportParameterListener_Base::Version_;

// Constants

// Enums

// Struct Constants

// --- Struct builder definitions ---

// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---


// static
ViewportParameterListener_OnVSyncParametersUpdated_ParamsPtr ViewportParameterListener_OnVSyncParametersUpdated_Params::New() {
  ViewportParameterListener_OnVSyncParametersUpdated_ParamsPtr rv;
  mojo::internal::StructHelper<ViewportParameterListener_OnVSyncParametersUpdated_Params>::Initialize(&rv);
  return rv;
}

ViewportParameterListener_OnVSyncParametersUpdated_Params::ViewportParameterListener_OnVSyncParametersUpdated_Params()
    : timebase(),
      interval() {
}

ViewportParameterListener_OnVSyncParametersUpdated_Params::~ViewportParameterListener_OnVSyncParametersUpdated_Params() {
}


ViewportParameterListener_OnVSyncParametersUpdated_ParamsPtr ViewportParameterListener_OnVSyncParametersUpdated_Params::Clone() const {
  ViewportParameterListener_OnVSyncParametersUpdated_ParamsPtr rv(New());
  rv->timebase = timebase;
  rv->interval = interval;
  return rv;
}


bool ViewportParameterListener_OnVSyncParametersUpdated_Params::Equals(const ViewportParameterListener_OnVSyncParametersUpdated_Params& other) const {
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->timebase, other.timebase))
    return false;
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->interval, other.interval))
    return false;
  return true;
}


size_t ViewportParameterListener_OnVSyncParametersUpdated_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool ViewportParameterListener_OnVSyncParametersUpdated_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data* output_ptr;
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

bool ViewportParameterListener_OnVSyncParametersUpdated_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data::Validate(buf, &checker, err_str);
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
void ViewportParameterListener_OnVSyncParametersUpdated_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data* input =
      static_cast<internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const ViewportParameterListener_OnVSyncParametersUpdated_Params& input) {
  size_t size = sizeof(internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    ViewportParameterListener_OnVSyncParametersUpdated_Params* input,
    mojo::internal::Buffer* buf,
    internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data** output) {
  if (input) {
    internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data* result =
        internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data::New(buf);
    result->timebase = input->timebase;
    result->interval = input->interval;
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::ViewportParameterListener_OnVSyncParametersUpdated_Params_Data* input,
                  ViewportParameterListener_OnVSyncParametersUpdated_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->timebase = input->timebase;
      result->interval = input->interval;
    } while (false);
  }
}

}  // namespace mojo
