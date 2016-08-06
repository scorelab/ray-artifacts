// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_FILES_INTERFACES_FILES_MOJOM_H_
#define MOJO_SERVICES_FILES_INTERFACES_FILES_MOJOM_H_

#include <iosfwd>
#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/services/files/interfaces/files.mojom-common.h"
#include "mojo/services/files/interfaces/directory.mojom.h"
#include "mojo/services/files/interfaces/types.mojom.h"
namespace mojo {
namespace files {

// --- Interface Forward Declarations ---

using FilesPtr = mojo::InterfacePtr<Files>;


// --- Interface Proxies ---


class FilesProxy
    : public Files,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit FilesProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenFileSystem(
      const mojo::String& file_system, mojo::InterfaceRequest<mojo::files::Directory> directory, const OpenFileSystemCallback& callback
  ) override;
};


// --- Interface Stubs ---

class FilesStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  FilesStub();
  ~FilesStub() override;
  void set_sink(Files* sink) { sink_ = sink; }
  Files* sink() { return sink_; }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Files* sink_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};

}  // namespace files
}  // namespace mojo

#endif  // MOJO_SERVICES_FILES_INTERFACES_FILES_MOJOM_H_