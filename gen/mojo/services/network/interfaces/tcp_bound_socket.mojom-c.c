// This file was auto-generated by the C bindings generator.

#include "mojo/services/network/interfaces/tcp_bound_socket.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/public/interfaces/network/network_error.mojom-c.h"
#include "mojo/services/network/interfaces/net_address.mojom-c.h"
#include "mojo/services/network/interfaces/tcp_connected_socket.mojom-c.h"
#include "mojo/services/network/interfaces/tcp_server_socket.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_StartListening_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_StartListening_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_Connect_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_Connect_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_StartListening_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_StartListening_Response__PointerTable[] = {
  {
    mojo_NetworkError__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_Connect_Request__PointerTable[] = {
  {
    mojo_NetAddress__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    NULL, 8, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, true,
  },

  {
    NULL, 12, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, true,
  },

  {
    NULL, 16, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_TCPBoundSocket_Connect_Response__PointerTable[] = {
  {
    mojo_NetworkError__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
