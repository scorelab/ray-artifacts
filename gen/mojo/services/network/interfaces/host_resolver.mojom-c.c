// This file was auto-generated by the C bindings generator.

#include "mojo/services/network/interfaces/host_resolver.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/public/interfaces/network/network_error.mojom-c.h"
#include "mojo/services/network/interfaces/net_address.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_HostResolver_GetHostAddresses_Response_8_0__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_HostResolver_GetHostAddresses_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_HostResolver_GetHostAddresses_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_HostResolver_GetHostAddresses_Response_8_0__PointerEntry = {
  mojo_NetAddress__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_HostResolver_GetHostAddresses_Request__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_HostResolver_GetHostAddresses_Response__PointerTable[] = {
  {
    mojo_NetworkError__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    &mojo_HostResolver_GetHostAddresses_Response_8_0__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
