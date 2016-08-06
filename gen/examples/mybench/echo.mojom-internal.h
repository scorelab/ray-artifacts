// NOTE: This file was generated by the Mojo bindings generator.
#ifndef EXAMPLES_MYBENCH_ECHO_MOJOM_INTERNAL_H_
#define EXAMPLES_MYBENCH_ECHO_MOJOM_INTERNAL_H_

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
namespace mojo {
namespace examples {

class ObjectInfo;


namespace internal {

class ObjectInfo_Data;



#pragma pack(push, 1)


class ObjectInfo_Data {
 public:
  static ObjectInfo_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t ms_since_epoch;
  uint64_t num_bytes;

 private:
  ObjectInfo_Data();
  ~ObjectInfo_Data() = delete;
};
static_assert(sizeof(ObjectInfo_Data) == 24,
              "Bad sizeof(ObjectInfo_Data)");


class Echo_EchoString_Params_Data {
 public:
  static Echo_EchoString_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint32_t value;
  uint8_t padfinal_[4];

 private:
  Echo_EchoString_Params_Data();
  ~Echo_EchoString_Params_Data() = delete;
};
static_assert(sizeof(Echo_EchoString_Params_Data) == 16,
              "Bad sizeof(Echo_EchoString_Params_Data)");

class Echo_EchoString_ResponseParams_Data {
 public:
  static Echo_EchoString_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint32_t value;
  uint8_t padfinal_[4];

 private:
  Echo_EchoString_ResponseParams_Data();
  ~Echo_EchoString_ResponseParams_Data() = delete;
};
static_assert(sizeof(Echo_EchoString_ResponseParams_Data) == 16,
              "Bad sizeof(Echo_EchoString_ResponseParams_Data)");


class Echo_BuildObject_Params_Data {
 public:
  static Echo_BuildObject_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int64_t object_id;
  uint64_t size;

 private:
  Echo_BuildObject_Params_Data();
  ~Echo_BuildObject_Params_Data() = delete;
};
static_assert(sizeof(Echo_BuildObject_Params_Data) == 24,
              "Bad sizeof(Echo_BuildObject_Params_Data)");

class Echo_BuildObject_ResponseParams_Data {
 public:
  static Echo_BuildObject_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::SharedBufferHandle buffer;
  uint8_t padfinal_[4];

 private:
  Echo_BuildObject_ResponseParams_Data();
  ~Echo_BuildObject_ResponseParams_Data() = delete;
};
static_assert(sizeof(Echo_BuildObject_ResponseParams_Data) == 16,
              "Bad sizeof(Echo_BuildObject_ResponseParams_Data)");


class Echo_ListObjects_Params_Data {
 public:
  static Echo_ListObjects_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  Echo_ListObjects_Params_Data();
  ~Echo_ListObjects_Params_Data() = delete;
};
static_assert(sizeof(Echo_ListObjects_Params_Data) == 8,
              "Bad sizeof(Echo_ListObjects_Params_Data)");

class Echo_ListObjects_ResponseParams_Data {
 public:
  static Echo_ListObjects_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::ObjectInfo_Data*> info;

 private:
  Echo_ListObjects_ResponseParams_Data();
  ~Echo_ListObjects_ResponseParams_Data() = delete;
};
static_assert(sizeof(Echo_ListObjects_ResponseParams_Data) == 16,
              "Bad sizeof(Echo_ListObjects_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace examples
}  // namespace mojo

#endif  // EXAMPLES_MYBENCH_ECHO_MOJOM_INTERNAL_H_
