// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_interfaces.mojom-common.h"
namespace sample {

// --- Interface Forward Declarations ---

using ProviderPtr = mojo::InterfacePtr<Provider>;

using IntegerAccessorPtr = mojo::InterfacePtr<IntegerAccessor>;

using SampleInterfacePtr = mojo::InterfacePtr<SampleInterface>;


// --- Interface Proxies ---


class ProviderProxy
    : public Provider,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void EchoString(
      const mojo::String& a, const EchoStringCallback& callback
  ) override;
  void EchoStrings(
      const mojo::String& a, const mojo::String& b, const EchoStringsCallback& callback
  ) override;
  void EchoMessagePipeHandle(
      mojo::ScopedMessagePipeHandle a, const EchoMessagePipeHandleCallback& callback
  ) override;
  void EchoEnum(
      Enum a, const EchoEnumCallback& callback
  ) override;
  void EchoInt(
      int32_t a, const EchoIntCallback& callback
  ) override;
};


class IntegerAccessorProxy
    : public IntegerAccessor,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit IntegerAccessorProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInteger(
      const GetIntegerCallback& callback
  ) override;
  void SetInteger(
      int64_t data, Enum type
  ) override;
};


class SampleInterfaceProxy
    : public SampleInterface,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit SampleInterfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SampleMethod1(
      int32_t in1, const mojo::String& in2, const SampleMethod1Callback& callback
  ) override;
  void SampleMethod0(
      
  ) override;
  void SampleMethod2(
      
  ) override;
};


// --- Interface Stubs ---

class ProviderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ProviderStub();
  ~ProviderStub() override;
  void set_sink(Provider* sink) { sink_ = sink; }
  Provider* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Provider* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class IntegerAccessorStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  IntegerAccessorStub();
  ~IntegerAccessorStub() override;
  void set_sink(IntegerAccessor* sink) { sink_ = sink; }
  IntegerAccessor* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  IntegerAccessor* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class SampleInterfaceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  SampleInterfaceStub();
  ~SampleInterfaceStub() override;
  void set_sink(SampleInterface* sink) { sink_ = sink; }
  SampleInterface* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  SampleInterface* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_H_
