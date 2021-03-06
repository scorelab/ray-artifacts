// This file was auto-generated by the C bindings generator.

#include "examples/mybench/echo.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_examples_Echo_ListObjects_Response_0_0__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_examples_ObjectInfo__PointerTable[];
struct MojomPointerTableStructEntry mojo_examples_Echo_EchoString_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_examples_Echo_EchoString_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_examples_Echo_BuildObject_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_examples_Echo_BuildObject_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_examples_Echo_ListObjects_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_examples_Echo_ListObjects_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_examples_Echo_ListObjects_Response_0_0__PointerEntry = {
  mojo_examples_ObjectInfo__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_examples_ObjectInfo__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_examples_Echo_EchoString_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_examples_Echo_EchoString_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_examples_Echo_BuildObject_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_examples_Echo_BuildObject_Response__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_examples_Echo_ListObjects_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_examples_Echo_ListObjects_Response__PointerTable[] = {
  {
    &mojo_examples_Echo_ListObjects_Response_0_0__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
