// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_COOKIE_STORE_MOJOM_COMMON_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_COOKIE_STORE_MOJOM_COMMON_H_

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
#include "mojo/services/network/interfaces/cookie_store.mojom-internal.h"
namespace mojo {

// --- Interface Forward Declarations ---
class CookieStore;
class CookieStoreRequestValidator;
class CookieStoreResponseValidator;
class CookieStore_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class CookieStore_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = CookieStoreRequestValidator;
  using ResponseValidator_ = CookieStoreResponseValidator;
  using Synchronous_ = CookieStore_Synchronous;
  enum class MessageOrdinals : uint32_t {
    Get = 0,
    Set = 1,
  };


  virtual ~CookieStore_Base() {}
};

}  // namespace internal

// Async interface declaration

class CookieStoreProxy;
class CookieStoreStub;
class CookieStore_Synchronous;

class CookieStoreRequestValidator;
class CookieStoreResponseValidator;

class CookieStore : public internal::CookieStore_Base {
 public:
  virtual ~CookieStore() override {}

  using Proxy_ = CookieStoreProxy;
  using Stub_ = CookieStoreStub;
  using GetCallback = mojo::Callback<void(mojo::String)>;
  virtual void Get(const mojo::String& url, const GetCallback& callback) = 0;
  using SetCallback = mojo::Callback<void(bool)>;
  virtual void Set(const mojo::String& url, const mojo::String& cookie, const SetCallback& callback) = 0;
};

}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---
class CookieStoreRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface Response Validators ---
class CookieStoreResponseValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---

// --- Non-inlined structs ---

// --- Struct serialization helpers ---

// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      

class CookieStore_Get_Params;

using CookieStore_Get_ParamsPtr = mojo::InlinedStructPtr<CookieStore_Get_Params>;


size_t GetSerializedSize_(const CookieStore_Get_Params& input);
mojo::internal::ValidationError Serialize_(
    CookieStore_Get_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CookieStore_Get_Params_Data** output);
void Deserialize_(internal::CookieStore_Get_Params_Data* input,
                  CookieStore_Get_Params* output);

class CookieStore_Get_Params {
 public:
  using Data_ = internal::CookieStore_Get_Params_Data;

  static CookieStore_Get_ParamsPtr New();

  template <typename U>
  static CookieStore_Get_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CookieStore_Get_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieStore_Get_Params>::Convert(*this);
  }

  CookieStore_Get_Params();
  ~CookieStore_Get_Params();
  
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


  CookieStore_Get_ParamsPtr Clone() const;
  bool Equals(const CookieStore_Get_Params& other) const;

  mojo::String url;
};



class CookieStore_Get_ResponseParams;

using CookieStore_Get_ResponseParamsPtr = mojo::InlinedStructPtr<CookieStore_Get_ResponseParams>;


size_t GetSerializedSize_(const CookieStore_Get_ResponseParams& input);
mojo::internal::ValidationError Serialize_(
    CookieStore_Get_ResponseParams* input,
    mojo::internal::Buffer* buffer,
    internal::CookieStore_Get_ResponseParams_Data** output);
void Deserialize_(internal::CookieStore_Get_ResponseParams_Data* input,
                  CookieStore_Get_ResponseParams* output);

class CookieStore_Get_ResponseParams {
 public:
  using Data_ = internal::CookieStore_Get_ResponseParams_Data;

  static CookieStore_Get_ResponseParamsPtr New();

  template <typename U>
  static CookieStore_Get_ResponseParamsPtr From(const U& u) {
    return mojo::TypeConverter<CookieStore_Get_ResponseParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieStore_Get_ResponseParams>::Convert(*this);
  }

  CookieStore_Get_ResponseParams();
  ~CookieStore_Get_ResponseParams();
  
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


  CookieStore_Get_ResponseParamsPtr Clone() const;
  bool Equals(const CookieStore_Get_ResponseParams& other) const;

  mojo::String cookies;
};



class CookieStore_Set_Params;

using CookieStore_Set_ParamsPtr = mojo::InlinedStructPtr<CookieStore_Set_Params>;


size_t GetSerializedSize_(const CookieStore_Set_Params& input);
mojo::internal::ValidationError Serialize_(
    CookieStore_Set_Params* input,
    mojo::internal::Buffer* buffer,
    internal::CookieStore_Set_Params_Data** output);
void Deserialize_(internal::CookieStore_Set_Params_Data* input,
                  CookieStore_Set_Params* output);

class CookieStore_Set_Params {
 public:
  using Data_ = internal::CookieStore_Set_Params_Data;

  static CookieStore_Set_ParamsPtr New();

  template <typename U>
  static CookieStore_Set_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<CookieStore_Set_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieStore_Set_Params>::Convert(*this);
  }

  CookieStore_Set_Params();
  ~CookieStore_Set_Params();
  
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


  CookieStore_Set_ParamsPtr Clone() const;
  bool Equals(const CookieStore_Set_Params& other) const;

  mojo::String url;
  mojo::String cookie;
};



class CookieStore_Set_ResponseParams;

using CookieStore_Set_ResponseParamsPtr = mojo::InlinedStructPtr<CookieStore_Set_ResponseParams>;


size_t GetSerializedSize_(const CookieStore_Set_ResponseParams& input);
mojo::internal::ValidationError Serialize_(
    CookieStore_Set_ResponseParams* input,
    mojo::internal::Buffer* buffer,
    internal::CookieStore_Set_ResponseParams_Data** output);
void Deserialize_(internal::CookieStore_Set_ResponseParams_Data* input,
                  CookieStore_Set_ResponseParams* output);

class CookieStore_Set_ResponseParams {
 public:
  using Data_ = internal::CookieStore_Set_ResponseParams_Data;

  static CookieStore_Set_ResponseParamsPtr New();

  template <typename U>
  static CookieStore_Set_ResponseParamsPtr From(const U& u) {
    return mojo::TypeConverter<CookieStore_Set_ResponseParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieStore_Set_ResponseParams>::Convert(*this);
  }

  CookieStore_Set_ResponseParams();
  ~CookieStore_Set_ResponseParams();
  
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


  CookieStore_Set_ResponseParamsPtr Clone() const;
  bool Equals(const CookieStore_Set_ResponseParams& other) const;

  bool success;
};


}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_COOKIE_STORE_MOJOM_COMMON_H_
