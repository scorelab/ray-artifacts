// This file was auto-generated by the C bindings generator.

#include "mojo/services/network/interfaces/http_message.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/public/interfaces/network/http_header.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_HttpRequest_16_0__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_HttpResponse_8_1__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_HttpRequest__PointerTable[];
struct MojomPointerTableStructEntry mojo_HttpResponse__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_HttpRequest_16_0__PointerEntry = {
  mojo_HttpHeader__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_HttpResponse_8_1__PointerEntry = {
  mojo_HttpHeader__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_HttpRequest__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    &mojo_HttpRequest_16_0__PointerEntry, 16, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    NULL, 24, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_HttpResponse__PointerTable[] = {
  {
    NULL, 4, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, true, true,
  },

  {
    &mojo_HttpResponse_8_1__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
