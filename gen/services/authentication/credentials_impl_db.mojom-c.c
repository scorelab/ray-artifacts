// This file was auto-generated by the C bindings generator.

#include "services/authentication/credentials_impl_db.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
// Declarations for struct type tables.
struct MojomPointerTableStructEntry authentication_Credentials__PointerTable[];
struct MojomPointerTableStructEntry authentication_CredentialStore_8_0__PointerTable[];
struct MojomPointerTableStructEntry authentication_CredentialStore__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
// Struct type table definitions.
struct MojomPointerTableStructEntry authentication_Credentials__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    (void*)&MojomStringPointerEntry, 16, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry authentication_CredentialStore_8_0__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    authentication_Credentials__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry authentication_CredentialStore__PointerTable[] = {
  {
    &authentication_CredentialStore_8_0__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
