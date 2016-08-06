// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/asset_bundle/interfaces/asset_bundle.mojom.h"

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
namespace asset_bundle {

// --- Interface definitions ---
class AssetBundle_GetAsStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AssetBundle_GetAsStream_ForwardToCallback(
      const AssetBundle::GetAsStreamCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AssetBundle::GetAsStreamCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(AssetBundle_GetAsStream_ForwardToCallback);
};
bool AssetBundle_GetAsStream_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::AssetBundle_GetAsStream_ResponseParams_Data* params =
      reinterpret_cast<internal::AssetBundle_GetAsStream_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  mojo::ScopedDataPipeConsumerHandle p_asset_data {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_asset_data.reset(mojo::internal::FetchAndReset(&params->asset_data));
  } while (false);
  callback_.Run(p_asset_data.Pass());
  return true;
}

AssetBundleProxy::AssetBundleProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void AssetBundleProxy::GetAsStream(
    const mojo::String& in_asset_name, const GetAsStreamCallback& callback) {
  size_t size = sizeof(internal::AssetBundle_GetAsStream_Params_Data);
  size += GetSerializedSize_(in_asset_name);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::AssetBundle_Base::MessageOrdinals::GetAsStream), size);

  internal::AssetBundle_GetAsStream_Params_Data* params =
      internal::AssetBundle_GetAsStream_Params_Data::New(builder.buffer());
  SerializeString_(in_asset_name, builder.buffer(), &params->asset_name.ptr);
  if (!params->asset_name.ptr) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_NULL_POINTER, "null asset_name in AssetBundle.GetAsStream request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new AssetBundle_GetAsStream_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class AssetBundle_GetAsStream_ProxyToResponder
    : public AssetBundle::GetAsStreamCallback::Runnable {
 public:
  ~AssetBundle_GetAsStream_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "AssetBundle::GetAsStream(p_asset_name, callback) "
        "was never run.";
  }

  AssetBundle_GetAsStream_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::ScopedDataPipeConsumerHandle in_asset_data) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(AssetBundle_GetAsStream_ProxyToResponder);
};

void AssetBundle_GetAsStream_ProxyToResponder::Run(
    mojo::ScopedDataPipeConsumerHandle in_asset_data) const {
  size_t size = sizeof(internal::AssetBundle_GetAsStream_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::AssetBundle_Base::MessageOrdinals::GetAsStream), size, request_id_);
  internal::AssetBundle_GetAsStream_ResponseParams_Data* params =
      internal::AssetBundle_GetAsStream_ResponseParams_Data::New(builder.buffer());
  params->asset_data = in_asset_data.release();
  if (!params->asset_data.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid asset_data in AssetBundle.GetAsStream response");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

AssetBundleStub::AssetBundleStub()
    : sink_(nullptr),
      control_message_handler_(AssetBundle::Version_) {
}

AssetBundleStub::~AssetBundleStub() {}

bool AssetBundleStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::AssetBundle_Base::MessageOrdinals method_ordinal =
      static_cast<internal::AssetBundle_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::AssetBundle_Base::MessageOrdinals::GetAsStream: {
      break;
    }
  }
  return false;
}

bool AssetBundleStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::AssetBundle_Base::MessageOrdinals method_ordinal =
      static_cast<internal::AssetBundle_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::AssetBundle_Base::MessageOrdinals::GetAsStream: {
      internal::AssetBundle_GetAsStream_Params_Data* params =
          reinterpret_cast<internal::AssetBundle_GetAsStream_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      AssetBundle::GetAsStreamCallback::Runnable* runnable =
          new AssetBundle_GetAsStream_ProxyToResponder(
              message->request_id(), responder);
      AssetBundle::GetAsStreamCallback callback(runnable);
      
      mojo::String p_asset_name {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        Deserialize_(params->asset_name.ptr, &p_asset_name);
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->GetAsStream(p_asset_name, callback);
      return true;
    }
  }
  return false;
}


AssetUnpackerProxy::AssetUnpackerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void AssetUnpackerProxy::UnpackZipStream(
    mojo::ScopedDataPipeConsumerHandle in_zipped_assets, mojo::InterfaceRequest<AssetBundle> in_asset_bundle) {
  size_t size = sizeof(internal::AssetUnpacker_UnpackZipStream_Params_Data);
  mojo::MessageBuilder builder(
    static_cast<uint32_t>(internal::AssetUnpacker_Base::MessageOrdinals::UnpackZipStream), size);

  internal::AssetUnpacker_UnpackZipStream_Params_Data* params =
      internal::AssetUnpacker_UnpackZipStream_Params_Data::New(builder.buffer());
  params->zipped_assets = in_zipped_assets.release();
  if (!params->zipped_assets.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid zipped_assets in AssetUnpacker.UnpackZipStream request");
  }
  params->asset_bundle = in_asset_bundle.PassMessagePipe().release();
  if (!params->asset_bundle.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid asset_bundle in AssetUnpacker.UnpackZipStream request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

AssetUnpackerStub::AssetUnpackerStub()
    : sink_(nullptr),
      control_message_handler_(AssetUnpacker::Version_) {
}

AssetUnpackerStub::~AssetUnpackerStub() {}

bool AssetUnpackerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::AssetUnpacker_Base::MessageOrdinals method_ordinal =
      static_cast<internal::AssetUnpacker_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::AssetUnpacker_Base::MessageOrdinals::UnpackZipStream: {
      internal::AssetUnpacker_UnpackZipStream_Params_Data* params =
          reinterpret_cast<internal::AssetUnpacker_UnpackZipStream_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      mojo::ScopedDataPipeConsumerHandle p_zipped_assets {};
      mojo::InterfaceRequest<AssetBundle> p_asset_bundle {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_zipped_assets.reset(mojo::internal::FetchAndReset(&params->zipped_assets));
        p_asset_bundle.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->asset_bundle)));
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->UnpackZipStream(p_zipped_assets.Pass(), p_asset_bundle.Pass());
      return true;
    }
  }
  return false;
}

bool AssetUnpackerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::AssetUnpacker_Base::MessageOrdinals method_ordinal =
      static_cast<internal::AssetUnpacker_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::AssetUnpacker_Base::MessageOrdinals::UnpackZipStream: {
      break;
    }
  }
  return false;
}

}  // namespace asset_bundle
}  // namespace mojo