// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_CONNECTOR_MOJOM_SYNC_H_
#define MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_CONNECTOR_MOJOM_SYNC_H_

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
#include "mojo/public/interfaces/application/application_connector.mojom-internal.h"
#include "mojo/public/interfaces/application/application_connector.mojom-common.h"
#include "mojo/public/interfaces/application/service_provider.mojom.h"


namespace mojo {

// --- Synchronous interface declaration ---

class ApplicationConnector_SynchronousProxy;
class ApplicationConnector_Synchronous
  : public internal::ApplicationConnector_Base {
 public:
  virtual ~ApplicationConnector_Synchronous() override {}
  
  using Proxy_ = ApplicationConnector_SynchronousProxy;
  virtual bool ConnectToApplication(
      const mojo::String& in_application_url, mojo::InterfaceRequest<mojo::ServiceProvider> in_services)const= 0;
  virtual bool Duplicate(
      mojo::InterfaceRequest<ApplicationConnector> in_application_connector_request)const= 0;
};

class ApplicationConnector_SynchronousProxy
    : public ApplicationConnector_Synchronous {
 public:
  explicit ApplicationConnector_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool ConnectToApplication(const mojo::String& in_application_url, mojo::InterfaceRequest<mojo::ServiceProvider> in_services) const  override;
  bool Duplicate(mojo::InterfaceRequest<ApplicationConnector> in_application_connector_request) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_CONNECTOR_MOJOM_SYNC_H_
