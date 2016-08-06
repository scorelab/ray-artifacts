// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_ANDROID_INTERFACES_ACTIVITY_MOJOM_H_
#define MOJO_SERVICES_ANDROID_INTERFACES_ACTIVITY_MOJOM_H_

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
#include "mojo/services/android/interfaces/activity.mojom-common.h"
namespace activity {

// --- Interface Forward Declarations ---

using ActivityPtr = mojo::InterfacePtr<Activity>;

using PathServicePtr = mojo::InterfacePtr<PathService>;

using UserFeedbackPtr = mojo::InterfacePtr<UserFeedback>;


// --- Interface Proxies ---


class ActivityProxy
    : public Activity,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ActivityProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetUserFeedback(
      mojo::InterfaceRequest<UserFeedback> user_feedback
  ) override;
  void StartActivity(
      IntentPtr intent
  ) override;
  void FinishCurrentActivity(
      
  ) override;
  void SetTaskDescription(
      TaskDescriptionPtr description
  ) override;
  void SetSystemUIVisibility(
      SystemUIVisibility visibility
  ) override;
  void SetRequestedOrientation(
      ScreenOrientation orientation
  ) override;
};


class PathServiceProxy
    : public PathService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PathServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetAppDataDir(
      const GetAppDataDirCallback& callback
  ) override;
  void GetFilesDir(
      const GetFilesDirCallback& callback
  ) override;
  void GetCacheDir(
      const GetCacheDirCallback& callback
  ) override;
};


class UserFeedbackProxy
    : public UserFeedback,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit UserFeedbackProxy(mojo::MessageReceiverWithResponder* receiver);
  void PerformHapticFeedback(
      HapticFeedbackType type
  ) override;
  void PerformAuralFeedback(
      AuralFeedbackType type
  ) override;
};


// --- Interface Stubs ---

class ActivityStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ActivityStub();
  ~ActivityStub() override;
  void set_sink(Activity* sink) { sink_ = sink; }
  Activity* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Activity* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class PathServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PathServiceStub();
  ~PathServiceStub() override;
  void set_sink(PathService* sink) { sink_ = sink; }
  PathService* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PathService* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

class UserFeedbackStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  UserFeedbackStub();
  ~UserFeedbackStub() override;
  void set_sink(UserFeedback* sink) { sink_ = sink; }
  UserFeedback* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UserFeedback* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace activity

#endif  // MOJO_SERVICES_ANDROID_INTERFACES_ACTIVITY_MOJOM_H_
