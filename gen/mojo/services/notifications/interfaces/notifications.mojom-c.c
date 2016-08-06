// This file was auto-generated by the C bindings generator.

#include "mojo/services/notifications/interfaces/notifications.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
// Declarations for struct type tables.
struct MojomPointerTableStructEntry notifications_NotificationData__PointerTable[];
struct MojomPointerTableStructEntry notifications_NotificationClient_OnSelected_Request__PointerTable[];
struct MojomPointerTableStructEntry notifications_NotificationClient_OnDismissed_Request__PointerTable[];
struct MojomPointerTableStructEntry notifications_Notification_Update_Request__PointerTable[];
struct MojomPointerTableStructEntry notifications_Notification_Cancel_Request__PointerTable[];
struct MojomPointerTableStructEntry notifications_NotificationService_Post_Request__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
// Struct type table definitions.
struct MojomPointerTableStructEntry notifications_NotificationData__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry notifications_NotificationClient_OnSelected_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry notifications_NotificationClient_OnDismissed_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry notifications_Notification_Update_Request__PointerTable[] = {
  {
    notifications_NotificationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry notifications_Notification_Cancel_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry notifications_NotificationService_Post_Request__PointerTable[] = {
  {
    notifications_NotificationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    NULL, 8, 0,
    MOJOM_ELEMENT_TYPE_INTERFACE, true, true,
  },

  {
    NULL, 16, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, true, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants: