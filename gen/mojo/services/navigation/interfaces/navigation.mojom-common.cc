// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/navigation/interfaces/navigation.mojom-common.h"

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
NavigatorHost_RequestNavigate_Params_Data* NavigatorHost_RequestNavigate_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NavigatorHost_RequestNavigate_Params_Data))) NavigatorHost_RequestNavigate_Params_Data();
}

// static
mojo::internal::ValidationError NavigatorHost_RequestNavigate_Params_Data::Validate(
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
  const NavigatorHost_RequestNavigate_Params_Data* object = static_cast<const NavigatorHost_RequestNavigate_Params_Data*>(data);

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
    
  if (!object->request.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null request field in NavigatorHost_RequestNavigate_Params struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->request.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  auto validate_retval = mojo::URLRequest::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->request.offset),
          bounds_checker, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void NavigatorHost_RequestNavigate_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->request, handles);
}

void NavigatorHost_RequestNavigate_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->request, handles);
}

NavigatorHost_RequestNavigate_Params_Data::NavigatorHost_RequestNavigate_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}



// static
NavigatorHost_RequestNavigateHistory_Params_Data* NavigatorHost_RequestNavigateHistory_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NavigatorHost_RequestNavigateHistory_Params_Data))) NavigatorHost_RequestNavigateHistory_Params_Data();
}

// static
mojo::internal::ValidationError NavigatorHost_RequestNavigateHistory_Params_Data::Validate(
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
  const NavigatorHost_RequestNavigateHistory_Params_Data* object = static_cast<const NavigatorHost_RequestNavigateHistory_Params_Data*>(data);

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

void NavigatorHost_RequestNavigateHistory_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void NavigatorHost_RequestNavigateHistory_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

NavigatorHost_RequestNavigateHistory_Params_Data::NavigatorHost_RequestNavigateHistory_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}



// static
NavigatorHost_DidNavigateLocally_Params_Data* NavigatorHost_DidNavigateLocally_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NavigatorHost_DidNavigateLocally_Params_Data))) NavigatorHost_DidNavigateLocally_Params_Data();
}

// static
mojo::internal::ValidationError NavigatorHost_DidNavigateLocally_Params_Data::Validate(
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
  const NavigatorHost_DidNavigateLocally_Params_Data* object = static_cast<const NavigatorHost_DidNavigateLocally_Params_Data*>(data);

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
    
  if (!object->url.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null url field in NavigatorHost_DidNavigateLocally_Params struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->url.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  auto validate_retval =
      mojo::String::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->url.offset),
          bounds_checker, &url_validate_params, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void NavigatorHost_DidNavigateLocally_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->url, handles);
}

void NavigatorHost_DidNavigateLocally_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->url, handles);
}

