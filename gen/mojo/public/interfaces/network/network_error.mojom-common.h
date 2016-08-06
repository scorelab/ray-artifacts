// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_NETWORK_NETWORK_ERROR_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_NETWORK_NETWORK_ERROR_MOJOM_COMMON_H_

#include <stdint.h>
#include <iosfwd>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/public/interfaces/network/network_error.mojom-internal.h"
namespace mojo {

// --- Interface Forward Declarations ---

// --- Struct Forward Declarations ---
class NetworkError;

using NetworkErrorPtr = mojo::InlinedStructPtr<NetworkError>;



// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {
template <>
struct WrapperTraits<mojo::NetworkErrorPtr, true, false> {
  using DataType = mojo::internal::NetworkError_Data*;
};

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---

// --- Interface Response Validators ---

// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---
class NetworkError {
 public:
  using Data_ = internal::NetworkError_Data;

  static NetworkErrorPtr New();

  template <typename U>
  static NetworkErrorPtr From(const U& u) {
    return mojo::TypeConverter<NetworkErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetworkError>::Convert(*this);
  }

  NetworkError();
  ~NetworkError();
  
  // Returns the number of bytes it would take to serialize this struct's data.
  size_t GetSerializedSize() const;

  // Returns true on successful serialization. On failure, part of the data may
  // be serialized, until the point of failure. This API does not support
  // serializing handles. If not null, |bytes_written| is set to the number of
  // bytes written to |buf|, even if this function return false. 
  //
  // TODO(vardhan): For now, we return true for success. Should we define a
  // public error type for serialization? Should we open up
  // internal::ValidationError?
  bool Serialize(void* buf, size_t buf_size, size_t* bytes_written = nullptr);

  // Deserializes the given |buf| of size |buf_size| representing a serialized
  // version of this struct. The buffer is validated before it is deserialized.
  // Returns true on successful deserialization.
  // TODO(vardhan): Recover the validation error if there is one?
  bool Deserialize(void* buf, size_t buf_size);

  // Deserializes the given |buf| representing a serialized version of this
  // struct. The buffer is NOT validated before it is deserialized, so the user
  // must be confident of its validity and that |buf| points to enough data to
  // finish deserializing.
  void DeserializeWithoutValidation(void* buf);


  NetworkErrorPtr Clone() const;
  bool Equals(const NetworkError& other) const;

  int32_t code;
  mojo::String description;
};



// --- Non-inlined structs ---

// --- Struct serialization helpers ---
size_t GetSerializedSize_(const NetworkError& input);
mojo::internal::ValidationError Serialize_(
    NetworkError* input,
    mojo::internal::Buffer* buffer,
    internal::NetworkError_Data** output);
void Deserialize_(internal::NetworkError_Data* input,
                  NetworkError* output);


// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_NETWORK_NETWORK_ERROR_MOJOM_COMMON_H_
