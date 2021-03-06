// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SYNC_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SYNC_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-internal.h"
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-common.h"


namespace imported {

// --- Synchronous interface declaration ---

class ImportedInterface_SynchronousProxy;
class ImportedInterface_Synchronous
  : public internal::ImportedInterface_Base {
 public:
  virtual ~ImportedInterface_Synchronous() override {}
  
  using Proxy_ = ImportedInterface_SynchronousProxy;
  virtual bool DoSomething(
      )const= 0;
};

class ImportedInterface_SynchronousProxy
    : public ImportedInterface_Synchronous {
 public:
  explicit ImportedInterface_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool DoSomething() const  override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace imported

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_IMPORT_MOJOM_SYNC_H_