NavigatorHost_DidNavigateLocally_Params_Data::NavigatorHost_DidNavigateLocally_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// --- Request and response validator definitions for interfaces ---
mojo::internal::ValidationError NavigatorHostRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'NavigatorHost', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::NavigatorHost_Base::MessageOrdinals method_ordinal =
      static_cast<internal::NavigatorHost_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::NavigatorHost_Base::MessageOrdinals::RequestNavigate: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'NavigatorHost', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::NavigatorHost_RequestNavigate_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'NavigatorHost', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      return mojo::internal::ValidationError::NONE;
    }
    case internal::NavigatorHost_Base::MessageOrdinals::RequestNavigateHistory: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'NavigatorHost', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::NavigatorHost_RequestNavigateHistory_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'NavigatorHost', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      return mojo::internal::ValidationError::NONE;
    }
    case internal::NavigatorHost_Base::MessageOrdinals::DidNavigateLocally: {
      retval = mojo::internal::ValidateMessageIsRequestWithoutResponse(message,
                                                                       err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'NavigatorHost', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::NavigatorHost_DidNavigateLocally_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'NavigatorHost', "
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
                                            "'NavigatorHost'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
} 

// --- Enums ---
bool Target_IsValidValue(Target value) {
  switch (static_cast<int32_t>(value)) {
    case 0:
    case 1:
    case 2:
      return true;
  }
  return false;
}
  
std::ostream& operator<<(std::ostream& stream, const Target& val) {
  return (stream << static_cast<int32_t>(val));
}

// Base interface definitions (Name_, Version_, Constants, Enums)
const char internal::NavigatorHost_Base::Name_[] = "mojo::NavigatorHost";
const uint32_t internal::NavigatorHost_Base::Version_;

// Constants

// Enums

// Struct Constants

// --- Struct builder definitions ---

// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---


// static
NavigatorHost_RequestNavigate_ParamsPtr NavigatorHost_RequestNavigate_Params::New() {
  NavigatorHost_RequestNavigate_ParamsPtr rv;
  mojo::internal::StructHelper<NavigatorHost_RequestNavigate_Params>::Initialize(&rv);
  return rv;
}

NavigatorHost_RequestNavigate_Params::NavigatorHost_RequestNavigate_Params()
    : target(),
      request() {
}

NavigatorHost_RequestNavigate_Params::~NavigatorHost_RequestNavigate_Params() {
}



bool NavigatorHost_RequestNavigate_Params::Equals(const NavigatorHost_RequestNavigate_Params& other) const {
  if (!mojo::internal::ValueTraits<Target>::Equals(this->target, other.target))
    return false;
  if (!mojo::internal::ValueTraits<mojo::URLRequestPtr>::Equals(this->request, other.request))
    return false;
  return true;
}


size_t NavigatorHost_RequestNavigate_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool NavigatorHost_RequestNavigate_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::NavigatorHost_RequestNavigate_Params_Data* output_ptr;
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

bool NavigatorHost_RequestNavigate_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::NavigatorHost_RequestNavigate_Params_Data::Validate(buf, &checker, err_str);
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
void NavigatorHost_RequestNavigate_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::NavigatorHost_RequestNavigate_Params_Data* input =
      static_cast<internal::NavigatorHost_RequestNavigate_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const NavigatorHost_RequestNavigate_Params& input) {
  size_t size = sizeof(internal::NavigatorHost_RequestNavigate_Params_Data);
  size += input.request.is_null()
              ? 0
              : GetSerializedSize_(*input.request);
  return size;
}

mojo::internal::ValidationError Serialize_(
    NavigatorHost_RequestNavigate_Params* input,
    mojo::internal::Buffer* buf,
    internal::NavigatorHost_RequestNavigate_Params_Data** output) {
  if (input) {
    internal::NavigatorHost_RequestNavigate_Params_Data* result =
        internal::NavigatorHost_RequestNavigate_Params_Data::New(buf);
    result->target =
      static_cast<int32_t>(input->target);
    {auto retval =Serialize_(input->request.get(),
                 buf,
                 &result->request.ptr);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    if (!result->request.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null request in NavigatorHost_RequestNavigate_Params struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::NavigatorHost_RequestNavigate_Params_Data* input,
                  NavigatorHost_RequestNavigate_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->target = static_cast<Target>(input->target);
      if (input->request.ptr) {
        result->request = mojo::URLRequest::New();
        Deserialize_(input->request.ptr, result->request.get());
      }
    } while (false);
  }
}



// static
NavigatorHost_RequestNavigateHistory_ParamsPtr NavigatorHost_RequestNavigateHistory_Params::New() {
  NavigatorHost_RequestNavigateHistory_ParamsPtr rv;
  mojo::internal::StructHelper<NavigatorHost_RequestNavigateHistory_Params>::Initialize(&rv);
  return rv;
}

NavigatorHost_RequestNavigateHistory_Params::NavigatorHost_RequestNavigateHistory_Params()
    : delta() {
}

NavigatorHost_RequestNavigateHistory_Params::~NavigatorHost_RequestNavigateHistory_Params() {
}


NavigatorHost_RequestNavigateHistory_ParamsPtr NavigatorHost_RequestNavigateHistory_Params::Clone() const {
  NavigatorHost_RequestNavigateHistory_ParamsPtr rv(New());
  rv->delta = delta;
  return rv;
}


bool NavigatorHost_RequestNavigateHistory_Params::Equals(const NavigatorHost_RequestNavigateHistory_Params& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->delta, other.delta))
    return false;
  return true;
}


