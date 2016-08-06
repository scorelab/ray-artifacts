// This file was auto-generated by the C bindings generator.

#include "mojo/services/sensors/interfaces/sensors.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry sensors_SensorData_16_0__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry sensors_SensorData__PointerTable[];
struct MojomPointerTableStructEntry sensors_SensorListener_OnSensorChanged_Request__PointerTable[];
struct MojomPointerTableStructEntry sensors_SensorListener_OnAccuracyChanged_Request__PointerTable[];
struct MojomPointerTableStructEntry sensors_SensorService_AddListener_Request__PointerTable[];
// Declarations for union type tables.
// Array type entry definitions.
static struct MojomPointerTableArrayEntry sensors_SensorData_16_0__PointerEntry = {
  NULL, 0,
  MOJOM_ELEMENT_TYPE_POD, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry sensors_SensorData__PointerTable[] = {
  {
    &sensors_SensorData_16_0__PointerEntry, 16, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry sensors_SensorListener_OnSensorChanged_Request__PointerTable[] = {
  {
    sensors_SensorData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry sensors_SensorListener_OnAccuracyChanged_Request__PointerTable[] = {};
struct MojomPointerTableStructEntry sensors_SensorService_AddListener_Request__PointerTable[] = {
  {
    NULL, 4, 0,
    MOJOM_ELEMENT_TYPE_INTERFACE, false, false,
  },
};
// Union type table definitions.




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants: