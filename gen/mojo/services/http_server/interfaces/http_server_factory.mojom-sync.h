// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_FACTORY_MOJOM_SYNC_H_
#define MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_FACTORY_MOJOM_SYNC_H_

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
#include "mojo/services/http_server/interfaces/http_server_factory.mojom-internal.h"
#include "mojo/services/http_server/interfaces/http_server_factory.mojom-common.h"
#include "mojo/services/http_server/interfaces/http_server.mojom.h"
#include "mojo/services/network/interfaces/net_address.mojom.h"


namespace http_server {

// --- Synchronous interface declaration ---

class HttpServerFactory_SynchronousProxy;
class HttpServerFactory_Synchronous
  : public internal::HttpServerFactory_Base {
 public:
  virtual ~HttpServerFactory_Synchronous() override {}
  
  using Proxy_ = HttpServerFactory_SynchronousProxy;
  virtual bool CreateHttpServer(
      mojo::InterfaceRequest<http_server::HttpServer> in_server_request, mojo::NetAddressPtr in_local_address)const= 0;
};

class HttpServerFactory_SynchronousProxy
    : public HttpServerFactory_Synchronous {
 public:
  explicit HttpServerFactory_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool CreateHttpServer(mojo::InterfaceRequest<http_server::HttpServer> in_server_request, mojo::NetAddressPtr in_local_address) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace http_server

#endif  // MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_SERVER_FACTORY_MOJOM_SYNC_H_
