// NOTE: This file was generated by the Mojo bindings generator.
#include "mojo/public/interfaces/bindings/tests/no_module.mojom-common.h"

#include <math.h>
#include <ostream>

#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/message_validation.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

// --- Constants ---

namespace internal {

// --- Struct definitions ---


// --- Union definitions ---


// --- Definitions of the data structs for interface methods ---

}  // namespace internal

// --- Request and response validator definitions for interfaces --- 

// --- Enums ---
bool EnumWithoutModule_IsValidValue(EnumWithoutModule value) {
  switch (static_cast<int32_t>(value)) {
    case 0:
      return true;
  }
  return false;
}
  
std::ostream& operator<<(std::ostream& stream, const EnumWithoutModule& val) {
  return (stream << static_cast<int32_t>(val));
}

// Base interface definitions (Name_, Version_, Constants, Enums)

// Struct Constants

// --- Struct builder definitions ---

// --- Union builder definitions ---

// --- Struct Serialization Helpers ---

// --- Union Serialization Helpers ---

// --- Structs for interface method parameters ---
