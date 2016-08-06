// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/icu_data/interfaces/icu_data.mojom-common.h"

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
namespace icu_data {

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---


// static
ICUData_Map_Params_Data* ICUData_Map_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ICUData_Map_Params_Data))) ICUData_Map_Params_Data();
}

// static
mojo::internal::ValidationError ICUData_Map_Params_Data::Validate(
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
  const ICUData_Map_Params_Data* object = static_cast<const ICUData_Map_Params_Data*>(data);

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
    
  if (!object->sha1hash.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null sha1hash field in ICUData_Map_Params struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->sha1hash.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  const mojo::internal::ArrayValidateParams sha1hash_validate_params(
      0, false, nullptr);
  auto validate_retval =
      mojo::String::Data_::Validate(
          mojo::internal::DecodePointerRaw(&object->sha1hash.offset),
          bounds_checker, &sha1hash_validate_params, err);
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void ICUData_Map_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->sha1hash, handles);
}

void ICUData_Map_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->sha1hash, handles);
}

ICUData_Map_Params_Data::ICUData_Map_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


// static
ICUData_Map_ResponseParams_Data* ICUData_Map_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ICUData_Map_ResponseParams_Data))) ICUData_Map_ResponseParams_Data();
}

// static
mojo::internal::ValidationError ICUData_Map_ResponseParams_Data::Validate(
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
  const ICUData_Map_ResponseParams_Data* object = static_cast<const ICUData_Map_ResponseParams_Data*>(data);

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
    
  const mojo::Handle icu_data_handle = object->icu_data;
  if (!bounds_checker->ClaimHandle(icu_data_handle)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_HANDLE;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void ICUData_Map_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&this->icu_data, handles);
}

void ICUData_Map_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&this->icu_data, handles);
}

ICUData_Map_ResponseParams_Data::ICUData_Map_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal

// --- Request and response validator definitions for interfaces ---
mojo::internal::ValidationError ICUDataRequestValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlRequest(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "request validation error for interface 'ICUData', "
           "message name '" << message->header()->name << "': " <<
           (err ? *err : "");
      ReportValidationError(retval, err);
      return retval;
    }
    return mojo::internal::ValidationError::NONE;
  }

  internal::ICUData_Base::MessageOrdinals method_ordinal =
      static_cast<internal::ICUData_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::ICUData_Base::MessageOrdinals::Map: {
      retval =
          mojo::internal::ValidateMessageIsRequestExpectingResponse(message,
                                                                    err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
          << "request validation error for interface 'ICUData', "
             "message name '" << message->header()->name << "': " <<
             (err ? *err : "");
        ReportValidationError(retval, err);
        return retval;
      }
      retval = mojo::internal::ValidateMessagePayload<
                 internal::ICUData_Map_Params_Data>(
                    message, err); 
      if (retval != mojo::internal::ValidationError::NONE) {
         MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "request validation error for interface 'ICUData', "
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
                                            "'ICUData'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
}
mojo::internal::ValidationError ICUDataResponseValidator::Validate(
    const mojo::Message* message,
    std::string* err) {
  mojo::internal::ValidationError retval;
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    retval = mojo::internal::ValidateControlResponse(message, err);
    if (retval != mojo::internal::ValidationError::NONE) {
      MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
        << "response validation error for interface 'ICUData', "
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
            << "response validation error for interface 'ICUData', "
               "message name '" << message->header()->name << "': " <<
               (err ? *err : "");
    ReportValidationError(retval, err);
    return retval;
  }

  internal::ICUData_Base::MessageOrdinals method_ordinal =
      static_cast<internal::ICUData_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::ICUData_Base::MessageOrdinals::Map: {
      retval = mojo::internal::ValidateMessagePayload<
                  internal::ICUData_Map_ResponseParams_Data>(
                      message, err);
      if (retval != mojo::internal::ValidationError::NONE) {
        MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err)
            << "response validation error for interface 'ICUData',"
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
                                             "'ICUData'";
  ReportValidationError(
      mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD, err);
  return mojo::internal::ValidationError::MESSAGE_HEADER_UNKNOWN_METHOD;
} 

// --- Enums ---

// Base interface definitions (Name_, Version_, Constants, Enums)
const char internal::ICUData_Base::Name_[] = "icu_data::ICUData";
const uint32_t internal::ICUData_Base::Version_;

// Constants

// Enums

// Struct Constants

// --- Struct builder definitions ---

// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---


// static
ICUData_Map_ParamsPtr ICUData_Map_Params::New() {
  ICUData_Map_ParamsPtr rv;
  mojo::internal::StructHelper<ICUData_Map_Params>::Initialize(&rv);
  return rv;
}

ICUData_Map_Params::ICUData_Map_Params()
    : sha1hash() {
}

ICUData_Map_Params::~ICUData_Map_Params() {
}


ICUData_Map_ParamsPtr ICUData_Map_Params::Clone() const {
  ICUData_Map_ParamsPtr rv(New());
  rv->sha1hash = sha1hash;
  return rv;
}


bool ICUData_Map_Params::Equals(const ICUData_Map_Params& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->sha1hash, other.sha1hash))
    return false;
  return true;
}


