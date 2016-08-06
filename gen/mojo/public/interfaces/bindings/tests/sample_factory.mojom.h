// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_factory.mojom-common.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom.h"
namespace sample {

// --- Interface Forward Declarations ---

using NamedObjectPtr = mojo::InterfacePtr<NamedObject>;

using FactoryPtr = mojo::InterfacePtr<Factory>;


// --- Interface Proxies ---


class NamedObjectProxy
    : public NamedObject,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit NamedObjectProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetName(
      const mojo::String& name
  ) override;
  void GetName(
      const GetNameCallback& callback
  ) override;
};


class FactoryProxy
    : public Factory,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit FactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void DoStuff(
      RequestPtr request, mojo::ScopedMessagePipeHandle pipe, const DoStuffCallback& callback
  ) override;
  void DoStuff2(
      mojo::ScopedDataPipeConsumerHandle pipe, const DoStuff2Callback& callback
  ) override;
  void CreateNamedObject(
      mojo::InterfaceRequest<NamedObject> obj
  ) override;
  void RequestImportedInterface(
      mojo::InterfaceRequest<imported::ImportedInterface> obj, const RequestImportedInterfaceCallback& callback
  ) override;
  void TakeImportedInterface(
      mojo::InterfaceHandle<imported::ImportedInterface> obj, const TakeImportedInterfaceCallback& callback
  ) override;
};


// --- Interface Stubs ---

class NamedObjectStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  NamedObjectStub();
  ~NamedObjectStub() override;
  void set_sink(NamedObject* sink) { sink_ = sink; }
  NamedObject* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  NamedObject* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class FactoryStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  FactoryStub();
  ~FactoryStub() override;
  void set_sink(Factory* sink) { sink_ = sink; }
  Factory* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Factory* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_H_