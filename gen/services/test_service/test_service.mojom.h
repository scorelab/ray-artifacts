// NOTE: This file was generated by the Mojo bindings generator.
#ifndef SERVICES_TEST_SERVICE_TEST_SERVICE_MOJOM_H_
#define SERVICES_TEST_SERVICE_TEST_SERVICE_MOJOM_H_

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
#include "services/test_service/test_service.mojom-common.h"
namespace mojo {
namespace test {

// --- Interface Forward Declarations ---

using TestServicePtr = mojo::InterfacePtr<TestService>;

using TestTimeServicePtr = mojo::InterfacePtr<TestTimeService>;


// --- Interface Proxies ---


class TestServiceProxy
    : public TestService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit TestServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Ping(
      const PingCallback& callback
  ) override;
  void ConnectToAppAndGetTime(
      const mojo::String& app_url, const ConnectToAppAndGetTimeCallback& callback
  ) override;
  void StartTrackingRequests(
      const StartTrackingRequestsCallback& callback
  ) override;
};


class TestTimeServiceProxy
    : public TestTimeService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit TestTimeServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPartyTime(
      const GetPartyTimeCallback& callback
  ) override;
  void StartTrackingRequests(
      const StartTrackingRequestsCallback& callback
  ) override;
};


// --- Interface Stubs ---

class TestServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  TestServiceStub();
  ~TestServiceStub() override;
  void set_sink(TestService* sink) { sink_ = sink; }
  TestService* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  TestService* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class TestTimeServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  TestTimeServiceStub();
  ~TestTimeServiceStub() override;
  void set_sink(TestTimeService* sink) { sink_ = sink; }
  TestTimeService* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  TestTimeService* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace test
}  // namespace mojo

#endif  // SERVICES_TEST_SERVICE_TEST_SERVICE_MOJOM_H_
