// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_HOST_RESOLVER_MOJOM_SYNC_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_HOST_RESOLVER_MOJOM_SYNC_H_

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
#include "mojo/services/network/interfaces/host_resolver.mojom-internal.h"
#include "mojo/services/network/interfaces/host_resolver.mojom-common.h"
#include "mojo/public/interfaces/network/network_error.mojom.h"
#include "mojo/services/network/interfaces/net_address.mojom.h"


namespace mojo {

// --- Synchronous interface declaration ---

class HostResolver_SynchronousProxy;
class HostResolver_Synchronous
  : public internal::HostResolver_Base {
 public:
  virtual ~HostResolver_Synchronous() override {}
  
  using Proxy_ = HostResolver_SynchronousProxy;
  virtual bool GetHostAddresses(
      const mojo::String& in_host, mojo::NetAddressFamily in_family, mojo::NetworkErrorPtr* out_result, mojo::Array<mojo::NetAddressPtr>* out_addresses)= 0;
};

class HostResolver_SynchronousProxy
    : public HostResolver_Synchronous {
 public:
  explicit HostResolver_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetHostAddresses(const mojo::String& in_host, mojo::NetAddressFamily in_family, mojo::NetworkErrorPtr* out_result, mojo::Array<mojo::NetAddressPtr>* out_addresses) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_HOST_RESOLVER_MOJOM_SYNC_H_