size_t NavigatorHost_RequestNavigateHistory_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool NavigatorHost_RequestNavigateHistory_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::NavigatorHost_RequestNavigateHistory_Params_Data* output_ptr;
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

bool NavigatorHost_RequestNavigateHistory_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::NavigatorHost_RequestNavigateHistory_Params_Data::Validate(buf, &checker, err_str);
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
void NavigatorHost_RequestNavigateHistory_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::NavigatorHost_RequestNavigateHistory_Params_Data* input =
      static_cast<internal::NavigatorHost_RequestNavigateHistory_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const NavigatorHost_RequestNavigateHistory_Params& input) {
  size_t size = sizeof(internal::NavigatorHost_RequestNavigateHistory_Params_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    NavigatorHost_RequestNavigateHistory_Params* input,
    mojo::internal::Buffer* buf,
    internal::NavigatorHost_RequestNavigateHistory_Params_Data** output) {
  if (input) {
    internal::NavigatorHost_RequestNavigateHistory_Params_Data* result =
        internal::NavigatorHost_RequestNavigateHistory_Params_Data::New(buf);
    result->delta = input->delta;
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::NavigatorHost_RequestNavigateHistory_Params_Data* input,
                  NavigatorHost_RequestNavigateHistory_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->delta = input->delta;
    } while (false);
  }
}



// static
NavigatorHost_DidNavigateLocally_ParamsPtr NavigatorHost_DidNavigateLocally_Params::New() {
  NavigatorHost_DidNavigateLocally_ParamsPtr rv;
  mojo::internal::StructHelper<NavigatorHost_DidNavigateLocally_Params>::Initialize(&rv);
  return rv;
}

NavigatorHost_DidNavigateLocally_Params::NavigatorHost_DidNavigateLocally_Params()
    : url() {
}

NavigatorHost_DidNavigateLocally_Params::~NavigatorHost_DidNavigateLocally_Params() {
}


NavigatorHost_DidNavigateLocally_ParamsPtr NavigatorHost_DidNavigateLocally_Params::Clone() const {
  NavigatorHost_DidNavigateLocally_ParamsPtr rv(New());
  rv->url = url;
  return rv;
}


bool NavigatorHost_DidNavigateLocally_Params::Equals(const NavigatorHost_DidNavigateLocally_Params& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->url, other.url))
    return false;
  return true;
}


size_t NavigatorHost_DidNavigateLocally_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool NavigatorHost_DidNavigateLocally_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::NavigatorHost_DidNavigateLocally_Params_Data* output_ptr;
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

bool NavigatorHost_DidNavigateLocally_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::NavigatorHost_DidNavigateLocally_Params_Data::Validate(buf, &checker, err_str);
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
void NavigatorHost_DidNavigateLocally_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::NavigatorHost_DidNavigateLocally_Params_Data* input =
      static_cast<internal::NavigatorHost_DidNavigateLocally_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const NavigatorHost_DidNavigateLocally_Params& input) {
  size_t size = sizeof(internal::NavigatorHost_DidNavigateLocally_Params_Data);
  size += GetSerializedSize_(input.url);
  return size;
}

mojo::internal::ValidationError Serialize_(
    NavigatorHost_DidNavigateLocally_Params* input,
    mojo::internal::Buffer* buf,
    internal::NavigatorHost_DidNavigateLocally_Params_Data** output) {
  if (input) {
    internal::NavigatorHost_DidNavigateLocally_Params_Data* result =
        internal::NavigatorHost_DidNavigateLocally_Params_Data::New(buf);
    SerializeString_(input->url, buf, &result->url.ptr);
    if (!result->url.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null url in NavigatorHost_DidNavigateLocally_Params struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::NavigatorHost_DidNavigateLocally_Params_Data* input,
                  NavigatorHost_DidNavigateLocally_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      Deserialize_(input->url.ptr, &result->url);
    } while (false);
  }
}

}  // namespace mojo
