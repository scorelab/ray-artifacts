// This file was auto-generated by the C bindings generator.

#include "mojo/services/files/interfaces/directory.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/services/files/interfaces/file.mojom-c.h"
#include "mojo/services/files/interfaces/types.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_files_Directory_Read_Response_8_0__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_files_Directory_Read_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Read_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Stat_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Stat_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Touch_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Touch_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_OpenFile_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_OpenFile_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_OpenDirectory_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_OpenDirectory_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Rename_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Rename_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Delete_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_Directory_Delete_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_files_Directory_Read_Response_8_0__PointerEntry = {
  mojo_files_DirectoryEntry__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_files_Directory_Read_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_Directory_Read_Response__PointerTable[] = {
  {
    &mojo_files_Directory_Read_Response_8_0__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_Directory_Stat_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_Directory_Stat_Response__PointerTable[] = {
  {
    mojo_files_FileInformation__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_Directory_Touch_Request__PointerTable[] = {
  {
    mojo_files_TimespecOrNow__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_files_TimespecOrNow__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_Directory_Touch_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_Directory_OpenFile_Request__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    NULL, 8, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_Directory_OpenFile_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_Directory_OpenDirectory_Request__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    NULL, 8, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_Directory_OpenDirectory_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_Directory_Rename_Request__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_Directory_Rename_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_Directory_Delete_Request__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_Directory_Delete_Response__PointerTable[] = {};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
