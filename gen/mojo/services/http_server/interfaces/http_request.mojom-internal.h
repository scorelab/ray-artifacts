// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_REQUEST_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_REQUEST_MOJOM_INTERNAL_H_

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
namespace http_server {

class HttpRequest;


namespace internal {

class HttpRequest_Data;



#pragma pack(push, 1)


class HttpRequest_Data {
 public:
  static HttpRequest_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer relative_url;
  mojo::internal::StringPointer method;
  mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, mojo::internal::String_Data*>> headers;
  mojo::DataPipeConsumerHandle body;
  uint8_t padfinal_[4];

 private:
  HttpRequest_Data();
  ~HttpRequest_Data() = delete;
};
static_assert(sizeof(HttpRequest_Data) == 40,
              "Bad sizeof(HttpRequest_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace http_server

#endif  // MOJO_SERVICES_HTTP_SERVER_INTERFACES_HTTP_REQUEST_MOJOM_INTERNAL_H_
