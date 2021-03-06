// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_TCP_SERVER_SOCKET_MOJOM_SYNC_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_TCP_SERVER_SOCKET_MOJOM_SYNC_H_

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
#include "mojo/services/network/interfaces/tcp_server_socket.mojom-internal.h"
#include "mojo/services/network/interfaces/tcp_server_socket.mojom-common.h"
#include "mojo/public/interfaces/network/network_error.mojom.h"
#include "mojo/services/network/interfaces/net_address.mojom.h"
#include "mojo/services/network/interfaces/tcp_connected_socket.mojom.h"


namespace mojo {

// --- Synchronous interface declaration ---

class TCPServerSocket_SynchronousProxy;
class TCPServerSocket_Synchronous
  : public internal::TCPServerSocket_Base {
 public:
  virtual ~TCPServerSocket_Synchronous() override {}
  
  using Proxy_ = TCPServerSocket_SynchronousProxy;
  virtual bool Accept(
      mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, mojo::NetworkErrorPtr* out_result, mojo::NetAddressPtr* out_remote_address)= 0;
};

class TCPServerSocket_SynchronousProxy
    : public TCPServerSocket_Synchronous {
 public:
  explicit TCPServerSocket_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool Accept(mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, mojo::NetworkErrorPtr* out_result, mojo::NetAddressPtr* out_remote_address) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_TCP_SERVER_SOCKET_MOJOM_SYNC_H_
