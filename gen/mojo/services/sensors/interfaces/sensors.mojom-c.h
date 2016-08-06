// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_SENSORS_INTERFACES_SENSORS_MOJOM_C_H_
#define MOJO_SERVICES_SENSORS_INTERFACES_SENSORS_MOJOM_C_H_

#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>

#include "mojo/public/c/bindings/array.h"
#include "mojo/public/c/bindings/buffer.h"
#include "mojo/public/c/bindings/interface.h"
#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/bindings/map.h"
#include "mojo/public/c/bindings/string.h"
#include "mojo/public/c/bindings/validation.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Forward declarations for structs.
struct sensors_SensorData;
union sensors_SensorDataPtr {
  struct sensors_SensorData* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union sensors_SensorDataPtr) == 8,
              "union sensors_SensorDataPtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.
typedef uint32_t sensors_SensorType;
enum sensors_SensorType_Enum {
  sensors_SensorType_ACCELEROMETER = 0,
  sensors_SensorType_AMBIENT_TEMPERATURE = 1,
  sensors_SensorType_GAME_ROTATION_VECTOR = 2,
  sensors_SensorType_GEOMAGNETIC_ROTATION_VECTOR = 3,
  sensors_SensorType_GRAVITY = 4,
  sensors_SensorType_GYROSCOPE = 5,
  sensors_SensorType_GYROSCOPE_UNCALIBRATED = 6,
  sensors_SensorType_HEART_RATE = 7,
  sensors_SensorType_LIGHT = 8,
  sensors_SensorType_LINEAR_ACCELERATION = 9,
  sensors_SensorType_MAGNETIC_FIELD = 10,
  sensors_SensorType_MAGNETIC_FIELD_UNCALIBRATED = 11,
  sensors_SensorType_PRESSURE = 12,
  sensors_SensorType_PROXIMITY = 13,
  sensors_SensorType_RELATIVE_HUMIDITY = 14,
  sensors_SensorType_ROTATION_VECTOR = 15,
  sensors_SensorType_SIGNIFICANT_MOTION = 16,
  sensors_SensorType_STEP_COUNTER = 17,
  sensors_SensorType_STEP_DETECTOR = 18,
  
  sensors_SensorType__UNKNOWN__ = 0xFFFFFFFF,
};



// Union definitions.


// Struct definitions.
// -- sensors_SensorData --
// Enums
// Constants
// Struct definition
struct sensors_SensorData {
  struct MojomStructHeader header_;
  int32_t accuracy;  // offset,bit = 0,0
  uint8_t pad0_[4];  // padding
  int64_t time_stamp;  // offset,bit = 8,0
  union MojomArrayPtr values;  // offset,bit = 16,0
  
};

struct sensors_SensorData* sensors_SensorData_New(struct MojomBuffer* in_buffer);

void sensors_SensorData_Init(
  struct sensors_SensorData* in_data);

void sensors_SensorData_CloseAllHandles(
  struct sensors_SensorData* in_data);

struct sensors_SensorData* sensors_SensorData_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sensors_SensorData* in_data);

size_t sensors_SensorData_ComputeSerializedSize(
  const struct sensors_SensorData* in_data);

MojomValidationResult sensors_SensorData_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sensors_SensorData_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sensors_SensorData_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.
// --- sensors_SensorListener ---
#define sensors_SensorListener__ServiceName ((const char*)"")
#define sensors_SensorListener__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: OnAccuracyChanged

#define sensors_SensorListener_OnAccuracyChanged__Ordinal \
    ((uint32_t)0)
#define sensors_SensorListener_OnAccuracyChanged__MinVersion \
    ((uint32_t)0)

struct sensors_SensorListener_OnAccuracyChanged_Request;
// -- sensors_SensorListener_OnAccuracyChanged_Request --
// Enums
// Constants
// Struct definition
struct sensors_SensorListener_OnAccuracyChanged_Request {
  struct MojomStructHeader header_;
  int32_t accuracy;  // offset,bit = 0,0
  
};

struct sensors_SensorListener_OnAccuracyChanged_Request* sensors_SensorListener_OnAccuracyChanged_Request_New(struct MojomBuffer* in_buffer);

void sensors_SensorListener_OnAccuracyChanged_Request_Init(
  struct sensors_SensorListener_OnAccuracyChanged_Request* in_data);

