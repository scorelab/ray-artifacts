// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_TCP_BOUND_SOCKET_MOJOM_SYNC_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_TCP_BOUND_SOCKET_MOJOM_SYNC_H_

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
#include "mojo/services/network/interfaces/tcp_bound_socket.mojom-internal.h"
#include "mojo/services/network/interfaces/tcp_bound_socket.mojom-common.h"
#include "mojo/public/interfaces/network/network_error.mojom.h"
#include "mojo/services/network/interfaces/net_address.mojom.h"
#include "mojo/services/network/interfaces/tcp_connected_socket.mojom.h"
#include "mojo/services/network/interfaces/tcp_server_socket.mojom.h"


namespace mojo {

// --- Synchronous interface declaration ---

class TCPBoundSocket_SynchronousProxy;
class TCPBoundSocket_Synchronous
  : public internal::TCPBoundSocket_Base {
 public:
  virtual ~TCPBoundSocket_Synchronous() override {}
  
  using Proxy_ = TCPBoundSocket_SynchronousProxy;
  virtual bool StartListening(
      mojo::InterfaceRequest<mojo::TCPServerSocket> in_server, mojo::NetworkErrorPtr* out_result)= 0;
  virtual bool Connect(
      mojo::NetAddressPtr in_remote_address, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, mojo::NetworkErrorPtr* out_result)= 0;
};

class TCPBoundSocket_SynchronousProxy
    : public TCPBoundSocket_Synchronous {
 public:
  explicit TCPBoundSocket_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool StartListening(mojo::InterfaceRequest<mojo::TCPServerSocket> in_server, mojo::NetworkErrorPtr* out_result) override;
  bool Connect(mojo::NetAddressPtr in_remote_address, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, mojo::NetworkErrorPtr* out_result) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_TCP_BOUND_SOCKET_MOJOM_SYNC_H_
