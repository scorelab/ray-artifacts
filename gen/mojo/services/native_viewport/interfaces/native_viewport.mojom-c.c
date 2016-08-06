// This file was auto-generated by the C bindings generator.

#include "mojo/services/native_viewport/interfaces/native_viewport.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/services/geometry/interfaces/geometry.mojom-c.h"
#include "mojo/services/gpu/interfaces/context_provider.mojom-c.h"
#include "mojo/services/native_viewport/interfaces/native_viewport_event_dispatcher.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_ViewportMetrics__PointerTable[];
struct MojomPointerTableStructEntry mojo_SurfaceConfiguration__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_Create_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_Create_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_Show_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_Hide_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_Close_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_SetSize_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_SetEventDispatcher_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_GetContextProvider_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_RequestMetrics_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_NativeViewport_RequestMetrics_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_ViewportMetrics__PointerTable[] = {
  {
    mojo_Size__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_SurfaceConfiguration__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_NativeViewport_Create_Request__PointerTable[] = {
  {
    mojo_Size__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    mojo_SurfaceConfiguration__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_NativeViewport_Create_Response__PointerTable[] = {
  {
    mojo_ViewportMetrics__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_NativeViewport_Show_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_NativeViewport_Hide_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_NativeViewport_Close_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_NativeViewport_SetSize_Request__PointerTable[] = {
  {
    mojo_Size__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_NativeViewport_SetEventDispatcher_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_INTERFACE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_NativeViewport_GetContextProvider_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_NativeViewport_RequestMetrics_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_NativeViewport_RequestMetrics_Response__PointerTable[] = {
  {
    mojo_ViewportMetrics__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants: