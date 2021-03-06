// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_COMMON_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_COMMON_H_

#include <stdint.h>
#include <iosfwd>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"
#include "mojo/public/interfaces/bindings/tests/no_module.mojom-internal.h"

// --- Interface Forward Declarations ---

// --- Struct Forward Declarations ---

// --- Union Forward Declarations ---

// --- Enums Declarations ---
  
enum class EnumWithoutModule : int32_t {
  A,
};

bool EnumWithoutModule_IsValidValue(EnumWithoutModule value);
  
std::ostream& operator<<(std::ostream& stream, const EnumWithoutModule& val);

// --- Constants ---

// --- Interface declarations ---

// --- Internal Template Specializations ---

namespace mojo {
namespace internal {

}  // internal
}  // mojo

// --- Interface Request Validators ---

// --- Interface Response Validators ---

// --- Interface enum operators ---

// --- Unions ---
// Unions must be declared first because they can be members of structs.

// --- Inlined structs ---

// --- Non-inlined structs ---

// --- Struct serialization helpers ---

// --- Union serialization helpers ---

// --- Request and response parameter structs for Interface methods ---

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_NO_MODULE_MOJOM_COMMON_H_
