// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_SERVICE_REGISTRY_INTERFACES_SERVICE_REGISTRY_MOJOM_COMMON_H_
#define MOJO_SERVICES_SERVICE_REGISTRY_INTERFACES_SERVICE_REGISTRY_MOJOM_COMMON_H_

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
#include "mojo/services/service_registry/interfaces/service_registry.mojom-internal.h"
#include "mojo/public/interfaces/application/service_provider.mojom-common.h"
namespace mojo {

// --- Interface Forward Declarations ---
class ServiceRegistry;
class ServiceRegistryRequestValidator;
class ServiceRegistry_Synchronous;

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---

// --- Constants ---

// --- Interface declarations ---
namespace internal {
class ServiceRegistry_Base {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;

  using RequestValidator_ = ServiceRegistryRequestValidator;
  using ResponseValidator_ = mojo::internal::PassThroughValidator;
  using Synchronous_ = ServiceRegistry_Synchronous;
  enum class MessageOrdinals : uint32_t {
    AddServices = 0,
  };


  virtual ~ServiceRegistry_Base() {}
};

}  // namespace internal

// Async interface declaration

class ServiceRegistryProxy;
class ServiceRegistryStub;
class ServiceRegistry_Synchronous;

class ServiceRegistryRequestValidator;

class ServiceRegistry : public internal::ServiceRegistry_Base {
 public:
  virtual ~ServiceRegistry() override {}

  using Proxy_ = ServiceRegistryProxy;
  using Stub_ = ServiceRegistryStub;
  virtual void AddServices(mojo::Array<mojo::String> interface_names, mojo::InterfaceHandle<mojo::ServiceProvider> service_provider) = 0;
};

}  // namespace mojo

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo
namespace mojo {

// --- Interface Request Validators ---
class ServiceRegistryRequestValidator
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
      

class ServiceRegistry_AddServices_Params;

using ServiceRegistry_AddServices_ParamsPtr = mojo::StructPtr<ServiceRegistry_AddServices_Params>;


size_t GetSerializedSize_(const ServiceRegistry_AddServices_Params& input);
mojo::internal::ValidationError Serialize_(
    ServiceRegistry_AddServices_Params* input,
    mojo::internal::Buffer* buffer,
    internal::ServiceRegistry_AddServices_Params_Data** output);
void Deserialize_(internal::ServiceRegistry_AddServices_Params_Data* input,
                  ServiceRegistry_AddServices_Params* output);

class ServiceRegistry_AddServices_Params {
 public:
  using Data_ = internal::ServiceRegistry_AddServices_Params_Data;

  static ServiceRegistry_AddServices_ParamsPtr New();

  template <typename U>
  static ServiceRegistry_AddServices_ParamsPtr From(const U& u) {
    return mojo::TypeConverter<ServiceRegistry_AddServices_ParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceRegistry_AddServices_Params>::Convert(*this);
  }

  ServiceRegistry_AddServices_Params();
  ~ServiceRegistry_AddServices_Params();
  
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


  bool Equals(const ServiceRegistry_AddServices_Params& other) const;

  mojo::Array<mojo::String> interface_names;
  mojo::InterfaceHandle<mojo::ServiceProvider> service_provider;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_SERVICE_REGISTRY_INTERFACES_SERVICE_REGISTRY_MOJOM_COMMON_H_
