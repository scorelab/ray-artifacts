// This file was auto-generated by the C bindings generator.

#include "mojo/services/surfaces/interfaces/surfaces.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/services/geometry/interfaces/geometry.mojom-c.h"
#include "mojo/services/surfaces/interfaces/quads.mojom-c.h"
#include "mojo/services/surfaces/interfaces/surface_id.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_Mailbox_0_0__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_Frame_0_1__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_Frame_8_2__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_ResourceReturner_ReturnResources_Request_0_3__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_Mailbox__PointerTable[];
struct MojomPointerTableStructEntry mojo_MailboxHolder__PointerTable[];
struct MojomPointerTableStructEntry mojo_TransferableResource__PointerTable[];
struct MojomPointerTableStructEntry mojo_ReturnedResource__PointerTable[];
struct MojomPointerTableStructEntry mojo_Frame__PointerTable[];
struct MojomPointerTableStructEntry mojo_ResourceReturner_ReturnResources_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_Surface_GetIdNamespace_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_Surface_GetIdNamespace_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_Surface_SetResourceReturner_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_Surface_CreateSurface_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_Surface_SubmitFrame_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_Surface_SubmitFrame_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_Surface_DestroySurface_Request__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_Mailbox_0_0__PointerEntry = {
  NULL, 64,
  MOJOM_ELEMENT_TYPE_POD, false,
};
static struct MojomPointerTableArrayEntry mojo_Frame_0_1__PointerEntry = {
  mojo_TransferableResource__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_Frame_8_2__PointerEntry = {
  mojo_Pass__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_ResourceReturner_ReturnResources_Request_0_3__PointerEntry = {
  mojo_ReturnedResource__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_Mailbox__PointerTable[] = {
  {
    &mojo_Mailbox_0_0__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_MailboxHolder__PointerTable[] = {
  {
    mojo_Mailbox__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_TransferableResource__PointerTable[] = {
  {
    mojo_Size__PointerTable, 16, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    mojo_MailboxHolder__PointerTable, 24, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_ReturnedResource__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_Frame__PointerTable[] = {
  {
    &mojo_Frame_0_1__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    &mojo_Frame_8_2__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_ResourceReturner_ReturnResources_Request__PointerTable[] = {
  {
    &mojo_ResourceReturner_ReturnResources_Request_0_3__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_Surface_GetIdNamespace_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_Surface_GetIdNamespace_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_Surface_SetResourceReturner_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_INTERFACE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_Surface_CreateSurface_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_Surface_SubmitFrame_Request__PointerTable[] = {
  {
    mojo_Frame__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_Surface_SubmitFrame_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_Surface_DestroySurface_Request__PointerTable[] = {};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
