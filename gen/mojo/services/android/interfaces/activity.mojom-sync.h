// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_ANDROID_INTERFACES_ACTIVITY_MOJOM_SYNC_H_
#define MOJO_SERVICES_ANDROID_INTERFACES_ACTIVITY_MOJOM_SYNC_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/lib/synchronous_connector.h"
#include "mojo/services/android/interfaces/activity.mojom-internal.h"
#include "mojo/services/android/interfaces/activity.mojom-common.h"


namespace activity {

// --- Synchronous interface declaration ---

class Activity_SynchronousProxy;
class Activity_Synchronous
  : public internal::Activity_Base {
 public:
  virtual ~Activity_Synchronous() override {}
  
  using Proxy_ = Activity_SynchronousProxy;
  virtual bool GetUserFeedback(
      mojo::InterfaceRequest<UserFeedback> in_user_feedback)const= 0;
  virtual bool StartActivity(
      IntentPtr in_intent)const= 0;
  virtual bool FinishCurrentActivity(
      )const= 0;
  virtual bool SetTaskDescription(
      TaskDescriptionPtr in_description)const= 0;
  virtual bool SetSystemUIVisibility(
      SystemUIVisibility in_visibility)const= 0;
  virtual bool SetRequestedOrientation(
      ScreenOrientation in_orientation)const= 0;
};

class Activity_SynchronousProxy
    : public Activity_Synchronous {
 public:
  explicit Activity_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetUserFeedback(mojo::InterfaceRequest<UserFeedback> in_user_feedback) const  override;
  bool StartActivity(IntentPtr in_intent) const  override;
  bool FinishCurrentActivity() const  override;
  bool SetTaskDescription(TaskDescriptionPtr in_description) const  override;
  bool SetSystemUIVisibility(SystemUIVisibility in_visibility) const  override;
  bool SetRequestedOrientation(ScreenOrientation in_orientation) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class PathService_SynchronousProxy;
class PathService_Synchronous
  : public internal::PathService_Base {
 public:
  virtual ~PathService_Synchronous() override {}
  
  using Proxy_ = PathService_SynchronousProxy;
  virtual bool GetAppDataDir(
      mojo::String* out_path)= 0;
  virtual bool GetFilesDir(
      mojo::String* out_path)= 0;
  virtual bool GetCacheDir(
      mojo::String* out_path)= 0;
};

class PathService_SynchronousProxy
    : public PathService_Synchronous {
 public:
  explicit PathService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetAppDataDir(mojo::String* out_path) override;
  bool GetFilesDir(mojo::String* out_path) override;
  bool GetCacheDir(mojo::String* out_path) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class UserFeedback_SynchronousProxy;
class UserFeedback_Synchronous
  : public internal::UserFeedback_Base {
 public:
  virtual ~UserFeedback_Synchronous() override {}
  
  using Proxy_ = UserFeedback_SynchronousProxy;
  virtual bool PerformHapticFeedback(
      HapticFeedbackType in_type)const= 0;
  virtual bool PerformAuralFeedback(
      AuralFeedbackType in_type)const= 0;
};

class UserFeedback_SynchronousProxy
    : public UserFeedback_Synchronous {
 public:
  explicit UserFeedback_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool PerformHapticFeedback(HapticFeedbackType in_type) const  override;
  bool PerformAuralFeedback(AuralFeedbackType in_type) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace activity

#endif  // MOJO_SERVICES_ANDROID_INTERFACES_ACTIVITY_MOJOM_SYNC_H_
