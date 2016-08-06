// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_TERMINAL_INTERFACES_TERMINAL_MOJOM_H_
#define MOJO_SERVICES_TERMINAL_INTERFACES_TERMINAL_MOJOM_H_

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
#include "mojo/services/terminal/interfaces/terminal.mojom-common.h"
#include "mojo/services/files/interfaces/file.mojom.h"
#include "mojo/services/files/interfaces/types.mojom.h"
#include "mojo/services/terminal/interfaces/terminal_client.mojom.h"
namespace mojo {
namespace terminal {

// --- Interface Forward Declarations ---

using TerminalPtr = mojo::InterfacePtr<Terminal>;


// --- Interface Proxies ---


class TerminalProxy
    : public Terminal,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit TerminalProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(
      mojo::InterfaceRequest<mojo::files::File> terminal_file, bool force, const ConnectCallback& callback
  ) override;
  void ConnectToClient(
      mojo::InterfaceHandle<mojo::terminal::TerminalClient> terminal_client, bool force, const ConnectToClientCallback& callback
  ) override;
  void GetSize(
      const GetSizeCallback& callback
  ) override;
  void SetSize(
      uint32_t rows, uint32_t columns, bool reset, const SetSizeCallback& callback
  ) override;
};


// --- Interface Stubs ---

class TerminalStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  TerminalStub();
  ~TerminalStub() override;
  void set_sink(Terminal* sink) { sink_ = sink; }
  Terminal* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Terminal* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace terminal
}  // namespace mojo

#endif  // MOJO_SERVICES_TERMINAL_INTERFACES_TERMINAL_MOJOM_H_