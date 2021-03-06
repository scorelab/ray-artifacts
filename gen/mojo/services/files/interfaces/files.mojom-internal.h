// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_FILES_INTERFACES_FILES_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_FILES_INTERFACES_FILES_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/services/files/interfaces/directory.mojom-internal.h"
#include "mojo/services/files/interfaces/types.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {
namespace files {



namespace internal {




#pragma pack(push, 1)



class Files_OpenFileSystem_Params_Data {
 public:
  static Files_OpenFileSystem_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer file_system;
  mojo::MessagePipeHandle directory;
  uint8_t padfinal_[4];

 private:
  Files_OpenFileSystem_Params_Data();
  ~Files_OpenFileSystem_Params_Data() = delete;
};
static_assert(sizeof(Files_OpenFileSystem_Params_Data) == 24,
              "Bad sizeof(Files_OpenFileSystem_Params_Data)");

class Files_OpenFileSystem_ResponseParams_Data {
 public:
  static Files_OpenFileSystem_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  Files_OpenFileSystem_ResponseParams_Data();
  ~Files_OpenFileSystem_ResponseParams_Data() = delete;
};
static_assert(sizeof(Files_OpenFileSystem_ResponseParams_Data) == 16,
              "Bad sizeof(Files_OpenFileSystem_ResponseParams_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace files
}  // namespace mojo

#endif  // MOJO_SERVICES_FILES_INTERFACES_FILES_MOJOM_INTERNAL_H_
