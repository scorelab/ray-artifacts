// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_KEYBOARD_INTERFACES_KEYBOARD_MOJOM_SYNC_H_
#define MOJO_SERVICES_KEYBOARD_INTERFACES_KEYBOARD_MOJOM_SYNC_H_

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
#include "mojo/services/keyboard/interfaces/keyboard.mojom-internal.h"
#include "mojo/services/keyboard/interfaces/keyboard.mojom-common.h"
#include "mojo/services/native_viewport/interfaces/native_viewport_event_dispatcher.mojom.h"


namespace keyboard {

// --- Synchronous interface declaration ---

class KeyboardClient_SynchronousProxy;
class KeyboardClient_Synchronous
  : public internal::KeyboardClient_Base {
 public:
  virtual ~KeyboardClient_Synchronous() override {}
  
  using Proxy_ = KeyboardClient_SynchronousProxy;
  virtual bool CommitCompletion(
      CompletionDataPtr in_completion)const= 0;
  virtual bool CommitCorrection(
      CorrectionDataPtr in_correction)const= 0;
  virtual bool CommitText(
      const mojo::String& in_text, int32_t in_newCursorPosition)const= 0;
  virtual bool DeleteSurroundingText(
      int32_t in_beforeLength, int32_t in_afterLength)const= 0;
  virtual bool SetComposingRegion(
      int32_t in_start, int32_t in_end)const= 0;
  virtual bool SetComposingText(
      const mojo::String& in_text, int32_t in_newCursorPosition)const= 0;
  virtual bool SetSelection(
      int32_t in_start, int32_t in_end)const= 0;
  virtual bool Submit(
      SubmitAction in_action)const= 0;
};

class KeyboardClient_SynchronousProxy
    : public KeyboardClient_Synchronous {
 public:
  explicit KeyboardClient_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool CommitCompletion(CompletionDataPtr in_completion) const  override;
  bool CommitCorrection(CorrectionDataPtr in_correction) const  override;
  bool CommitText(const mojo::String& in_text, int32_t in_newCursorPosition) const  override;
  bool DeleteSurroundingText(int32_t in_beforeLength, int32_t in_afterLength) const  override;
  bool SetComposingRegion(int32_t in_start, int32_t in_end) const  override;
  bool SetComposingText(const mojo::String& in_text, int32_t in_newCursorPosition) const  override;
  bool SetSelection(int32_t in_start, int32_t in_end) const  override;
  bool Submit(SubmitAction in_action) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class KeyboardService_SynchronousProxy;
class KeyboardService_Synchronous
  : public internal::KeyboardService_Base {
 public:
  virtual ~KeyboardService_Synchronous() override {}
  
  using Proxy_ = KeyboardService_SynchronousProxy;
  virtual bool Show(
      mojo::InterfaceHandle<KeyboardClient> in_client, KeyboardType in_type)const= 0;
  virtual bool ShowByRequest(
      )const= 0;
  virtual bool Hide(
      )const= 0;
  virtual bool SetText(
      const mojo::String& in_text)const= 0;
  virtual bool SetSelection(
      int32_t in_start, int32_t in_end)const= 0;
};

class KeyboardService_SynchronousProxy
    : public KeyboardService_Synchronous {
 public:
  explicit KeyboardService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool Show(mojo::InterfaceHandle<KeyboardClient> in_client, KeyboardType in_type) const  override;
  bool ShowByRequest() const  override;
  bool Hide() const  override;
  bool SetText(const mojo::String& in_text) const  override;
  bool SetSelection(int32_t in_start, int32_t in_end) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

class KeyboardServiceFactory_SynchronousProxy;
class KeyboardServiceFactory_Synchronous
  : public internal::KeyboardServiceFactory_Base {
 public:
  virtual ~KeyboardServiceFactory_Synchronous() override {}
  
  using Proxy_ = KeyboardServiceFactory_SynchronousProxy;
  virtual bool CreateKeyboardService(
      mojo::InterfaceRequest<mojo::NativeViewportEventDispatcher> in_keyEventDispatcher, mojo::InterfaceRequest<KeyboardService> in_serviceRequest)const= 0;
};

class KeyboardServiceFactory_SynchronousProxy
    : public KeyboardServiceFactory_Synchronous {
 public:
  explicit KeyboardServiceFactory_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool CreateKeyboardService(mojo::InterfaceRequest<mojo::NativeViewportEventDispatcher> in_keyEventDispatcher, mojo::InterfaceRequest<KeyboardService> in_serviceRequest) const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace keyboard

#endif  // MOJO_SERVICES_KEYBOARD_INTERFACES_KEYBOARD_MOJOM_SYNC_H_
