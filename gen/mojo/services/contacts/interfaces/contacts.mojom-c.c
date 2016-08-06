// This file was auto-generated by the C bindings generator.

#include "mojo/services/contacts/interfaces/contacts.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry contacts_ContactsService_Get_Response_0_0__PointerEntry;
static struct MojomPointerTableArrayEntry contacts_ContactsService_GetEmails_Response_0_1__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry contacts_Contact__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_GetCount_Request__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_GetCount_Response__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_Get_Request__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_Get_Response__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_GetEmails_Request__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_GetEmails_Response__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_GetPhoto_Request__PointerTable[];
struct MojomPointerTableStructEntry contacts_ContactsService_GetPhoto_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry contacts_ContactsService_Get_Response_0_0__PointerEntry = {
  contacts_Contact__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry contacts_ContactsService_GetEmails_Response_0_1__PointerEntry = {
  (void*)&MojomStringPointerEntry, 0,
  MOJOM_ELEMENT_TYPE_ARRAY, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry contacts_Contact__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry contacts_ContactsService_GetCount_Request__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry contacts_ContactsService_GetCount_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry contacts_ContactsService_Get_Request__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry contacts_ContactsService_Get_Response__PointerTable[] = {
  {
    &contacts_ContactsService_Get_Response_0_0__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry contacts_ContactsService_GetEmails_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry contacts_ContactsService_GetEmails_Response__PointerTable[] = {
  {
    &contacts_ContactsService_GetEmails_Response_0_1__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry contacts_ContactsService_GetPhoto_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry contacts_ContactsService_GetPhoto_Response__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants: