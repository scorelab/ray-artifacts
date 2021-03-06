// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_INTERCEPTOR_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_INTERCEPTOR_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/public/interfaces/network/url_request.mojom-internal.h"
#include "mojo/public/interfaces/network/url_response.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {

class URLLoaderInterceptorResponse;


namespace internal {

class URLLoaderInterceptorResponse_Data;



#pragma pack(push, 1)


class URLLoaderInterceptorResponse_Data {
 public:
  static URLLoaderInterceptorResponse_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::URLRequest_Data> request;
  mojo::internal::StructPointer<mojo::internal::URLResponse_Data> response;

 private:
  URLLoaderInterceptorResponse_Data();
  ~URLLoaderInterceptorResponse_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptorResponse_Data) == 24,
              "Bad sizeof(URLLoaderInterceptorResponse_Data)");


class URLLoaderInterceptorFactory_Create_Params_Data {
 public:
  static URLLoaderInterceptorFactory_Create_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle interceptor;
  uint8_t padfinal_[4];

 private:
  URLLoaderInterceptorFactory_Create_Params_Data();
  ~URLLoaderInterceptorFactory_Create_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptorFactory_Create_Params_Data) == 16,
              "Bad sizeof(URLLoaderInterceptorFactory_Create_Params_Data)");


class URLLoaderInterceptor_InterceptRequest_Params_Data {
 public:
  static URLLoaderInterceptor_InterceptRequest_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::URLRequest_Data> request;

 private:
  URLLoaderInterceptor_InterceptRequest_Params_Data();
  ~URLLoaderInterceptor_InterceptRequest_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptor_InterceptRequest_Params_Data) == 16,
              "Bad sizeof(URLLoaderInterceptor_InterceptRequest_Params_Data)");

class URLLoaderInterceptor_InterceptRequest_ResponseParams_Data {
 public:
  static URLLoaderInterceptor_InterceptRequest_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLLoaderInterceptorResponse_Data> response;

 private:
  URLLoaderInterceptor_InterceptRequest_ResponseParams_Data();
  ~URLLoaderInterceptor_InterceptRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptor_InterceptRequest_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoaderInterceptor_InterceptRequest_ResponseParams_Data)");


class URLLoaderInterceptor_InterceptFollowRedirect_Params_Data {
 public:
  static URLLoaderInterceptor_InterceptFollowRedirect_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  URLLoaderInterceptor_InterceptFollowRedirect_Params_Data();
  ~URLLoaderInterceptor_InterceptFollowRedirect_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptor_InterceptFollowRedirect_Params_Data) == 8,
              "Bad sizeof(URLLoaderInterceptor_InterceptFollowRedirect_Params_Data)");

class URLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Data {
 public:
  static URLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLLoaderInterceptorResponse_Data> response;

 private:
  URLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Data();
  ~URLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Data)");


class URLLoaderInterceptor_InterceptResponse_Params_Data {
 public:
  static URLLoaderInterceptor_InterceptResponse_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::URLResponse_Data> response;

 private:
  URLLoaderInterceptor_InterceptResponse_Params_Data();
  ~URLLoaderInterceptor_InterceptResponse_Params_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptor_InterceptResponse_Params_Data) == 16,
              "Bad sizeof(URLLoaderInterceptor_InterceptResponse_Params_Data)");

class URLLoaderInterceptor_InterceptResponse_ResponseParams_Data {
 public:
  static URLLoaderInterceptor_InterceptResponse_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLLoaderInterceptorResponse_Data> response;

 private:
  URLLoaderInterceptor_InterceptResponse_ResponseParams_Data();
  ~URLLoaderInterceptor_InterceptResponse_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoaderInterceptor_InterceptResponse_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoaderInterceptor_InterceptResponse_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_INTERFACES_URL_LOADER_INTERCEPTOR_MOJOM_INTERNAL_H_
