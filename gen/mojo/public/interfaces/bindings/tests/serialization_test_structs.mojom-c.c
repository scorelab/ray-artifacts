// This file was auto-generated by the C bindings generator.

#include "mojo/public/interfaces/bindings/tests/serialization_test_structs.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_test_Struct4_0_0__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_test_Struct5_0_1__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_test_Struct1__PointerTable[];
struct MojomPointerTableStructEntry mojo_test_Struct2__PointerTable[];
struct MojomPointerTableStructEntry mojo_test_Struct3__PointerTable[];
struct MojomPointerTableStructEntry mojo_test_Struct4__PointerTable[];
struct MojomPointerTableStructEntry mojo_test_Struct5__PointerTable[];
struct MojomPointerTableStructEntry mojo_test_Struct6__PointerTable[];
struct MojomPointerTableStructEntry mojo_test_StructOfNullables__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_test_Struct4_0_0__PointerEntry = {
  mojo_test_Struct1__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_test_Struct5_0_1__PointerEntry = {
  mojo_test_Struct1__PointerTable, 2,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_test_Struct1__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_test_Struct2__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_test_Struct3__PointerTable[] = {
  {
    mojo_test_Struct1__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_test_Struct4__PointerTable[] = {
  {
    &mojo_test_Struct4_0_0__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_test_Struct5__PointerTable[] = {
  {
    &mojo_test_Struct5_0_1__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_test_Struct6__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_test_StructOfNullables__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, true, true,
  },

  {
    mojo_test_Struct1__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    (void*)&MojomStringPointerEntry, 16, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
