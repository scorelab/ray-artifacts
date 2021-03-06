// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/public/interfaces/network/network_error.mojom-internal.h"
#include "mojo/public/interfaces/network/url_request.mojom-internal.h"
#include "mojo/public/interfaces/network/url_response.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {

class URLLoaderStatus;


namespace internal {

class URLLoaderStatus_Data;



#pragma pack(push, 1)


class URLLoaderStatus_Data {
 public:
  static URLLoaderStatus_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> error;
  uint8_t is_loading : 1;
  uint8_t padfinal_[7];

 private:
  URLLoaderStatus_Data();
  ~URLLoaderStatus_Data() = delete;
};
static_assert(sizeof(URLLoaderStatus_Data) == 24,
              "Bad sizeof(URLLoaderStatus_Data)");


class URLLoader_Start_Params_Data {
 public:
  static URLLoader_Start_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::URLRequest_Data> request;

 private:
  URLLoader_Start_Params_Data();
  ~URLLoader_Start_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_Start_Params_Data) == 16,
              "Bad sizeof(URLLoader_Start_Params_Data)");

class URLLoader_Start_ResponseParams_Data {
 public:
  static URLLoader_Start_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::URLResponse_Data> response;

 private:
  URLLoader_Start_ResponseParams_Data();
  ~URLLoader_Start_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoader_Start_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoader_Start_ResponseParams_Data)");


class URLLoader_FollowRedirect_Params_Data {
 public:
  static URLLoader_FollowRedirect_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_FollowRedirect_Params_Data();
  ~URLLoader_FollowRedirect_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_FollowRedirect_Params_Data) == 8,
              "Bad sizeof(URLLoader_FollowRedirect_Params_Data)");

class URLLoader_FollowRedirect_ResponseParams_Data {
 public:
  static URLLoader_FollowRedirect_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::URLResponse_Data> response;

 private:
  URLLoader_FollowRedirect_ResponseParams_Data();
  ~URLLoader_FollowRedirect_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoader_FollowRedirect_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoader_FollowRedirect_ResponseParams_Data)");


class URLLoader_QueryStatus_Params_Data {
 public:
  static URLLoader_QueryStatus_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  URLLoader_QueryStatus_Params_Data();
  ~URLLoader_QueryStatus_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_QueryStatus_Params_Data) == 8,
              "Bad sizeof(URLLoader_QueryStatus_Params_Data)");

class URLLoader_QueryStatus_ResponseParams_Data {
 public:
  static URLLoader_QueryStatus_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLLoaderStatus_Data> status;

 private:
  URLLoader_QueryStatus_ResponseParams_Data();
  ~URLLoader_QueryStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoader_QueryStatus_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoader_QueryStatus_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_MOJOM_INTERNAL_H_
