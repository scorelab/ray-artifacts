// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/test_structs.mojom-common.h"
#include "mojo/public/interfaces/bindings/tests/rect.mojom.h"
namespace mojo {
namespace test {

// --- Interface Forward Declarations ---

using SomeInterfacePtr = mojo::InterfacePtr<SomeInterface>;


// --- Interface Proxies ---


class SomeInterfaceProxy
    : public SomeInterface,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit SomeInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SomeMethod(
      RectPairPtr pair, const SomeMethodCallback& callback
  ) override;
};


// --- Interface Stubs ---

class SomeInterfaceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  SomeInterfaceStub();
  ~SomeInterfaceStub() override;
  void set_sink(SomeInterface* sink) { sink_ = sink; }
  SomeInterface* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  SomeInterface* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_TEST_STRUCTS_MOJOM_H_