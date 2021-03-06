// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_CONNECTOR_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_CONNECTOR_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/application/application_connector.mojom-internal.h"
#include "mojo/public/interfaces/application/service_provider.mojom-common.h"
namespace mojo {

// --- Interface Forward Declarations ---
class ApplicationConnector;
class ApplicationConnectorRequestValidator;
class ApplicationConnector_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class ApplicationConnector_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = ApplicationConnectorRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = ApplicationConnector_Synchronous;
  enum class MessageOrdinals : uint32_t {
    ConnectToApplication = 0,
    Duplicate = 1,
  };


  virtual ~ApplicationConnector_Base() {}
};

}  // namespace internal

// Async interface declaration

class ApplicationConnectorProxy;
class ApplicationConnectorStub;
class ApplicationConnector_Synchronous;

class ApplicationConnectorRequestValidator;

class ApplicationConnector : public internal::ApplicationConnector_Base {
 public:
  virtual ~ApplicationConnector() override {}

  using Proxy_ = ApplicationConnectorProxy;
  using Stub_ = ApplicationConnectorStub;
  virtual void ConnectToApplication(const mojo::String& application_url, mojo::InterfaceRequest<mojo::ServiceProvider> services) = 0;
  virtual void Duplicate(mojo::InterfaceRequest<ApplicationConnector> application_connector_request) = 0;
};

}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---
class ApplicationConnectorRequestValidator
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
      

class ApplicationConnector_ConnectToApplication_Params;

using ApplicationConnector_ConnectToApplication_ParamsPtr = mojo::StructPtr<ApplicationConnector_ConnectToApplication_Params>;


size_t GetSerializedSize_(const ApplicationConnector_ConnectToApplication_Params& input);
mojo::internal::ValidationError Serialize_(
    ApplicationConnector_ConnectToApplication_Params* input,
    mojo::internal::Buffer* buffer,
    internal::ApplicationConnector_ConnectToApplication_Params_Data** output);
void Deserialize_(internal::ApplicationConnector_ConnectToApplication_Params_Data* input,
                  ApplicationConnector_ConnectToApplication_Params* output);

class ApplicationConnector_ConnectToApplication_Params {
 public:
  using Data_ = internal::ApplicationConnector_ConnectToApplication_Params_Data;

  static ApplicationConnector_ConnectToApplication_ParamsPtr New();

  template <typename U>
  static ApplicationConnector_ConnectToApplication_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<ApplicationConnector_ConnectToApplication_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ApplicationConnector_ConnectToApplication_Params>::Convert(*this);
  }

  ApplicationConnector_ConnectToApplication_Params();
  ~ApplicationConnector_ConnectToApplication_Params();
  
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


  bool Equals(const ApplicationConnector_ConnectToApplication_Params& other) const;

  mojo::String application_url;
  mojo::InterfaceRequest<mojo::ServiceProvider> services;
};




class ApplicationConnector_Duplicate_Params;

using ApplicationConnector_Duplicate_ParamsPtr = mojo::StructPtr<ApplicationConnector_Duplicate_Params>;


size_t GetSerializedSize_(const ApplicationConnector_Duplicate_Params& input);
mojo::internal::ValidationError Serialize_(
    ApplicationConnector_Duplicate_Params* input,
    mojo::internal::Buffer* buffer,
    internal::ApplicationConnector_Duplicate_Params_Data** output);
void Deserialize_(internal::ApplicationConnector_Duplicate_Params_Data* input,
                  ApplicationConnector_Duplicate_Params* output);

class ApplicationConnector_Duplicate_Params {
 public:
  using Data_ = internal::ApplicationConnector_Duplicate_Params_Data;

  static ApplicationConnector_Duplicate_ParamsPtr New();

  template <typename U>
  static ApplicationConnector_Duplicate_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<ApplicationConnector_Duplicate_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ApplicationConnector_Duplicate_Params>::Convert(*this);
  }

  ApplicationConnector_Duplicate_Params();
  ~ApplicationConnector_Duplicate_Params();
  
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


  bool Equals(const ApplicationConnector_Duplicate_Params& other) const;

  mojo::InterfaceRequest<ApplicationConnector> application_connector_request;
};



}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_CONNECTOR_MOJOM_COMMON_H_
