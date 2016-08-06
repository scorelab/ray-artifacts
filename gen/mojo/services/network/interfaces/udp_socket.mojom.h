// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_UDP_SOCKET_MOJOM_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_UDP_SOCKET_MOJOM_H_

#include <iosfwd>
#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/services/network/interfaces/udp_socket.mojom-common.h"
#include "mojo/public/interfaces/network/network_error.mojom.h"
#include "mojo/services/network/interfaces/net_address.mojom.h"
namespace mojo {

// --- Interface Forward Declarations ---

using UDPSocketPtr = mojo::InterfacePtr<UDPSocket>;

using UDPSocketReceiverPtr = mojo::InterfacePtr<UDPSocketReceiver>;


// --- Interface Proxies ---


class UDPSocketProxy
    : public UDPSocket,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit UDPSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void AllowAddressReuse(
      const AllowAddressReuseCallback& callback
  ) override;
  void Bind(
      mojo::NetAddressPtr addr, const BindCallback& callback
  ) override;
  void Connect(
      mojo::NetAddressPtr remote_addr, const ConnectCallback& callback
  ) override;
  void SetSendBufferSize(
      uint32_t size, const SetSendBufferSizeCallback& callback
  ) override;
  void SetReceiveBufferSize(
      uint32_t size, const SetReceiveBufferSizeCallback& callback
  ) override;
  void NegotiateMaxPendingSendRequests(
      uint32_t requested_size, const NegotiateMaxPendingSendRequestsCallback& callback
  ) override;
  void ReceiveMore(
      uint32_t datagram_number
  ) override;
  void SendTo(
      mojo::NetAddressPtr dest_addr, mojo::Array<uint8_t> data, const SendToCallback& callback
  ) override;
};


class UDPSocketReceiverProxy
    : public UDPSocketReceiver,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit UDPSocketReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReceived(
      mojo::NetworkErrorPtr result, mojo::NetAddressPtr src_addr, mojo::Array<uint8_t> data
  ) override;
};


// --- Interface Stubs ---

class UDPSocketStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  UDPSocketStub();
  ~UDPSocketStub() override;
  void set_sink(UDPSocket* sink) { sink_ = sink; }
  UDPSocket* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UDPSocket* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class UDPSocketReceiverStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  UDPSocketReceiverStub();
  ~UDPSocketReceiverStub() override;
  void set_sink(UDPSocketReceiver* sink) { sink_ = sink; }
  UDPSocketReceiver* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UDPSocketReceiver* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_UDP_SOCKET_MOJOM_H_
