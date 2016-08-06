// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace sample {



namespace internal {




#pragma pack(push, 1)



class Provider_EchoString_Params_Data {
 public:
  static Provider_EchoString_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer a;

 private:
  Provider_EchoString_Params_Data();
  ~Provider_EchoString_Params_Data() = delete;
};
static_assert(sizeof(Provider_EchoString_Params_Data) == 16,
              "Bad sizeof(Provider_EchoString_Params_Data)");

class Provider_EchoString_ResponseParams_Data {
 public:
  static Provider_EchoString_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer a;

 private:
  Provider_EchoString_ResponseParams_Data();
  ~Provider_EchoString_ResponseParams_Data() = delete;
};
static_assert(sizeof(Provider_EchoString_ResponseParams_Data) == 16,
              "Bad sizeof(Provider_EchoString_ResponseParams_Data)");


class Provider_EchoStrings_Params_Data {
 public:
  static Provider_EchoStrings_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer a;
  mojo::internal::StringPointer b;

 private:
  Provider_EchoStrings_Params_Data();
  ~Provider_EchoStrings_Params_Data() = delete;
};
static_assert(sizeof(Provider_EchoStrings_Params_Data) == 24,
              "Bad sizeof(Provider_EchoStrings_Params_Data)");

class Provider_EchoStrings_ResponseParams_Data {
 public:
  static Provider_EchoStrings_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer a;
  mojo::internal::StringPointer b;

 private:
  Provider_EchoStrings_ResponseParams_Data();
  ~Provider_EchoStrings_ResponseParams_Data() = delete;
};
static_assert(sizeof(Provider_EchoStrings_ResponseParams_Data) == 24,
              "Bad sizeof(Provider_EchoStrings_ResponseParams_Data)");


class Provider_EchoMessagePipeHandle_Params_Data {
 public:
  static Provider_EchoMessagePipeHandle_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle a;
  uint8_t padfinal_[4];

 private:
  Provider_EchoMessagePipeHandle_Params_Data();
  ~Provider_EchoMessagePipeHandle_Params_Data() = delete;
};
static_assert(sizeof(Provider_EchoMessagePipeHandle_Params_Data) == 16,
              "Bad sizeof(Provider_EchoMessagePipeHandle_Params_Data)");

class Provider_EchoMessagePipeHandle_ResponseParams_Data {
 public:
  static Provider_EchoMessagePipeHandle_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle a;
  uint8_t padfinal_[4];

 private:
  Provider_EchoMessagePipeHandle_ResponseParams_Data();
  ~Provider_EchoMessagePipeHandle_ResponseParams_Data() = delete;
};
static_assert(sizeof(Provider_EchoMessagePipeHandle_ResponseParams_Data) == 16,
              "Bad sizeof(Provider_EchoMessagePipeHandle_ResponseParams_Data)");


class Provider_EchoEnum_Params_Data {
 public:
  static Provider_EchoEnum_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t a;
  uint8_t padfinal_[4];

 private:
  Provider_EchoEnum_Params_Data();
  ~Provider_EchoEnum_Params_Data() = delete;
};
static_assert(sizeof(Provider_EchoEnum_Params_Data) == 16,
              "Bad sizeof(Provider_EchoEnum_Params_Data)");

class Provider_EchoEnum_ResponseParams_Data {
 public:
  static Provider_EchoEnum_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t a;
  uint8_t padfinal_[4];

 private:
  Provider_EchoEnum_ResponseParams_Data();
  ~Provider_EchoEnum_ResponseParams_Data() = delete;
};
static_assert(sizeof(Provider_EchoEnum_ResponseParams_Data) == 16,
              "Bad sizeof(Provider_EchoEnum_ResponseParams_Data)");


class Provider_EchoInt_Params_Data {
 public:
  static Provider_EchoInt_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t a;
  uint8_t padfinal_[4];

