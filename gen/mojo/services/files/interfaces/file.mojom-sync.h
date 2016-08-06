// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_FILES_INTERFACES_FILE_MOJOM_SYNC_H_
#define MOJO_SERVICES_FILES_INTERFACES_FILE_MOJOM_SYNC_H_

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
#include "mojo/services/files/interfaces/file.mojom-internal.h"
#include "mojo/services/files/interfaces/file.mojom-common.h"
#include "mojo/services/files/interfaces/types.mojom.h"


namespace mojo {
namespace files {

// --- Synchronous interface declaration ---

class File_SynchronousProxy;
class File_Synchronous
  : public internal::File_Base {
 public:
  virtual ~File_Synchronous() override {}
  
  using Proxy_ = File_SynchronousProxy;
  virtual bool Close(
      mojo::files::Error* out_err)= 0;
  virtual bool Read(
      uint32_t in_num_bytes_to_read, int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error, mojo::Array<uint8_t>* out_bytes_read)= 0;
  virtual bool Write(
      mojo::Array<uint8_t> in_bytes_to_write, int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error, uint32_t* out_num_bytes_written)= 0;
  virtual bool ReadToStream(
      mojo::ScopedDataPipeProducerHandle in_source, int64_t in_offset, mojo::files::Whence in_whence, int64_t in_num_bytes_to_read, mojo::files::Error* out_error)= 0;
  virtual bool WriteFromStream(
      mojo::ScopedDataPipeConsumerHandle in_sink, int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error)= 0;
  virtual bool Tell(
      mojo::files::Error* out_error, int64_t* out_position)= 0;
  virtual bool Seek(
      int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error, int64_t* out_position)= 0;
  virtual bool Stat(
      mojo::files::Error* out_error, mojo::files::FileInformationPtr* out_file_information)= 0;
  virtual bool Truncate(
      int64_t in_size, mojo::files::Error* out_error)= 0;
  virtual bool Touch(
      mojo::files::TimespecOrNowPtr in_atime, mojo::files::TimespecOrNowPtr in_mtime, mojo::files::Error* out_error)= 0;
  virtual bool Dup(
      mojo::InterfaceRequest<File> in_file, mojo::files::Error* out_error)= 0;
  virtual bool Reopen(
      mojo::InterfaceRequest<File> in_file, uint32_t in_open_flags, mojo::files::Error* out_error)= 0;
  virtual bool AsBuffer(
      mojo::files::Error* out_error, mojo::ScopedSharedBufferHandle* out_buffer)= 0;
  virtual bool Ioctl(
      uint32_t in_request, mojo::Array<uint32_t> in_in_values, mojo::files::Error* out_error, mojo::Array<uint32_t>* out_out_values)= 0;
};

class File_SynchronousProxy
    : public File_Synchronous {
 public:
  explicit File_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool Close(mojo::files::Error* out_err) override;
  bool Read(uint32_t in_num_bytes_to_read, int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error, mojo::Array<uint8_t>* out_bytes_read) override;
  bool Write(mojo::Array<uint8_t> in_bytes_to_write, int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error, uint32_t* out_num_bytes_written) override;
  bool ReadToStream(mojo::ScopedDataPipeProducerHandle in_source, int64_t in_offset, mojo::files::Whence in_whence, int64_t in_num_bytes_to_read, mojo::files::Error* out_error) override;
  bool WriteFromStream(mojo::ScopedDataPipeConsumerHandle in_sink, int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error) override;
  bool Tell(mojo::files::Error* out_error, int64_t* out_position) override;
  bool Seek(int64_t in_offset, mojo::files::Whence in_whence, mojo::files::Error* out_error, int64_t* out_position) override;
  bool Stat(mojo::files::Error* out_error, mojo::files::FileInformationPtr* out_file_information) override;
  bool Truncate(int64_t in_size, mojo::files::Error* out_error) override;
  bool Touch(mojo::files::TimespecOrNowPtr in_atime, mojo::files::TimespecOrNowPtr in_mtime, mojo::files::Error* out_error) override;
  bool Dup(mojo::InterfaceRequest<File> in_file, mojo::files::Error* out_error) override;
  bool Reopen(mojo::InterfaceRequest<File> in_file, uint32_t in_open_flags, mojo::files::Error* out_error) override;
  bool AsBuffer(mojo::files::Error* out_error, mojo::ScopedSharedBufferHandle* out_buffer) override;
  bool Ioctl(uint32_t in_request, mojo::Array<uint32_t> in_in_values, mojo::files::Error* out_error, mojo::Array<uint32_t>* out_out_values) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace files
}  // namespace mojo

#endif  // MOJO_SERVICES_FILES_INTERFACES_FILE_MOJOM_SYNC_H_
