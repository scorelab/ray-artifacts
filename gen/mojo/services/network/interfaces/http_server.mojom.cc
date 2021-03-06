// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/network/interfaces/http_server.mojom.h"

#include <math.h>
#include <ostream>

#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/message_validation.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/logging.h"
namespace mojo {

// --- Interface definitions ---

HttpServerDelegateProxy::HttpServerDelegateProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void HttpServerDelegateProxy::OnConnected(
    mojo::InterfaceHandle<mojo::HttpConnection> in_connection, mojo::InterfaceRequest<mojo::HttpConnectionDelegate> in_delegate) {
  size_t size = sizeof(internal::HttpServerDelegate_OnConnected_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::HttpServerDelegate_Base::MessageOrdinals::OnConnected), size);

  internal::HttpServerDelegate_OnConnected_Params_Data* params =
      internal::HttpServerDelegate_OnConnected_Params_Data::New(builder.buffer());
  mojo::internal::InterfaceHandleToData(in_connection.Pass(),
                                        &params->connection);
  if (!params->connection.handle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid connection in HttpServerDelegate.OnConnected request");
  }
  params->delegate = in_delegate.PassMessagePipe().release();
  if (!params->delegate.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid delegate in HttpServerDelegate.OnConnected request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

HttpServerDelegateStub::HttpServerDelegateStub()
    : sink_(nullptr),
      control_message_handler_(HttpServerDelegate::Version_) {
}

HttpServerDelegateStub::~HttpServerDelegateStub() {}

bool HttpServerDelegateStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::HttpServerDelegate_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HttpServerDelegate_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HttpServerDelegate_Base::MessageOrdinals::OnConnected: {
      internal::HttpServerDelegate_OnConnected_Params_Data* params =
          reinterpret_cast<internal::HttpServerDelegate_OnConnected_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      mojo::InterfaceHandle<mojo::HttpConnection> p_connection {};
      mojo::InterfaceRequest<mojo::HttpConnectionDelegate> p_delegate {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToHandle(&params->connection, &p_connection);
        p_delegate.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->delegate)));
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->OnConnected(p_connection.Pass(), p_delegate.Pass());
      return true;
    }
  }
  return false;
}

bool HttpServerDelegateStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::HttpServerDelegate_Base::MessageOrdinals method_ordinal =
      static_cast<internal::HttpServerDelegate_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::HttpServerDelegate_Base::MessageOrdinals::OnConnected: {
      break;
    }
  }
  return false;
}

}  // namespace mojo
