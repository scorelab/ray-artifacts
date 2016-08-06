// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_UDP_SOCKET_MOJOM_SYNC_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_UDP_SOCKET_MOJOM_SYNC_H_

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
#include "mojo/services/network/interfaces/udp_socket.mojom-internal.h"
#include "mojo/services/network/interfaces/udp_socket.mojom-common.h"
#include "mojo/public/interfaces/network/network_error.mojom.h"
#include "mojo/services/network/interfaces/net_address.mojom.h"


namespace mojo {

// --- Synchronous interface declaration ---

class UDPSocket_SynchronousProxy;
class UDPSocket_Synchronous
  : public internal::UDPSocket_Base {
 public:
  virtual ~UDPSocket_Synchronous() override {}
  
  using Proxy_ = UDPSocket_SynchronousProxy;
  virtual bool AllowAddressReuse(
      mojo::NetworkErrorPtr* out_result)= 0;
  virtual bool Bind(
      mojo::NetAddressPtr in_addr, mojo::NetworkErrorPtr* out_result, mojo::NetAddressPtr* out_bound_addr, mojo::InterfaceRequest<UDPSocketReceiver>* out_receiver)= 0;
  virtual bool Connect(
      mojo::NetAddressPtr in_remote_addr, mojo::NetworkErrorPtr* out_result, mojo::NetAddressPtr* out_local_addr, mojo::InterfaceRequest<UDPSocketReceiver>* out_receiver)= 0;
  virtual bool SetSendBufferSize(
      uint32_t in_size, mojo::NetworkErrorPtr* out_result)= 0;
  virtual bool SetReceiveBufferSize(
      uint32_t in_size, mojo::NetworkErrorPtr* out_result)= 0;
  virtual bool NegotiateMaxPendingSendRequests(
      uint32_t in_requested_size, uint32_t* out_actual_size)= 0;
  virtual bool ReceiveMore(
      uint32_t in_datagram_number)const= 0;
  virtual bool SendTo(
      mojo::NetAddressPtr in_dest_addr, mojo::Array<uint8_t> in_data, mojo::NetworkErrorPtr* out_result)= 0;
};

class UDPSocket_SynchronousProxy
    : public UDPSocket_Synchronous {
 public:
  explicit UDPSocket_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool AllowAddressReuse(mojo::NetworkErrorPtr* out_result) override;
  bool Bind(mojo::NetAddressPtr in_addr, mojo::NetworkErrorPtr* out_result, mojo::NetAddressPtr* out_bound_addr, mojo::InterfaceRequest<UDPSocketReceiver>* out_receiver) override;
  bool Connect(mojo::NetAddressPtr in_remote_addr, mojo::NetworkErrorPtr* out_result, mojo::NetAddressPtr* out_local_addr, mojo::InterfaceRequest<UDPSocketReceiver>* out_receiver) override;
  bool SetSendBufferSize(uint32_t in_size, mojo::NetworkErrorPtr* out_result) override;
  bool SetReceiveBufferSize(uint32_t in_size, mojo::NetworkErrorPtr* out_result) override;
  bool NegotiateMaxPendingSendRequests(uint32_t in_requested_size, uint32_t* out_actual_size) override;
  bool ReceiveMore(uint32_t in_datagram_number) const  override;
  bool SendTo(mojo::NetAddressPtr in_dest_addr, mojo::Array<uint8_t> in_data, mojo::NetworkErrorPtr* out_result) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class UDPSocketReceiver_SynchronousProxy;
class UDPSocketReceiver_Synchronous
  : public internal::UDPSocketReceiver_Base {
 public:
  virtual ~UDPSocketReceiver_Synchronous() override {}
  
  using Proxy_ = UDPSocketReceiver_SynchronousProxy;
  virtual bool OnReceived(
      mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_src_addr, mojo::Array<uint8_t> in_data)const= 0;
};

class UDPSocketReceiver_SynchronousProxy
    : public UDPSocketReceiver_Synchronous {
 public:
  explicit UDPSocketReceiver_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool OnReceived(mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_src_addr, mojo::Array<uint8_t> in_data) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_UDP_SOCKET_MOJOM_SYNC_H_