 private:
  Provider_EchoInt_Params_Data();
  ~Provider_EchoInt_Params_Data() = delete;
};
static_assert(sizeof(Provider_EchoInt_Params_Data) == 16,
              "Bad sizeof(Provider_EchoInt_Params_Data)");

class Provider_EchoInt_ResponseParams_Data {
 public:
  static Provider_EchoInt_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t a;
  uint8_t padfinal_[4];

 private:
  Provider_EchoInt_ResponseParams_Data();
  ~Provider_EchoInt_ResponseParams_Data() = delete;
};
static_assert(sizeof(Provider_EchoInt_ResponseParams_Data) == 16,
              "Bad sizeof(Provider_EchoInt_ResponseParams_Data)");


class IntegerAccessor_GetInteger_Params_Data {
 public:
  static IntegerAccessor_GetInteger_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  IntegerAccessor_GetInteger_Params_Data();
  ~IntegerAccessor_GetInteger_Params_Data() = delete;
};
static_assert(sizeof(IntegerAccessor_GetInteger_Params_Data) == 8,
              "Bad sizeof(IntegerAccessor_GetInteger_Params_Data)");

class IntegerAccessor_GetInteger_ResponseParams_Data {
 public:
  static IntegerAccessor_GetInteger_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t data;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  IntegerAccessor_GetInteger_ResponseParams_Data();
  ~IntegerAccessor_GetInteger_ResponseParams_Data() = delete;
};
static_assert(sizeof(IntegerAccessor_GetInteger_ResponseParams_Data) == 24,
              "Bad sizeof(IntegerAccessor_GetInteger_ResponseParams_Data)");


class IntegerAccessor_SetInteger_Params_Data {
 public:
  static IntegerAccessor_SetInteger_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t data;
  int32_t type;
  uint8_t padfinal_[4];

 private:
  IntegerAccessor_SetInteger_Params_Data();
  ~IntegerAccessor_SetInteger_Params_Data() = delete;
};
static_assert(sizeof(IntegerAccessor_SetInteger_Params_Data) == 24,
              "Bad sizeof(IntegerAccessor_SetInteger_Params_Data)");


class SampleInterface_SampleMethod1_Params_Data {
 public:
  static SampleInterface_SampleMethod1_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t in1;
  uint8_t pad0_[4];
  mojo::internal::StringPointer in2;

 private:
  SampleInterface_SampleMethod1_Params_Data();
  ~SampleInterface_SampleMethod1_Params_Data() = delete;
};
static_assert(sizeof(SampleInterface_SampleMethod1_Params_Data) == 24,
              "Bad sizeof(SampleInterface_SampleMethod1_Params_Data)");

class SampleInterface_SampleMethod1_ResponseParams_Data {
 public:
  static SampleInterface_SampleMethod1_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer out1;
  int32_t out2;
  uint8_t padfinal_[4];

 private:
  SampleInterface_SampleMethod1_ResponseParams_Data();
  ~SampleInterface_SampleMethod1_ResponseParams_Data() = delete;
};
static_assert(sizeof(SampleInterface_SampleMethod1_ResponseParams_Data) == 24,
              "Bad sizeof(SampleInterface_SampleMethod1_ResponseParams_Data)");


class SampleInterface_SampleMethod0_Params_Data {
 public:
  static SampleInterface_SampleMethod0_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  SampleInterface_SampleMethod0_Params_Data();
  ~SampleInterface_SampleMethod0_Params_Data() = delete;
};
static_assert(sizeof(SampleInterface_SampleMethod0_Params_Data) == 8,
              "Bad sizeof(SampleInterface_SampleMethod0_Params_Data)");


class SampleInterface_SampleMethod2_Params_Data {
 public:
  static SampleInterface_SampleMethod2_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  SampleInterface_SampleMethod2_Params_Data();
  ~SampleInterface_SampleMethod2_Params_Data() = delete;
};
static_assert(sizeof(SampleInterface_SampleMethod2_Params_Data) == 8,
              "Bad sizeof(SampleInterface_SampleMethod2_Params_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace sample

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_INTERFACES_MOJOM_INTERNAL_H_