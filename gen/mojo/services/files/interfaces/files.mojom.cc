// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/services/files/interfaces/files.mojom.h"

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
namespace files {

// --- Interface definitions ---
class Files_OpenFileSystem_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Files_OpenFileSystem_ForwardToCallback(
      const Files::OpenFileSystemCallback& callback)
      : callback_(callback) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Files::OpenFileSystemCallback callback_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Files_OpenFileSystem_ForwardToCallback);
};
bool Files_OpenFileSystem_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Files_OpenFileSystem_ResponseParams_Data* params =
      reinterpret_cast<internal::Files_OpenFileSystem_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  mojo::files::Error p_error {};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_error = static_cast<mojo::files::Error>(params->error);
  } while (false);
  callback_.Run(p_error);
  return true;
}

FilesProxy::FilesProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void FilesProxy::OpenFileSystem(
    const mojo::String& in_file_system, mojo::InterfaceRequest<mojo::files::Directory> in_directory, const OpenFileSystemCallback& callback) {
  size_t size = sizeof(internal::Files_OpenFileSystem_Params_Data);
  size += GetSerializedSize_(in_file_system);
  mojo::RequestMessageBuilder builder(
      static_cast<uint32_t>(internal::Files_Base::MessageOrdinals::OpenFileSystem), size);

  internal::Files_OpenFileSystem_Params_Data* params =
      internal::Files_OpenFileSystem_Params_Data::New(builder.buffer());
  SerializeString_(in_file_system, builder.buffer(), &params->file_system.ptr);
  params->directory = in_directory.PassMessagePipe().release();
  if (!params->directory.is_valid()) {
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(mojo::internal::ValidationError::UNEXPECTED_INVALID_HANDLE, "invalid directory in Files.OpenFileSystem request");
  }
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Files_OpenFileSystem_ForwardToCallback(callback);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
// This class implements a method's response callback: it serializes the
// response args into a mojo message and passes it to the MessageReceiver it
// was created with.
class Files_OpenFileSystem_ProxyToResponder
    : public Files::OpenFileSystemCallback::Runnable {
 public:
  ~Files_OpenFileSystem_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Files::OpenFileSystem(p_file_system, p_directory.Pass(), callback) "
        "was never run.";
  }

  Files_OpenFileSystem_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::files::Error in_error) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Files_OpenFileSystem_ProxyToResponder);
};

void Files_OpenFileSystem_ProxyToResponder::Run(
    mojo::files::Error in_error) const {
  size_t size = sizeof(internal::Files_OpenFileSystem_ResponseParams_Data);
  mojo::ResponseMessageBuilder builder(
      static_cast<uint32_t>(internal::Files_Base::MessageOrdinals::OpenFileSystem), size, request_id_);
  internal::Files_OpenFileSystem_ResponseParams_Data* params =
      internal::Files_OpenFileSystem_ResponseParams_Data::New(builder.buffer());
  params->error =
    static_cast<int32_t>(in_error);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

FilesStub::FilesStub()
    : sink_(nullptr),
      control_message_handler_(Files::Version_) {
}

FilesStub::~FilesStub() {}

bool FilesStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  internal::Files_Base::MessageOrdinals method_ordinal =
      static_cast<internal::Files_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::Files_Base::MessageOrdinals::OpenFileSystem: {
      break;
    }
  }
  return false;
}

bool FilesStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  internal::Files_Base::MessageOrdinals method_ordinal =
      static_cast<internal::Files_Base::MessageOrdinals>(message->header()->name);
  switch (method_ordinal) {
    case internal::Files_Base::MessageOrdinals::OpenFileSystem: {
      internal::Files_OpenFileSystem_Params_Data* params =
          reinterpret_cast<internal::Files_OpenFileSystem_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      Files::OpenFileSystemCallback::Runnable* runnable =
          new Files_OpenFileSystem_ProxyToResponder(
              message->request_id(), responder);
      Files::OpenFileSystemCallback callback(runnable);
      
      mojo::String p_file_system {};
      mojo::InterfaceRequest<mojo::files::Directory> p_directory {};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        Deserialize_(params->file_system.ptr, &p_file_system);
        p_directory.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->directory)));
      } while (false);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      sink_->OpenFileSystem(p_file_system, p_directory.Pass(), callback);
      return true;
    }
  }
  return false;
}

}  // namespace files
}  // namespace mojo
