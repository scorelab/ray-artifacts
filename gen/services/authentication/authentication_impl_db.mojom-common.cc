// NOTE: This file was generated by the Mojo bindings generator.
#include "services/authentication/authentication_impl_db.mojom-common.h"

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
namespace authentication {

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// static
Db_Data* Db_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Db_Data))) Db_Data();
}

// static
mojo::internal::ValidationError Db_Data::Validate(
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
  const Db_Data* object = static_cast<const Db_Data*>(data);

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
    
  if (!object->last_selected_accounts.offset) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) <<
        "null last_selected_accounts field in Db struct";
    return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
  }
  if (!mojo::internal::ValidateEncodedPointer(&object->last_selected_accounts.offset)) {
    MOJO_INTERNAL_DEBUG_SET_ERROR_MSG(err) << "";
    return mojo::internal::ValidationError::ILLEGAL_POINTER;
  }
  const mojo::internal::ArrayValidateParams last_selected_accounts_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  auto validate_retval = mojo::Map<mojo::String, mojo::String>::Data_::Validate(
              mojo::internal::DecodePointerRaw(&object->last_selected_accounts.offset),
              bounds_checker, &last_selected_accounts_validate_params, err); 
  if (validate_retval != mojo::internal::ValidationError::NONE) {
    return validate_retval;
  }
  }

  return mojo::internal::ValidationError::NONE;
}

void Db_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&this->last_selected_accounts, handles);
}

void Db_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&this->last_selected_accounts, handles);
}

Db_Data::Db_Data() {
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
DbPtr Db::New() {
  DbPtr rv;
  mojo::internal::StructHelper<Db>::Initialize(&rv);
  return rv;
}

Db::Db()
    : version(),
      last_selected_accounts() {
}

Db::~Db() {
}


DbPtr Db::Clone() const {
  DbPtr rv(New());
  rv->version = version;
  rv->last_selected_accounts = last_selected_accounts.Clone();
  return rv;
}


bool Db::Equals(const Db& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->version, other.version))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Map<mojo::String, mojo::String>>::Equals(this->last_selected_accounts, other.last_selected_accounts))
    return false;
  return true;
}


// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

size_t Db::GetSerializedSize() const {
  return GetSerializedSize_(*this);
}

bool Db::Serialize(void* buf,
                                size_t buf_size,
                                size_t* bytes_written) {
  MOJO_DCHECK(buf);

  mojo::internal::FixedBuffer overlay_buf;
  overlay_buf.Initialize(buf, buf_size);

  internal::Db_Data* output_ptr;
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

bool Db::Deserialize(void* buf, size_t buf_size) {
  MOJO_DCHECK(buf);

  mojo::internal::BoundsChecker checker(buf, buf_size, 0);

  std::string* err_str = nullptr;
#if !defined(NDEBUG)
  std::string err_str2;
  err_str = &err_str2;
#endif

  mojo::internal::ValidationError err =
      internal::Db_Data::Validate(buf, &checker, err_str);
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
void Db::DeserializeWithoutValidation(void* buf) {
  MOJO_DCHECK(buf);

  internal::Db_Data* input =
      static_cast<internal::Db_Data*>(buf);
  std::vector<mojo::Handle> handles;
  input->DecodePointersAndHandles(&handles);
  MOJO_CHECK(handles.empty()) << "Deserialization does not support handles.";

  Deserialize_(input, this);
}

size_t GetSerializedSize_(const Db& input) {
  size_t size = sizeof(internal::Db_Data);
  size += GetSerializedSize_(input.last_selected_accounts);
  return size;
}

mojo::internal::ValidationError Serialize_(
    Db* input,
    mojo::internal::Buffer* buf,
    internal::Db_Data** output) {
  if (input) {
    internal::Db_Data* result =
        internal::Db_Data::New(buf);
    result->version = input->version;
    {
      const mojo::internal::ArrayValidateParams last_selected_accounts_validate_params(
          0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));auto retval =mojo::SerializeMap_(
          &input->last_selected_accounts, buf, &result->last_selected_accounts.ptr,
          &last_selected_accounts_validate_params);
      if (retval != mojo::internal::ValidationError::NONE)
        return retval;
    }
    if (!result->last_selected_accounts.ptr) {
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null last_selected_accounts in Db struct");
      return mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER;
    }
    *output = result;
  } else {
    *output = nullptr;
  }
  return mojo::internal::ValidationError::NONE;
}

void Deserialize_(internal::Db_Data* input,
                  Db* result) {
  if (input) {
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->version = input->version;
      Deserialize_(input->last_selected_accounts.ptr, &result->last_selected_accounts);
    } while (false);
  }
}


// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---
}  // namespace authentication