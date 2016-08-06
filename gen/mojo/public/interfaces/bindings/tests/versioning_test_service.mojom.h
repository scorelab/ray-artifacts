// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VERSIONING_TEST_SERVICE_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VERSIONING_TEST_SERVICE_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/versioning_test_service.mojom-common.h"
namespace mojo {
namespace test {
namespace versioning {

// --- Interface Forward Declarations ---

using HumanResourceDatabasePtr = mojo::InterfacePtr<HumanResourceDatabase>;


// --- Interface Proxies ---


class HumanResourceDatabaseProxy
    : public HumanResourceDatabase,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit HumanResourceDatabaseProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddEmployee(
      EmployeePtr employee, const AddEmployeeCallback& callback
  ) override;
  void QueryEmployee(
      uint64_t id, bool retrieve_finger_print, const QueryEmployeeCallback& callback
  ) override;
  void AttachFingerPrint(
      uint64_t id, mojo::Array<uint8_t> finger_print, const AttachFingerPrintCallback& callback
  ) override;
};


// --- Interface Stubs ---

class HumanResourceDatabaseStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  HumanResourceDatabaseStub();
  ~HumanResourceDatabaseStub() override;
  void set_sink(HumanResourceDatabase* sink) { sink_ = sink; }
  HumanResourceDatabase* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  HumanResourceDatabase* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace versioning
}  // namespace test
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_VERSIONING_TEST_SERVICE_MOJOM_H_