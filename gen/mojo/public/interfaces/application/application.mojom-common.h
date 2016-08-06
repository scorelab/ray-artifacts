// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/application/application.mojom-internal.h"
#include "mojo/public/interfaces/application/service_provider.mojom-common.h"
#include "mojo/public/interfaces/application/shell.mojom-common.h"
namespace mojo {

// --- Interface Forward Declarations ---
class Application;
class ApplicationRequestValidator;
class Application_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class Application_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = ApplicationRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = Application_Synchronous;
  enum class MessageOrdinals : uint32_t {
    Initialize = 0,
    AcceptConnection = 1,
    RequestQuit = 2,
  };


  virtual ~Application_Base() {}
};

}  // namespace internal

// Async interface declaration

class ApplicationProxy;
class ApplicationStub;
class Application_Synchronous;

class ApplicationRequestValidator;

class Application : public internal::Application_Base {
 public:
  virtual ~Application() override {}

  using Proxy_ = ApplicationProxy;
  using Stub_ = ApplicationStub;
  virtual void Initialize(mojo::InterfaceHandle<mojo::Shell> shell, mojo::Array<mojo::String> args, const mojo::String& url) = 0;
  virtual void AcceptConnection(const mojo::String& requestor_url, const mojo::String& resolved_url, mojo::InterfaceRequest<mojo::ServiceProvider> services) = 0;
  virtual void RequestQuit() = 0;
};

}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---
class ApplicationRequestValidator
    : public mojo::internal::MessageValidator {
 public:
  mojo::internal::ValidationError Validate(const mojo::Message* message,
                                           std::string* err) override;
};


// --- Interface Response Validators ---

// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---

// --- Non-inlined structs ---

// --- Struct serialization helpers ---

// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---
      

class Application_Initialize_Params;

using Application_Initialize_ParamsPtr = mojo::StructPtr<Application_Initialize_Params>;


size_t GetSerializedSize_(const Application_Initialize_Params& input);
mojo::internal::ValidationError Serialize_(
    Application_Initialize_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Application_Initialize_Params_Data** output);
void Deserialize_(internal::Application_Initialize_Params_Data* input,
                  Application_Initialize_Params* output);

class Application_Initialize_Params {
 public:
  using Data_ = internal::Application_Initialize_Params_Data;

  static Application_Initialize_ParamsPtr New();

  template <typename U>
  static Application_Initialize_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Application_Initialize_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Application_Initialize_Params>::Convert(*this);
  }

  Application_Initialize_Params();
  ~Application_Initialize_Params();
  
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


  bool Equals(const Application_Initialize_Params& other) const;

  mojo::InterfaceHandle<mojo::Shell> shell;
  mojo::Array<mojo::String> args;
  mojo::String url;
};




class Application_AcceptConnection_Params;

using Application_AcceptConnection_ParamsPtr = mojo::StructPtr<Application_AcceptConnection_Params>;


size_t GetSerializedSize_(const Application_AcceptConnection_Params& input);
mojo::internal::ValidationError Serialize_(
    Application_AcceptConnection_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Application_AcceptConnection_Params_Data** output);
void Deserialize_(internal::Application_AcceptConnection_Params_Data* input,
                  Application_AcceptConnection_Params* output);

class Application_AcceptConnection_Params {
 public:
  using Data_ = internal::Application_AcceptConnection_Params_Data;

  static Application_AcceptConnection_ParamsPtr New();

  template <typename U>
  static Application_AcceptConnection_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Application_AcceptConnection_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Application_AcceptConnection_Params>::Convert(*this);
  }

  Application_AcceptConnection_Params();
  ~Application_AcceptConnection_Params();
  
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


  bool Equals(const Application_AcceptConnection_Params& other) const;

  mojo::String requestor_url;
  mojo::String resolved_url;
  mojo::InterfaceRequest<mojo::ServiceProvider> services;
};




class Application_RequestQuit_Params;

using Application_RequestQuit_ParamsPtr = mojo::InlinedStructPtr<Application_RequestQuit_Params>;


size_t GetSerializedSize_(const Application_RequestQuit_Params& input);
mojo::internal::ValidationError Serialize_(
    Application_RequestQuit_Params* input,
    mojo::internal::Buffer* buffer,
    internal::Application_RequestQuit_Params_Data** output);
void Deserialize_(internal::Application_RequestQuit_Params_Data* input,
                  Application_RequestQuit_Params* output);

class Application_RequestQuit_Params {
 public:
  using Data_ = internal::Application_RequestQuit_Params_Data;

  static Application_RequestQuit_ParamsPtr New();

  template <typename U>
  static Application_RequestQuit_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<Application_RequestQuit_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Application_RequestQuit_Params>::Convert(*this);
  }

  Application_RequestQuit_Params();
  ~Application_RequestQuit_Params();
  
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


  Application_RequestQuit_ParamsPtr Clone() const;
  bool Equals(const Application_RequestQuit_Params& other) const;

};



}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_MOJOM_COMMON_H_
