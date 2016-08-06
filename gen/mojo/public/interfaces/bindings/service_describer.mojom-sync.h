// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_SERVICE_DESCRIBER_MOJOM_SYNC_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_SERVICE_DESCRIBER_MOJOM_SYNC_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/lib/synchronous_connector.h"
#include "mojo/public/interfaces/bindings/service_describer.mojom-internal.h"
#include "mojo/public/interfaces/bindings/service_describer.mojom-common.h"
#include "mojo/public/interfaces/bindings/mojom_types.mojom.h"


namespace mojo {
namespace bindings {
namespace types {

// --- Synchronous interface declaration ---

class ServiceDescriber_SynchronousProxy;
class ServiceDescriber_Synchronous
  : public internal::ServiceDescriber_Base {
 public:
  virtual ~ServiceDescriber_Synchronous() override {}
  
  using Proxy_ = ServiceDescriber_SynchronousProxy;
  virtual bool DescribeService(
      const mojo::String& in_interface_name, mojo::InterfaceRequest<ServiceDescription> in_description_request)const= 0;
};

class ServiceDescriber_SynchronousProxy
    : public ServiceDescriber_Synchronous {
 public:
  explicit ServiceDescriber_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool DescribeService(const mojo::String& in_interface_name, mojo::InterfaceRequest<ServiceDescription> in_description_request) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class ServiceDescription_SynchronousProxy;
class ServiceDescription_Synchronous
  : public internal::ServiceDescription_Base {
 public:
  virtual ~ServiceDescription_Synchronous() override {}
  
  using Proxy_ = ServiceDescription_SynchronousProxy;
  virtual bool GetTopLevelInterface(
      mojo::bindings::types::MojomInterfacePtr* out_mojomInterface)= 0;
  virtual bool GetTypeDefinition(
      const mojo::String& in_type_key, mojo::bindings::types::UserDefinedTypePtr* out_type)= 0;
  virtual bool GetAllTypeDefinitions(
      mojo::Map<mojo::String, mojo::bindings::types::UserDefinedTypePtr>* out_definitions)= 0;
};

class ServiceDescription_SynchronousProxy
    : public ServiceDescription_Synchronous {
 public:
  explicit ServiceDescription_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetTopLevelInterface(mojo::bindings::types::MojomInterfacePtr* out_mojomInterface) override;
  bool GetTypeDefinition(const mojo::String& in_type_key, mojo::bindings::types::UserDefinedTypePtr* out_type) override;
  bool GetAllTypeDefinitions(mojo::Map<mojo::String, mojo::bindings::types::UserDefinedTypePtr>* out_definitions) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace types
}  // namespace bindings
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_SERVICE_DESCRIBER_MOJOM_SYNC_H_