size_t ICUData_Map_Params::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool ICUData_Map_Params::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::ICUData_Map_Params_Data* output_ptr;
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

bool ICUData_Map_Params::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::ICUData_Map_Params_Data::Validate(buf, &checker, err_str);
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
void ICUData_Map_Params::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::ICUData_Map_Params_Data* input =
      static_cast<internal::ICUData_Map_Params_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const ICUData_Map_Params& input) {
  size_t size = sizeof(internal::ICUData_Map_Params_Data);
  size += GetSerializedSize_(input.sha1hash);
  return size;
}

mojo::internal::ValidationError Serialize_(
    ICUData_Map_Params* input,
    mojo::internal::Buffer* buf,
    internal::ICUData_Map_Params_Data** output) {
  if (input) {
    internal::ICUData_Map_Params_Data* result =
        internal::ICUData_Map_Params_Data::New(buf);
    SerializeString_(input->sha1hash, buf, &result->sha1hash.ptr);
    if (!result->sha1hash.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null sha1hash in ICUData_Map_Params struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::ICUData_Map_Params_Data* input,
                  ICUData_Map_Params* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      Deserialize_(input->sha1hash.ptr, &result->sha1hash);
    } while (false);
  }
}


// static
ICUData_Map_ResponseParamsPtr ICUData_Map_ResponseParams::New() {
  ICUData_Map_ResponseParamsPtr rv;
  mojo::internal::StructHelper<ICUData_Map_ResponseParams>::Initialize(&rv);
  return rv;
}

ICUData_Map_ResponseParams::ICUData_Map_ResponseParams()
    : icu_data() {
}

ICUData_Map_ResponseParams::~ICUData_Map_ResponseParams() {
}



bool ICUData_Map_ResponseParams::Equals(const ICUData_Map_ResponseParams& other) const {
  if (!mojo::internal::ValueTraits<mojo::ScopedSharedBufferHandle>::Equals(this->icu_data, other.icu_data))
    return false;
  return true;
}


size_t ICUData_Map_ResponseParams::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool ICUData_Map_ResponseParams::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::ICUData_Map_ResponseParams_Data* output_ptr;
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

bool ICUData_Map_ResponseParams::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::ICUData_Map_ResponseParams_Data::Validate(buf, &checker, err_str);
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
void ICUData_Map_ResponseParams::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::ICUData_Map_ResponseParams_Data* input =
      static_cast<internal::ICUData_Map_ResponseParams_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const ICUData_Map_ResponseParams& input) {
  size_t size = sizeof(internal::ICUData_Map_ResponseParams_Data);
  return size;
}

mojo::internal::ValidationError Serialize_(
    ICUData_Map_ResponseParams* input,
    mojo::internal::Buffer* buf,
    internal::ICUData_Map_ResponseParams_Data** output) {
  if (input) {
    internal::ICUData_Map_ResponseParams_Data* result =
        internal::ICUData_Map_ResponseParams_Data::New(buf);
    result->icu_data = input->icu_data.release();
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::ICUData_Map_ResponseParams_Data* input,
                  ICUData_Map_ResponseParams* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->icu_data.reset(mojo::internal::FetchAndReset(&input->icu_data));
    } while (false);
  }
}

}  // namespace icu_data