void sensors_SensorListener_OnAccuracyChanged_Request_CloseAllHandles(
  struct sensors_SensorListener_OnAccuracyChanged_Request* in_data);

struct sensors_SensorListener_OnAccuracyChanged_Request* sensors_SensorListener_OnAccuracyChanged_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sensors_SensorListener_OnAccuracyChanged_Request* in_data);

size_t sensors_SensorListener_OnAccuracyChanged_Request_ComputeSerializedSize(
  const struct sensors_SensorListener_OnAccuracyChanged_Request* in_data);

MojomValidationResult sensors_SensorListener_OnAccuracyChanged_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sensors_SensorListener_OnAccuracyChanged_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sensors_SensorListener_OnAccuracyChanged_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: OnSensorChanged

#define sensors_SensorListener_OnSensorChanged__Ordinal \
    ((uint32_t)1)
#define sensors_SensorListener_OnSensorChanged__MinVersion \
    ((uint32_t)0)

struct sensors_SensorListener_OnSensorChanged_Request;
// -- sensors_SensorListener_OnSensorChanged_Request --
// Enums
// Constants
// Struct definition
struct sensors_SensorListener_OnSensorChanged_Request {
  struct MojomStructHeader header_;
  union sensors_SensorDataPtr data;  // offset,bit = 0,0
  
};

struct sensors_SensorListener_OnSensorChanged_Request* sensors_SensorListener_OnSensorChanged_Request_New(struct MojomBuffer* in_buffer);

void sensors_SensorListener_OnSensorChanged_Request_Init(
  struct sensors_SensorListener_OnSensorChanged_Request* in_data);

void sensors_SensorListener_OnSensorChanged_Request_CloseAllHandles(
  struct sensors_SensorListener_OnSensorChanged_Request* in_data);

struct sensors_SensorListener_OnSensorChanged_Request* sensors_SensorListener_OnSensorChanged_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sensors_SensorListener_OnSensorChanged_Request* in_data);

size_t sensors_SensorListener_OnSensorChanged_Request_ComputeSerializedSize(
  const struct sensors_SensorListener_OnSensorChanged_Request* in_data);

MojomValidationResult sensors_SensorListener_OnSensorChanged_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sensors_SensorListener_OnSensorChanged_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sensors_SensorListener_OnSensorChanged_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);





// --- sensors_SensorService ---
#define sensors_SensorService__ServiceName ((const char*)"sensors::SensorService")
#define sensors_SensorService__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: AddListener

#define sensors_SensorService_AddListener__Ordinal \
    ((uint32_t)0)
#define sensors_SensorService_AddListener__MinVersion \
    ((uint32_t)0)

struct sensors_SensorService_AddListener_Request;
// -- sensors_SensorService_AddListener_Request --
// Enums
// Constants
// Struct definition
struct sensors_SensorService_AddListener_Request {
  struct MojomStructHeader header_;
  sensors_SensorType type;  // offset,bit = 0,0
  struct MojomInterfaceData listener;  // offset,bit = 4,0
  uint8_t pad1_[4];  // padding
  
};

struct sensors_SensorService_AddListener_Request* sensors_SensorService_AddListener_Request_New(struct MojomBuffer* in_buffer);

void sensors_SensorService_AddListener_Request_Init(
  struct sensors_SensorService_AddListener_Request* in_data);

void sensors_SensorService_AddListener_Request_CloseAllHandles(
  struct sensors_SensorService_AddListener_Request* in_data);

struct sensors_SensorService_AddListener_Request* sensors_SensorService_AddListener_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sensors_SensorService_AddListener_Request* in_data);

size_t sensors_SensorService_AddListener_Request_ComputeSerializedSize(
  const struct sensors_SensorService_AddListener_Request* in_data);

MojomValidationResult sensors_SensorService_AddListener_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sensors_SensorService_AddListener_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sensors_SensorService_AddListener_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry sensors_SensorData__PointerTable[];
extern struct MojomPointerTableStructEntry sensors_SensorListener_OnSensorChanged_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sensors_SensorListener_OnAccuracyChanged_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sensors_SensorService_AddListener_Request__PointerTable[];


#endif  // MOJO_SERVICES_SENSORS_INTERFACES_SENSORS_MOJOM_C_H_