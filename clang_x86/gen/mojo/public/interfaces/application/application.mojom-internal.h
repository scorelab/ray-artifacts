// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_MOJOM_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/public/interfaces/application/service_provider.mojom-internal.h"
#include "mojo/public/interfaces/application/shell.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {



namespace internal {




#pragma pack(push, 1)



class Application_Initialize_Params_Data {
 public:
  static Application_Initialize_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data shell;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> args;
  mojo::internal::StringPointer url;

 private:
  Application_Initialize_Params_Data();
  ~Application_Initialize_Params_Data() = delete;
};
static_assert(sizeof(Application_Initialize_Params_Data) == 32,
              "Bad sizeof(Application_Initialize_Params_Data)");


class Application_AcceptConnection_Params_Data {
 public:
  static Application_AcceptConnection_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer requestor_url;
  mojo::internal::StringPointer resolved_url;
  mojo::MessagePipeHandle services;
  uint8_t padfinal_[4];

 private:
  Application_AcceptConnection_Params_Data();
  ~Application_AcceptConnection_Params_Data() = delete;
};
static_assert(sizeof(Application_AcceptConnection_Params_Data) == 32,
              "Bad sizeof(Application_AcceptConnection_Params_Data)");


class Application_RequestQuit_Params_Data {
 public:
  static Application_RequestQuit_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  Application_RequestQuit_Params_Data();
  ~Application_RequestQuit_Params_Data() = delete;
};
static_assert(sizeof(Application_RequestQuit_Params_Data) == 8,
              "Bad sizeof(Application_RequestQuit_Params_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_APPLICATION_APPLICATION_MOJOM_INTERNAL_H_
