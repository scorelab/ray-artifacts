// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_APPLICATION_SHELL_MOJOM_SYNC_H_
#define MOJO_PUBLIC_INTERFACES_APPLICATION_SHELL_MOJOM_SYNC_H_

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
#include "mojo/public/interfaces/application/shell.mojom-internal.h"
#include "mojo/public/interfaces/application/shell.mojom-common.h"
#include "mojo/public/interfaces/application/application_connector.mojom.h"
#include "mojo/public/interfaces/application/service_provider.mojom.h"


namespace mojo {

// --- Synchronous interface declaration ---

class Shell_SynchronousProxy;
class Shell_Synchronous
  : public internal::Shell_Base {
 public:
  virtual ~Shell_Synchronous() override {}
  
  using Proxy_ = Shell_SynchronousProxy;
  virtual bool ConnectToApplication(
      const mojo::String& in_application_url, mojo::InterfaceRequest<mojo::ServiceProvider> in_services)const= 0;
  virtual bool CreateApplicationConnector(
      mojo::InterfaceRequest<mojo::ApplicationConnector> in_application_connector_request)const= 0;
};

class Shell_SynchronousProxy
    : public Shell_Synchronous {
 public:
  explicit Shell_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool ConnectToApplication(const mojo::String& in_application_url, mojo::InterfaceRequest<mojo::ServiceProvider> in_services) const  override;
  bool CreateApplicationConnector(mojo::InterfaceRequest<mojo::ApplicationConnector> in_application_connector_request) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_APPLICATION_SHELL_MOJOM_SYNC_H_