// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_APPLICATION_SERVICE_PROVIDER_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_APPLICATION_SERVICE_PROVIDER_MOJOM_COMMON_H_

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
#include "mojo/public/interfaces/application/service_provider.mojom-internal.h"
namespace mojo {

// --- Interface Forward Declarations ---
class ServiceProvider;
class ServiceProviderRequestValidator;
class ServiceProvider_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class ServiceProvider_Base {
 public:
  static const uint32_t Version_ = 0;

  using RequestValidator_ = ServiceProviderRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = ServiceProvider_Synchronous;
  enum class MessageOrdinals : uint32_t {
    ConnectToService = 0,
  };


  virtual ~ServiceProvider_Base() {}
};

}  // namespace internal

// Async interface declaration

class ServiceProviderProxy;
class ServiceProviderStub;
class ServiceProvider_Synchronous;

class ServiceProviderRequestValidator;

class ServiceProvider : public internal::ServiceProvider_Base {
 public:
  virtual ~ServiceProvider() override {}

  using Proxy_ = ServiceProviderProxy;
  using Stub_ = ServiceProviderStub;
  virtual void ConnectToService(const mojo::String& interface_name, mojo::ScopedMessagePipeHandle pipe) = 0;
};

}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---
class ServiceProviderRequestValidator
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
      

class ServiceProvider_ConnectToService_Params;

using ServiceProvider_ConnectToService_ParamsPtr = mojo::StructPtr<ServiceProvider_ConnectToService_Params>;


size_t GetSerializedSize_(const ServiceProvider_ConnectToService_Params& input);
mojo::internal::ValidationError Serialize_(
    ServiceProvider_ConnectToService_Params* input,
    mojo::internal::Buffer* buffer,
    internal::ServiceProvider_ConnectToService_Params_Data** output);
void Deserialize_(internal::ServiceProvider_ConnectToService_Params_Data* input,
                  ServiceProvider_ConnectToService_Params* output);

class ServiceProvider_ConnectToService_Params {
 public:
  using Data_ = internal::ServiceProvider_ConnectToService_Params_Data;

  static ServiceProvider_ConnectToService_ParamsPtr New();

  template <typename U>
  static ServiceProvider_ConnectToService_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<ServiceProvider_ConnectToService_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceProvider_ConnectToService_Params>::Convert(*this);
  }

  ServiceProvider_ConnectToService_Params();
  ~ServiceProvider_ConnectToService_Params();
  
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


  bool Equals(const ServiceProvider_ConnectToService_Params& other) const;

  mojo::String interface_name;
  mojo::ScopedMessagePipeHandle pipe;
};



}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_APPLICATION_SERVICE_PROVIDER_MOJOM_COMMON_H_
