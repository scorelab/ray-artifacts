// This file was auto-generated by the C bindings generator.

#include "mojo/services/network/interfaces/url_loader_interceptor.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/public/interfaces/network/url_request.mojom-c.h"
#include "mojo/public/interfaces/network/url_response.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptorResponse__PointerTable[];
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptorFactory_Create_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptRequest_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptRequest_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptResponse_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptResponse_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptorResponse__PointerTable[] = {
  {
    mojo_URLRequest__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_URLResponse__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptorFactory_Create_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptRequest_Request__PointerTable[] = {
  {
    mojo_URLRequest__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptRequest_Response__PointerTable[] = {
  {
    mojo_URLLoaderInterceptorResponse__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptFollowRedirect_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptFollowRedirect_Response__PointerTable[] = {
  {
    mojo_URLLoaderInterceptorResponse__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptResponse_Request__PointerTable[] = {
  {
    mojo_URLResponse__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_URLLoaderInterceptor_InterceptResponse_Response__PointerTable[] = {
  {
    mojo_URLLoaderInterceptorResponse__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants: