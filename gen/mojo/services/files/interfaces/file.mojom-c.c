// This file was auto-generated by the C bindings generator.

#include "mojo/services/files/interfaces/file.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.
#include "mojo/services/files/interfaces/types.mojom-c.h"


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_files_File_Ioctl_Request_8_0__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_files_File_Ioctl_Response_8_1__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_files_File_Read_Response_8_2__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_files_File_Write_Request_0_3__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_files_File_Reopen_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Reopen_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Dup_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Dup_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_AsBuffer_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_AsBuffer_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Truncate_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Truncate_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_WriteFromStream_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_WriteFromStream_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Tell_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Tell_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Seek_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Seek_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Touch_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Touch_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Ioctl_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Ioctl_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_ReadToStream_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_ReadToStream_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Read_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Read_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Write_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Write_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Stat_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Stat_Response__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Close_Request__PointerTable[];
struct MojomPointerTableStructEntry mojo_files_File_Close_Response__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_files_File_Ioctl_Request_8_0__PointerEntry = {
  NULL, 0,
  MOJOM_ELEMENT_TYPE_POD, false,
};
static struct MojomPointerTableArrayEntry mojo_files_File_Ioctl_Response_8_1__PointerEntry = {
  NULL, 0,
  MOJOM_ELEMENT_TYPE_POD, false,
};
static struct MojomPointerTableArrayEntry mojo_files_File_Read_Response_8_2__PointerEntry = {
  NULL, 0,
  MOJOM_ELEMENT_TYPE_POD, false,
};
static struct MojomPointerTableArrayEntry mojo_files_File_Write_Request_0_3__PointerEntry = {
  NULL, 0,
  MOJOM_ELEMENT_TYPE_POD, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_files_File_Reopen_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Reopen_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Dup_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Dup_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_AsBuffer_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_AsBuffer_Response__PointerTable[] = {
  {
    NULL, 4, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Truncate_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Truncate_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_WriteFromStream_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_WriteFromStream_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Tell_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Tell_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Seek_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Seek_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Touch_Request__PointerTable[] = {
  {
    mojo_files_TimespecOrNow__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_files_TimespecOrNow__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Touch_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Ioctl_Request__PointerTable[] = {
  {
    &mojo_files_File_Ioctl_Request_8_0__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Ioctl_Response__PointerTable[] = {
  {
    &mojo_files_File_Ioctl_Response_8_1__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_ReadToStream_Request__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_HANDLE, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_ReadToStream_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Read_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Read_Response__PointerTable[] = {
  {
    &mojo_files_File_Read_Response_8_2__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Write_Request__PointerTable[] = {
  {
    &mojo_files_File_Write_Request_0_3__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Write_Response__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Stat_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Stat_Response__PointerTable[] = {
  {
    mojo_files_FileInformation__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_files_File_Close_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_files_File_Close_Response__PointerTable[] = {};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants:
