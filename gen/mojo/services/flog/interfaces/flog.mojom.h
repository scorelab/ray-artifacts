// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_FLOG_INTERFACES_FLOG_MOJOM_H_
#define MOJO_SERVICES_FLOG_INTERFACES_FLOG_MOJOM_H_

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
#include "mojo/services/flog/interfaces/flog.mojom-common.h"
namespace mojo {
namespace flog {

// --- Interface Forward Declarations ---

using FlogServicePtr = mojo::InterfacePtr<FlogService>;

using FlogLoggerPtr = mojo::InterfacePtr<FlogLogger>;

using FlogReaderPtr = mojo::InterfacePtr<FlogReader>;


// --- Interface Proxies ---


class FlogServiceProxy
    : public FlogService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit FlogServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateLogger(
      mojo::InterfaceRequest<FlogLogger> logger, const mojo::String& label
  ) override;
  void GetLogDescriptions(
      const GetLogDescriptionsCallback& callback
  ) override;
  void CreateReader(
      mojo::InterfaceRequest<FlogReader> reader, uint32_t log_id
  ) override;
};


class FlogLoggerProxy
    : public FlogLogger,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit FlogLoggerProxy(mojo::MessageReceiverWithResponder* receiver);
  void LogChannelCreation(
      int64_t time_us, uint32_t channel_id, const mojo::String& type_name
  ) override;
  void LogChannelMessage(
      int64_t time_us, uint32_t channel_id, mojo::Array<uint8_t> data
  ) override;
  void LogChannelDeletion(
      int64_t time_us, uint32_t channel_id
  ) override;
};


class FlogReaderProxy
    : public FlogReader,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit FlogReaderProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetEntries(
      uint32_t start_index, uint32_t max_count, const GetEntriesCallback& callback
  ) override;
};


// --- Interface Stubs ---

class FlogServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  FlogServiceStub();
  ~FlogServiceStub() override;
  void set_sink(FlogService* sink) { sink_ = sink; }
  FlogService* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  FlogService* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class FlogLoggerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  FlogLoggerStub();
  ~FlogLoggerStub() override;
  void set_sink(FlogLogger* sink) { sink_ = sink; }
  FlogLogger* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  FlogLogger* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class FlogReaderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  FlogReaderStub();
  ~FlogReaderStub() override;
  void set_sink(FlogReader* sink) { sink_ = sink; }
  FlogReader* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  FlogReader* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace flog
}  // namespace mojo

#endif  // MOJO_SERVICES_FLOG_INTERFACES_FLOG_MOJOM_H_
