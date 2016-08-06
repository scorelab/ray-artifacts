// This file was auto-generated by the C bindings generator.

#ifndef PLASMA_SERVICE_PLASMA_MOJOM_C_H_
#define PLASMA_SERVICE_PLASMA_MOJOM_C_H_

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
struct plasma_service_ObjectInfo;
union plasma_service_ObjectInfoPtr {
  struct plasma_service_ObjectInfo* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union plasma_service_ObjectInfoPtr) == 8,
              "union plasma_service_ObjectInfoPtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- plasma_service_ObjectInfo --
// Enums
// Constants
// Struct definition
struct plasma_service_ObjectInfo {
  struct MojomStructHeader header_;
  union MojomStringPtr name;  // offset,bit = 0,0
  uint64_t size;  // offset,bit = 8,0
  int64_t create_time;  // offset,bit = 16,0
  int64_t construct_duration;  // offset,bit = 24,0
  int64_t creator_id;  // offset,bit = 32,0
  
};

struct plasma_service_ObjectInfo* plasma_service_ObjectInfo_New(struct MojomBuffer* in_buffer);

void plasma_service_ObjectInfo_Init(
  struct plasma_service_ObjectInfo* in_data);

void plasma_service_ObjectInfo_CloseAllHandles(
  struct plasma_service_ObjectInfo* in_data);

struct plasma_service_ObjectInfo* plasma_service_ObjectInfo_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_ObjectInfo* in_data);

size_t plasma_service_ObjectInfo_ComputeSerializedSize(
  const struct plasma_service_ObjectInfo* in_data);

MojomValidationResult plasma_service_ObjectInfo_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_ObjectInfo_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_ObjectInfo_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.
// --- plasma_service_Plasma ---
#define plasma_service_Plasma__ServiceName ((const char*)"plasma::service::Plasma")
#define plasma_service_Plasma__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: ListObjects

#define plasma_service_Plasma_ListObjects__Ordinal \
    ((uint32_t)4)
#define plasma_service_Plasma_ListObjects__MinVersion \
    ((uint32_t)0)

struct plasma_service_Plasma_ListObjects_Request;
// -- plasma_service_Plasma_ListObjects_Request --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_ListObjects_Request {
  struct MojomStructHeader header_;
  
};

struct plasma_service_Plasma_ListObjects_Request* plasma_service_Plasma_ListObjects_Request_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_ListObjects_Request_Init(
  struct plasma_service_Plasma_ListObjects_Request* in_data);

void plasma_service_Plasma_ListObjects_Request_CloseAllHandles(
  struct plasma_service_Plasma_ListObjects_Request* in_data);

struct plasma_service_Plasma_ListObjects_Request* plasma_service_Plasma_ListObjects_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_ListObjects_Request* in_data);

size_t plasma_service_Plasma_ListObjects_Request_ComputeSerializedSize(
  const struct plasma_service_Plasma_ListObjects_Request* in_data);

MojomValidationResult plasma_service_Plasma_ListObjects_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_ListObjects_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_ListObjects_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct plasma_service_Plasma_ListObjects_Response;
// -- plasma_service_Plasma_ListObjects_Response --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_ListObjects_Response {
  struct MojomStructHeader header_;
  union MojomArrayPtr info;  // offset,bit = 0,0
  
};

struct plasma_service_Plasma_ListObjects_Response* plasma_service_Plasma_ListObjects_Response_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_ListObjects_Response_Init(
  struct plasma_service_Plasma_ListObjects_Response* in_data);

void plasma_service_Plasma_ListObjects_Response_CloseAllHandles(
  struct plasma_service_Plasma_ListObjects_Response* in_data);

struct plasma_service_Plasma_ListObjects_Response* plasma_service_Plasma_ListObjects_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_ListObjects_Response* in_data);

size_t plasma_service_Plasma_ListObjects_Response_ComputeSerializedSize(
  const struct plasma_service_Plasma_ListObjects_Response* in_data);

MojomValidationResult plasma_service_Plasma_ListObjects_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_ListObjects_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_ListObjects_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateObject

#define plasma_service_Plasma_CreateObject__Ordinal \
    ((uint32_t)0)
#define plasma_service_Plasma_CreateObject__MinVersion \
    ((uint32_t)0)

struct plasma_service_Plasma_CreateObject_Request;
// -- plasma_service_Plasma_CreateObject_Request --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_CreateObject_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr object_id;  // offset,bit = 0,0
  uint64_t size;  // offset,bit = 8,0
  union MojomStringPtr name;  // offset,bit = 16,0
  int64_t creator_id;  // offset,bit = 24,0
  
};

struct plasma_service_Plasma_CreateObject_Request* plasma_service_Plasma_CreateObject_Request_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_CreateObject_Request_Init(
  struct plasma_service_Plasma_CreateObject_Request* in_data);

void plasma_service_Plasma_CreateObject_Request_CloseAllHandles(
  struct plasma_service_Plasma_CreateObject_Request* in_data);

struct plasma_service_Plasma_CreateObject_Request* plasma_service_Plasma_CreateObject_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_CreateObject_Request* in_data);

size_t plasma_service_Plasma_CreateObject_Request_ComputeSerializedSize(
  const struct plasma_service_Plasma_CreateObject_Request* in_data);

MojomValidationResult plasma_service_Plasma_CreateObject_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_CreateObject_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_CreateObject_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct plasma_service_Plasma_CreateObject_Response;
// -- plasma_service_Plasma_CreateObject_Response --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_CreateObject_Response {
  struct MojomStructHeader header_;
  MojoHandle buffer;  // offset,bit = 0,0
  
};

struct plasma_service_Plasma_CreateObject_Response* plasma_service_Plasma_CreateObject_Response_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_CreateObject_Response_Init(
  struct plasma_service_Plasma_CreateObject_Response* in_data);

void plasma_service_Plasma_CreateObject_Response_CloseAllHandles(
  struct plasma_service_Plasma_CreateObject_Response* in_data);

struct plasma_service_Plasma_CreateObject_Response* plasma_service_Plasma_CreateObject_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_CreateObject_Response* in_data);

size_t plasma_service_Plasma_CreateObject_Response_ComputeSerializedSize(
  const struct plasma_service_Plasma_CreateObject_Response* in_data);

MojomValidationResult plasma_service_Plasma_CreateObject_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_CreateObject_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_CreateObject_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: ResizeObject

#define plasma_service_Plasma_ResizeObject__Ordinal \
    ((uint32_t)1)
#define plasma_service_Plasma_ResizeObject__MinVersion \
    ((uint32_t)0)

struct plasma_service_Plasma_ResizeObject_Request;
// -- plasma_service_Plasma_ResizeObject_Request --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_ResizeObject_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr object_id;  // offset,bit = 0,0
  uint64_t new_size;  // offset,bit = 8,0
  
};

struct plasma_service_Plasma_ResizeObject_Request* plasma_service_Plasma_ResizeObject_Request_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_ResizeObject_Request_Init(
  struct plasma_service_Plasma_ResizeObject_Request* in_data);

void plasma_service_Plasma_ResizeObject_Request_CloseAllHandles(
  struct plasma_service_Plasma_ResizeObject_Request* in_data);

struct plasma_service_Plasma_ResizeObject_Request* plasma_service_Plasma_ResizeObject_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_ResizeObject_Request* in_data);

size_t plasma_service_Plasma_ResizeObject_Request_ComputeSerializedSize(
  const struct plasma_service_Plasma_ResizeObject_Request* in_data);

MojomValidationResult plasma_service_Plasma_ResizeObject_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_ResizeObject_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_ResizeObject_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct plasma_service_Plasma_ResizeObject_Response;
// -- plasma_service_Plasma_ResizeObject_Response --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_ResizeObject_Response {
  struct MojomStructHeader header_;
  MojoHandle buffer;  // offset,bit = 0,0
  
};

struct plasma_service_Plasma_ResizeObject_Response* plasma_service_Plasma_ResizeObject_Response_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_ResizeObject_Response_Init(
  struct plasma_service_Plasma_ResizeObject_Response* in_data);

void plasma_service_Plasma_ResizeObject_Response_CloseAllHandles(
  struct plasma_service_Plasma_ResizeObject_Response* in_data);

struct plasma_service_Plasma_ResizeObject_Response* plasma_service_Plasma_ResizeObject_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_ResizeObject_Response* in_data);

size_t plasma_service_Plasma_ResizeObject_Response_ComputeSerializedSize(
  const struct plasma_service_Plasma_ResizeObject_Response* in_data);

MojomValidationResult plasma_service_Plasma_ResizeObject_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_ResizeObject_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_ResizeObject_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: SealObject

#define plasma_service_Plasma_SealObject__Ordinal \
    ((uint32_t)2)
#define plasma_service_Plasma_SealObject__MinVersion \
    ((uint32_t)0)

struct plasma_service_Plasma_SealObject_Request;
// -- plasma_service_Plasma_SealObject_Request --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_SealObject_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr object_id;  // offset,bit = 0,0
  
};

struct plasma_service_Plasma_SealObject_Request* plasma_service_Plasma_SealObject_Request_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_SealObject_Request_Init(
  struct plasma_service_Plasma_SealObject_Request* in_data);

void plasma_service_Plasma_SealObject_Request_CloseAllHandles(
  struct plasma_service_Plasma_SealObject_Request* in_data);

struct plasma_service_Plasma_SealObject_Request* plasma_service_Plasma_SealObject_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_SealObject_Request* in_data);

size_t plasma_service_Plasma_SealObject_Request_ComputeSerializedSize(
  const struct plasma_service_Plasma_SealObject_Request* in_data);

MojomValidationResult plasma_service_Plasma_SealObject_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_SealObject_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_SealObject_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetObject

#define plasma_service_Plasma_GetObject__Ordinal \
    ((uint32_t)3)
#define plasma_service_Plasma_GetObject__MinVersion \
    ((uint32_t)0)

struct plasma_service_Plasma_GetObject_Request;
// -- plasma_service_Plasma_GetObject_Request --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_GetObject_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr object_id;  // offset,bit = 0,0
  bool block : 1;  // offset,bit = 8,0
  
};

struct plasma_service_Plasma_GetObject_Request* plasma_service_Plasma_GetObject_Request_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_GetObject_Request_Init(
  struct plasma_service_Plasma_GetObject_Request* in_data);

void plasma_service_Plasma_GetObject_Request_CloseAllHandles(
  struct plasma_service_Plasma_GetObject_Request* in_data);

struct plasma_service_Plasma_GetObject_Request* plasma_service_Plasma_GetObject_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_GetObject_Request* in_data);

size_t plasma_service_Plasma_GetObject_Request_ComputeSerializedSize(
  const struct plasma_service_Plasma_GetObject_Request* in_data);

MojomValidationResult plasma_service_Plasma_GetObject_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_GetObject_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_GetObject_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct plasma_service_Plasma_GetObject_Response;
// -- plasma_service_Plasma_GetObject_Response --
// Enums
// Constants
// Struct definition
struct plasma_service_Plasma_GetObject_Response {
  struct MojomStructHeader header_;
  MojoHandle buffer;  // offset,bit = 0,0
  uint64_t size;  // offset,bit = 8,0
  
};

struct plasma_service_Plasma_GetObject_Response* plasma_service_Plasma_GetObject_Response_New(struct MojomBuffer* in_buffer);

void plasma_service_Plasma_GetObject_Response_Init(
  struct plasma_service_Plasma_GetObject_Response* in_data);

void plasma_service_Plasma_GetObject_Response_CloseAllHandles(
  struct plasma_service_Plasma_GetObject_Response* in_data);

struct plasma_service_Plasma_GetObject_Response* plasma_service_Plasma_GetObject_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct plasma_service_Plasma_GetObject_Response* in_data);

size_t plasma_service_Plasma_GetObject_Response_ComputeSerializedSize(
  const struct plasma_service_Plasma_GetObject_Response* in_data);

MojomValidationResult plasma_service_Plasma_GetObject_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult plasma_service_Plasma_GetObject_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult plasma_service_Plasma_GetObject_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry plasma_service_ObjectInfo__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_CreateObject_Request__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_CreateObject_Response__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_ResizeObject_Request__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_ResizeObject_Response__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_SealObject_Request__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_GetObject_Request__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_GetObject_Response__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_ListObjects_Request__PointerTable[];
extern struct MojomPointerTableStructEntry plasma_service_Plasma_ListObjects_Response__PointerTable[];


#endif  // PLASMA_SERVICE_PLASMA_MOJOM_C_H_