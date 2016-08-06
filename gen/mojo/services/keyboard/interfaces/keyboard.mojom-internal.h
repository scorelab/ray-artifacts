// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_KEYBOARD_INTERFACES_KEYBOARD_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_KEYBOARD_INTERFACES_KEYBOARD_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/services/native_viewport/interfaces/native_viewport_event_dispatcher.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace keyboard {

class CompletionData;
class CorrectionData;


namespace internal {

class CompletionData_Data;
class CorrectionData_Data;



#pragma pack(push, 1)


class CompletionData_Data {
 public:
  static CompletionData_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t id;
  int32_t position;
  uint8_t pad1_[4];
  mojo::internal::StringPointer text;
  mojo::internal::StringPointer label;

 private:
  CompletionData_Data();
  ~CompletionData_Data() = delete;
};
static_assert(sizeof(CompletionData_Data) == 40,
              "Bad sizeof(CompletionData_Data)");

class CorrectionData_Data {
 public:
  static CorrectionData_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t offset;
  uint8_t pad0_[4];
  mojo::internal::StringPointer old_text;
  mojo::internal::StringPointer new_text;

 private:
  CorrectionData_Data();
  ~CorrectionData_Data() = delete;
};
static_assert(sizeof(CorrectionData_Data) == 32,
              "Bad sizeof(CorrectionData_Data)");


class KeyboardClient_CommitCompletion_Params_Data {
 public:
  static KeyboardClient_CommitCompletion_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::CompletionData_Data> completion;

 private:
  KeyboardClient_CommitCompletion_Params_Data();
  ~KeyboardClient_CommitCompletion_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_CommitCompletion_Params_Data) == 16,
              "Bad sizeof(KeyboardClient_CommitCompletion_Params_Data)");


class KeyboardClient_CommitCorrection_Params_Data {
 public:
  static KeyboardClient_CommitCorrection_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::CorrectionData_Data> correction;

 private:
  KeyboardClient_CommitCorrection_Params_Data();
  ~KeyboardClient_CommitCorrection_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_CommitCorrection_Params_Data) == 16,
              "Bad sizeof(KeyboardClient_CommitCorrection_Params_Data)");


class KeyboardClient_CommitText_Params_Data {
 public:
  static KeyboardClient_CommitText_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer text;
  int32_t newCursorPosition;
  uint8_t padfinal_[4];

 private:
  KeyboardClient_CommitText_Params_Data();
  ~KeyboardClient_CommitText_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_CommitText_Params_Data) == 24,
              "Bad sizeof(KeyboardClient_CommitText_Params_Data)");


class KeyboardClient_DeleteSurroundingText_Params_Data {
 public:
  static KeyboardClient_DeleteSurroundingText_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t beforeLength;
  int32_t afterLength;

 private:
  KeyboardClient_DeleteSurroundingText_Params_Data();
  ~KeyboardClient_DeleteSurroundingText_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_DeleteSurroundingText_Params_Data) == 16,
              "Bad sizeof(KeyboardClient_DeleteSurroundingText_Params_Data)");


class KeyboardClient_SetComposingRegion_Params_Data {
 public:
  static KeyboardClient_SetComposingRegion_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t start;
  int32_t end;

 private:
  KeyboardClient_SetComposingRegion_Params_Data();
  ~KeyboardClient_SetComposingRegion_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_SetComposingRegion_Params_Data) == 16,
              "Bad sizeof(KeyboardClient_SetComposingRegion_Params_Data)");


class KeyboardClient_SetComposingText_Params_Data {
 public:
  static KeyboardClient_SetComposingText_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer text;
  int32_t newCursorPosition;
  uint8_t padfinal_[4];

 private:
  KeyboardClient_SetComposingText_Params_Data();
  ~KeyboardClient_SetComposingText_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_SetComposingText_Params_Data) == 24,
              "Bad sizeof(KeyboardClient_SetComposingText_Params_Data)");


class KeyboardClient_SetSelection_Params_Data {
 public:
  static KeyboardClient_SetSelection_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t start;
  int32_t end;

 private:
  KeyboardClient_SetSelection_Params_Data();
  ~KeyboardClient_SetSelection_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_SetSelection_Params_Data) == 16,
              "Bad sizeof(KeyboardClient_SetSelection_Params_Data)");


class KeyboardClient_Submit_Params_Data {
 public:
  static KeyboardClient_Submit_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t action;
  uint8_t padfinal_[4];

 private:
  KeyboardClient_Submit_Params_Data();
  ~KeyboardClient_Submit_Params_Data() = delete;
};
static_assert(sizeof(KeyboardClient_Submit_Params_Data) == 16,
              "Bad sizeof(KeyboardClient_Submit_Params_Data)");


class KeyboardService_Show_Params_Data {
 public:
  static KeyboardService_Show_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  KeyboardService_Show_Params_Data();
  ~KeyboardService_Show_Params_Data() = delete;
};
static_assert(sizeof(KeyboardService_Show_Params_Data) == 24,
              "Bad sizeof(KeyboardService_Show_Params_Data)");


class KeyboardService_ShowByRequest_Params_Data {
 public:
  static KeyboardService_ShowByRequest_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  KeyboardService_ShowByRequest_Params_Data();
  ~KeyboardService_ShowByRequest_Params_Data() = delete;
};
static_assert(sizeof(KeyboardService_ShowByRequest_Params_Data) == 8,
              "Bad sizeof(KeyboardService_ShowByRequest_Params_Data)");


class KeyboardService_Hide_Params_Data {
 public:
  static KeyboardService_Hide_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  KeyboardService_Hide_Params_Data();
  ~KeyboardService_Hide_Params_Data() = delete;
};
static_assert(sizeof(KeyboardService_Hide_Params_Data) == 8,
              "Bad sizeof(KeyboardService_Hide_Params_Data)");


class KeyboardService_SetText_Params_Data {
 public:
  static KeyboardService_SetText_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer text;

 private:
  KeyboardService_SetText_Params_Data();
  ~KeyboardService_SetText_Params_Data() = delete;
};
static_assert(sizeof(KeyboardService_SetText_Params_Data) == 16,
              "Bad sizeof(KeyboardService_SetText_Params_Data)");


class KeyboardService_SetSelection_Params_Data {
 public:
  static KeyboardService_SetSelection_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t start;
  int32_t end;

 private:
  KeyboardService_SetSelection_Params_Data();
  ~KeyboardService_SetSelection_Params_Data() = delete;
};
static_assert(sizeof(KeyboardService_SetSelection_Params_Data) == 16,
              "Bad sizeof(KeyboardService_SetSelection_Params_Data)");


class KeyboardServiceFactory_CreateKeyboardService_Params_Data {
 public:
  static KeyboardServiceFactory_CreateKeyboardService_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle keyEventDispatcher;
  mojo::MessagePipeHandle serviceRequest;

 private:
  KeyboardServiceFactory_CreateKeyboardService_Params_Data();
  ~KeyboardServiceFactory_CreateKeyboardService_Params_Data() = delete;
};
static_assert(sizeof(KeyboardServiceFactory_CreateKeyboardService_Params_Data) == 16,
              "Bad sizeof(KeyboardServiceFactory_CreateKeyboardService_Params_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace keyboard

#endif  // MOJO_SERVICES_KEYBOARD_INTERFACES_KEYBOARD_MOJOM_INTERNAL_H_
