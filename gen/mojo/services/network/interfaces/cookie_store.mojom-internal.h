// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_COOKIE_STORE_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_COOKIE_STORE_MOJOM_INTERNAL_H_

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



namespace internal {




#pragma pack(push, 1)



class CookieStore_Get_Params_Data {
 public:
  static CookieStore_Get_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;

 private:
  CookieStore_Get_Params_Data();
  ~CookieStore_Get_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_Get_Params_Data) == 16,
              "Bad sizeof(CookieStore_Get_Params_Data)");

class CookieStore_Get_ResponseParams_Data {
 public:
  static CookieStore_Get_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer cookies;

 private:
  CookieStore_Get_ResponseParams_Data();
  ~CookieStore_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_Get_ResponseParams_Data) == 16,
              "Bad sizeof(CookieStore_Get_ResponseParams_Data)");


class CookieStore_Set_Params_Data {
 public:
  static CookieStore_Set_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  mojo::internal::StringPointer cookie;

 private:
  CookieStore_Set_Params_Data();
  ~CookieStore_Set_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_Set_Params_Data) == 24,
              "Bad sizeof(CookieStore_Set_Params_Data)");

class CookieStore_Set_ResponseParams_Data {
 public:
  static CookieStore_Set_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  CookieStore_Set_ResponseParams_Data();
  ~CookieStore_Set_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_Set_ResponseParams_Data) == 16,
              "Bad sizeof(CookieStore_Set_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_COOKIE_STORE_MOJOM_INTERNAL_H_