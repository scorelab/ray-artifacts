// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/gpu/interfaces/gpu.mojom-common.h"

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
Gpu_CreateOffscreenGLES2Context_Params_Data* Gpu_CreateOffscreenGLES2Context_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Gpu_CreateOffscreenGLES2Context_Params_Data))) Gpu_CreateOffscreenGLES2Context_Params_Data();
}

// static
mojo::internal::ValidationError Gpu_CreateOffscreenGLES2Context_Params_Data::Validate(
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
  const Gpu_CreateOffscreenGLES2Context_Params_Data* object = static_cast<const Gpu_CreateOffscreenGLES2Context_Params_Data*>(data);

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
    
  const mojo::Handle gles2_client_handle = object->gles2_client;
  if (gles2_client_handle.value() == mojo::internal::kEncodedInvalidHandleValue) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "invalid gles2_client field in Gpu_CreateOffscreenGLES2Context_Params struct";
    return mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE;
  }
  if (!bounds_checker->ClaimHandle(gles2_client_handle)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_HANDLE;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void Gpu_CreateOffscreenGLES2Context_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&this->gles2_client, handles);
}

void Gpu_CreateOffscreenGLES2Context_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&this->gles2_client, handles);
}

Gpu_CreateOffscreenGLES2Context_Params_Data::Gpu_CreateOffscreenGLES2Context_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// --- Request and response validator definitions for interfaces ---
mojo::internal::ValidationError GpuRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'Gpu', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::Gpu_Base::MessageOrdinals method_ordinal =
      static_cast<internal::Gpu_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::Gpu_Base::MessageOrdinals::CreateOffscreenGLES2Context: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'Gpu', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::Gpu_CreateOffscreenGLES2Context_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'Gpu', "
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
                                            "'Gpu'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
} 

// --- Enums ---

// Base interface definitions (Name_, Version_, Constants, Enums)
const char internal::Gpu_Base::Name_[] = "mojo::Gpu";
const uint32_t internal::Gpu_Base::Version_;

// Constants

// Enums

// Struct Constants

// --- Struct builder definitions ---

// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---


// static
Gpu_CreateOffscreenGLES2Context_ParamsPtr Gpu_CreateOffscreenGLES2Context_Params::New() {
  Gpu_CreateOffscreenGLES2Context_ParamsPtr rv;
  mojo::internal::StructHelper<Gpu_CreateOffscreenGLES2Context_Params>::Initialize(&rv);
  return rv;
}

Gpu_CreateOffscreenGLES2Context_Params::Gpu_CreateOffscreenGLES2Context_Params()
    : gles2_client() {
}

Gpu_CreateOffscreenGLES2Context_Params::~Gpu_CreateOffscreenGLES2Context_Params() {
}



bool Gpu_CreateOffscreenGLES2Context_Params::Equals(const Gpu_CreateOffscreenGLES2Context_Params& other) const {
  if (!mojo::internal::ValueTraits<mojo::InterfaceRequest<mojo::CommandBuffer>>::Equals(this->gles2_client, other.gles2_client))
    return false;
  return true;
}


size_t Gpu_CreateOffscreenGLES2Context_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool Gpu_CreateOffscreenGLES2Context_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::Gpu_CreateOffscreenGLES2Context_Params_Data* output_ptr;
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

bool Gpu_CreateOffscreenGLES2Context_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::Gpu_CreateOffscreenGLES2Context_Params_Data::Validate(buf, &checker, err_str);
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
void Gpu_CreateOffscreenGLES2Context_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::Gpu_CreateOffscreenGLES2Context_Params_Data* input =
      static_cast<internal::Gpu_CreateOffscreenGLES2Context_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const Gpu_CreateOffscreenGLES2Context_Params& input) {
  size_t size = sizeof(internal::Gpu_CreateOffscreenGLES2Context_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    Gpu_CreateOffscreenGLES2Context_Params* input,
    mojo::internal::Buffer* buf,
    internal::Gpu_CreateOffscreenGLES2Context_Params_Data** output) {
  if (input) {
    internal::Gpu_CreateOffscreenGLES2Context_Params_Data* result =
        internal::Gpu_CreateOffscreenGLES2Context_Params_Data::New(buf);
    result->gles2_client = input->gles2_client.PassMessagePipe().release();
    if (!result->gles2_client.is_valid()) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid gles2_client in Gpu_CreateOffscreenGLES2Context_Params struct");
      return mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::Gpu_CreateOffscreenGLES2Context_Params_Data* input,
                  Gpu_CreateOffscreenGLES2Context_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->gles2_client.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&input->gles2_client)));
    } while (false);
  }
}

}  // namespace mojo
