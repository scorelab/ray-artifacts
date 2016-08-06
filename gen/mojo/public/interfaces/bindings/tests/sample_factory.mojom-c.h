// This file was auto-generated by the C bindings generator.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_C_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_C_H_

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
#include "mojo/public/interfaces/bindings/tests/sample_import.mojom-c.h"


// Forward declarations for structs.
struct sample_Request;
union sample_RequestPtr {
  struct sample_Request* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union sample_RequestPtr) == 8,
              "union sample_RequestPtr must be 8 bytes");

struct sample_Response;
union sample_ResponsePtr {
  struct sample_Response* ptr;
  uint64_t offset;
};
MOJO_STATIC_ASSERT(sizeof(union sample_ResponsePtr) == 8,
              "union sample_ResponsePtr must be 8 bytes");

// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.
// -- sample_Request --
// Enums
// Constants
// Struct definition
struct sample_Request {
  struct MojomStructHeader header_;
  int32_t x;  // offset,bit = 0,0
  MojoHandle pipe;  // offset,bit = 4,0
  union MojomArrayPtr more_pipes;  // offset,bit = 8,0
  struct MojomInterfaceData obj;  // offset,bit = 16,0
  
};

struct sample_Request* sample_Request_New(struct MojomBuffer* in_buffer);

void sample_Request_Init(
  struct sample_Request* in_data);

void sample_Request_CloseAllHandles(
  struct sample_Request* in_data);

struct sample_Request* sample_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Request* in_data);

size_t sample_Request_ComputeSerializedSize(
  const struct sample_Request* in_data);

MojomValidationResult sample_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


// -- sample_Response --
// Enums
// Constants
// Struct definition
struct sample_Response {
  struct MojomStructHeader header_;
  int32_t x;  // offset,bit = 0,0
  MojoHandle pipe;  // offset,bit = 4,0
  uint8_t pad1_[4];  // padding
  
};

struct sample_Response* sample_Response_New(struct MojomBuffer* in_buffer);

void sample_Response_Init(
  struct sample_Response* in_data);

void sample_Response_CloseAllHandles(
  struct sample_Response* in_data);

struct sample_Response* sample_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Response* in_data);

size_t sample_Response_ComputeSerializedSize(
  const struct sample_Response* in_data);

MojomValidationResult sample_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);




// Interface definitions.
// --- sample_NamedObject ---
#define sample_NamedObject__ServiceName ((const char*)"sample::NamedObject")
#define sample_NamedObject__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: SetName

#define sample_NamedObject_SetName__Ordinal \
    ((uint32_t)0)
#define sample_NamedObject_SetName__MinVersion \
    ((uint32_t)0)

struct sample_NamedObject_SetName_Request;
// -- sample_NamedObject_SetName_Request --
// Enums
// Constants
// Struct definition
struct sample_NamedObject_SetName_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr name;  // offset,bit = 0,0
  
};

struct sample_NamedObject_SetName_Request* sample_NamedObject_SetName_Request_New(struct MojomBuffer* in_buffer);

void sample_NamedObject_SetName_Request_Init(
  struct sample_NamedObject_SetName_Request* in_data);

void sample_NamedObject_SetName_Request_CloseAllHandles(
  struct sample_NamedObject_SetName_Request* in_data);

struct sample_NamedObject_SetName_Request* sample_NamedObject_SetName_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_NamedObject_SetName_Request* in_data);

size_t sample_NamedObject_SetName_Request_ComputeSerializedSize(
  const struct sample_NamedObject_SetName_Request* in_data);

MojomValidationResult sample_NamedObject_SetName_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_NamedObject_SetName_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_NamedObject_SetName_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetName

#define sample_NamedObject_GetName__Ordinal \
    ((uint32_t)1)
#define sample_NamedObject_GetName__MinVersion \
    ((uint32_t)0)

struct sample_NamedObject_GetName_Request;
// -- sample_NamedObject_GetName_Request --
// Enums
// Constants
// Struct definition
struct sample_NamedObject_GetName_Request {
  struct MojomStructHeader header_;
  
};

struct sample_NamedObject_GetName_Request* sample_NamedObject_GetName_Request_New(struct MojomBuffer* in_buffer);

void sample_NamedObject_GetName_Request_Init(
  struct sample_NamedObject_GetName_Request* in_data);

void sample_NamedObject_GetName_Request_CloseAllHandles(
  struct sample_NamedObject_GetName_Request* in_data);

struct sample_NamedObject_GetName_Request* sample_NamedObject_GetName_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_NamedObject_GetName_Request* in_data);

size_t sample_NamedObject_GetName_Request_ComputeSerializedSize(
  const struct sample_NamedObject_GetName_Request* in_data);

MojomValidationResult sample_NamedObject_GetName_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_NamedObject_GetName_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_NamedObject_GetName_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct sample_NamedObject_GetName_Response;
// -- sample_NamedObject_GetName_Response --
// Enums
// Constants
// Struct definition
struct sample_NamedObject_GetName_Response {
  struct MojomStructHeader header_;
  union MojomStringPtr name;  // offset,bit = 0,0
  
};

struct sample_NamedObject_GetName_Response* sample_NamedObject_GetName_Response_New(struct MojomBuffer* in_buffer);

void sample_NamedObject_GetName_Response_Init(
  struct sample_NamedObject_GetName_Response* in_data);

void sample_NamedObject_GetName_Response_CloseAllHandles(
  struct sample_NamedObject_GetName_Response* in_data);

struct sample_NamedObject_GetName_Response* sample_NamedObject_GetName_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_NamedObject_GetName_Response* in_data);

size_t sample_NamedObject_GetName_Response_ComputeSerializedSize(
  const struct sample_NamedObject_GetName_Response* in_data);

MojomValidationResult sample_NamedObject_GetName_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_NamedObject_GetName_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_NamedObject_GetName_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);





// --- sample_Factory ---
#define sample_Factory__ServiceName ((const char*)"")
#define sample_Factory__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: DoStuff

#define sample_Factory_DoStuff__Ordinal \
    ((uint32_t)0)
#define sample_Factory_DoStuff__MinVersion \
    ((uint32_t)0)

struct sample_Factory_DoStuff_Request;
// -- sample_Factory_DoStuff_Request --
// Enums
// Constants
// Struct definition
struct sample_Factory_DoStuff_Request {
  struct MojomStructHeader header_;
  union sample_RequestPtr request;  // offset,bit = 0,0
  MojoHandle pipe;  // offset,bit = 8,0
  
};

struct sample_Factory_DoStuff_Request* sample_Factory_DoStuff_Request_New(struct MojomBuffer* in_buffer);

void sample_Factory_DoStuff_Request_Init(
  struct sample_Factory_DoStuff_Request* in_data);

void sample_Factory_DoStuff_Request_CloseAllHandles(
  struct sample_Factory_DoStuff_Request* in_data);

struct sample_Factory_DoStuff_Request* sample_Factory_DoStuff_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_DoStuff_Request* in_data);

size_t sample_Factory_DoStuff_Request_ComputeSerializedSize(
  const struct sample_Factory_DoStuff_Request* in_data);

MojomValidationResult sample_Factory_DoStuff_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_DoStuff_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_DoStuff_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct sample_Factory_DoStuff_Response;
// -- sample_Factory_DoStuff_Response --
// Enums
// Constants
// Struct definition
struct sample_Factory_DoStuff_Response {
  struct MojomStructHeader header_;
  union sample_ResponsePtr response;  // offset,bit = 0,0
  union MojomStringPtr text;  // offset,bit = 8,0
  
};

struct sample_Factory_DoStuff_Response* sample_Factory_DoStuff_Response_New(struct MojomBuffer* in_buffer);

void sample_Factory_DoStuff_Response_Init(
  struct sample_Factory_DoStuff_Response* in_data);

void sample_Factory_DoStuff_Response_CloseAllHandles(
  struct sample_Factory_DoStuff_Response* in_data);

struct sample_Factory_DoStuff_Response* sample_Factory_DoStuff_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_DoStuff_Response* in_data);

size_t sample_Factory_DoStuff_Response_ComputeSerializedSize(
  const struct sample_Factory_DoStuff_Response* in_data);

MojomValidationResult sample_Factory_DoStuff_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_DoStuff_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_DoStuff_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: DoStuff2

#define sample_Factory_DoStuff2__Ordinal \
    ((uint32_t)1)
#define sample_Factory_DoStuff2__MinVersion \
    ((uint32_t)0)

struct sample_Factory_DoStuff2_Request;
// -- sample_Factory_DoStuff2_Request --
// Enums
// Constants
// Struct definition
struct sample_Factory_DoStuff2_Request {
  struct MojomStructHeader header_;
  MojoHandle pipe;  // offset,bit = 0,0
  
};

struct sample_Factory_DoStuff2_Request* sample_Factory_DoStuff2_Request_New(struct MojomBuffer* in_buffer);

void sample_Factory_DoStuff2_Request_Init(
  struct sample_Factory_DoStuff2_Request* in_data);

void sample_Factory_DoStuff2_Request_CloseAllHandles(
  struct sample_Factory_DoStuff2_Request* in_data);

struct sample_Factory_DoStuff2_Request* sample_Factory_DoStuff2_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_DoStuff2_Request* in_data);

size_t sample_Factory_DoStuff2_Request_ComputeSerializedSize(
  const struct sample_Factory_DoStuff2_Request* in_data);

MojomValidationResult sample_Factory_DoStuff2_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_DoStuff2_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_DoStuff2_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct sample_Factory_DoStuff2_Response;
// -- sample_Factory_DoStuff2_Response --
// Enums
// Constants
// Struct definition
struct sample_Factory_DoStuff2_Response {
  struct MojomStructHeader header_;
  union MojomStringPtr text;  // offset,bit = 0,0
  
};

struct sample_Factory_DoStuff2_Response* sample_Factory_DoStuff2_Response_New(struct MojomBuffer* in_buffer);

void sample_Factory_DoStuff2_Response_Init(
  struct sample_Factory_DoStuff2_Response* in_data);

void sample_Factory_DoStuff2_Response_CloseAllHandles(
  struct sample_Factory_DoStuff2_Response* in_data);

struct sample_Factory_DoStuff2_Response* sample_Factory_DoStuff2_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_DoStuff2_Response* in_data);

size_t sample_Factory_DoStuff2_Response_ComputeSerializedSize(
  const struct sample_Factory_DoStuff2_Response* in_data);

MojomValidationResult sample_Factory_DoStuff2_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_DoStuff2_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_DoStuff2_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: CreateNamedObject

#define sample_Factory_CreateNamedObject__Ordinal \
    ((uint32_t)2)
#define sample_Factory_CreateNamedObject__MinVersion \
    ((uint32_t)0)

struct sample_Factory_CreateNamedObject_Request;
// -- sample_Factory_CreateNamedObject_Request --
// Enums
// Constants
// Struct definition
struct sample_Factory_CreateNamedObject_Request {
  struct MojomStructHeader header_;
  MojoHandle obj;  // offset,bit = 0,0
  
};

struct sample_Factory_CreateNamedObject_Request* sample_Factory_CreateNamedObject_Request_New(struct MojomBuffer* in_buffer);

void sample_Factory_CreateNamedObject_Request_Init(
  struct sample_Factory_CreateNamedObject_Request* in_data);

void sample_Factory_CreateNamedObject_Request_CloseAllHandles(
  struct sample_Factory_CreateNamedObject_Request* in_data);

struct sample_Factory_CreateNamedObject_Request* sample_Factory_CreateNamedObject_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_CreateNamedObject_Request* in_data);

size_t sample_Factory_CreateNamedObject_Request_ComputeSerializedSize(
  const struct sample_Factory_CreateNamedObject_Request* in_data);

MojomValidationResult sample_Factory_CreateNamedObject_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_CreateNamedObject_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_CreateNamedObject_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: RequestImportedInterface

#define sample_Factory_RequestImportedInterface__Ordinal \
    ((uint32_t)3)
#define sample_Factory_RequestImportedInterface__MinVersion \
    ((uint32_t)0)

struct sample_Factory_RequestImportedInterface_Request;
// -- sample_Factory_RequestImportedInterface_Request --
// Enums
// Constants
// Struct definition
struct sample_Factory_RequestImportedInterface_Request {
  struct MojomStructHeader header_;
  MojoHandle obj;  // offset,bit = 0,0
  
};

struct sample_Factory_RequestImportedInterface_Request* sample_Factory_RequestImportedInterface_Request_New(struct MojomBuffer* in_buffer);

void sample_Factory_RequestImportedInterface_Request_Init(
  struct sample_Factory_RequestImportedInterface_Request* in_data);

void sample_Factory_RequestImportedInterface_Request_CloseAllHandles(
  struct sample_Factory_RequestImportedInterface_Request* in_data);

struct sample_Factory_RequestImportedInterface_Request* sample_Factory_RequestImportedInterface_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_RequestImportedInterface_Request* in_data);

size_t sample_Factory_RequestImportedInterface_Request_ComputeSerializedSize(
  const struct sample_Factory_RequestImportedInterface_Request* in_data);

MojomValidationResult sample_Factory_RequestImportedInterface_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_RequestImportedInterface_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_RequestImportedInterface_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct sample_Factory_RequestImportedInterface_Response;
// -- sample_Factory_RequestImportedInterface_Response --
// Enums
// Constants
// Struct definition
struct sample_Factory_RequestImportedInterface_Response {
  struct MojomStructHeader header_;
  MojoHandle obj;  // offset,bit = 0,0
  
};

struct sample_Factory_RequestImportedInterface_Response* sample_Factory_RequestImportedInterface_Response_New(struct MojomBuffer* in_buffer);

void sample_Factory_RequestImportedInterface_Response_Init(
  struct sample_Factory_RequestImportedInterface_Response* in_data);

void sample_Factory_RequestImportedInterface_Response_CloseAllHandles(
  struct sample_Factory_RequestImportedInterface_Response* in_data);

struct sample_Factory_RequestImportedInterface_Response* sample_Factory_RequestImportedInterface_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_RequestImportedInterface_Response* in_data);

size_t sample_Factory_RequestImportedInterface_Response_ComputeSerializedSize(
  const struct sample_Factory_RequestImportedInterface_Response* in_data);

MojomValidationResult sample_Factory_RequestImportedInterface_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_RequestImportedInterface_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_RequestImportedInterface_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: TakeImportedInterface

#define sample_Factory_TakeImportedInterface__Ordinal \
    ((uint32_t)4)
#define sample_Factory_TakeImportedInterface__MinVersion \
    ((uint32_t)0)

struct sample_Factory_TakeImportedInterface_Request;
// -- sample_Factory_TakeImportedInterface_Request --
// Enums
// Constants
// Struct definition
struct sample_Factory_TakeImportedInterface_Request {
  struct MojomStructHeader header_;
  struct MojomInterfaceData obj;  // offset,bit = 0,0
  
};

struct sample_Factory_TakeImportedInterface_Request* sample_Factory_TakeImportedInterface_Request_New(struct MojomBuffer* in_buffer);

void sample_Factory_TakeImportedInterface_Request_Init(
  struct sample_Factory_TakeImportedInterface_Request* in_data);

void sample_Factory_TakeImportedInterface_Request_CloseAllHandles(
  struct sample_Factory_TakeImportedInterface_Request* in_data);

struct sample_Factory_TakeImportedInterface_Request* sample_Factory_TakeImportedInterface_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_TakeImportedInterface_Request* in_data);

size_t sample_Factory_TakeImportedInterface_Request_ComputeSerializedSize(
  const struct sample_Factory_TakeImportedInterface_Request* in_data);

MojomValidationResult sample_Factory_TakeImportedInterface_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_TakeImportedInterface_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_TakeImportedInterface_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct sample_Factory_TakeImportedInterface_Response;
// -- sample_Factory_TakeImportedInterface_Response --
// Enums
// Constants
// Struct definition
struct sample_Factory_TakeImportedInterface_Response {
  struct MojomStructHeader header_;
  struct MojomInterfaceData obj;  // offset,bit = 0,0
  
};

struct sample_Factory_TakeImportedInterface_Response* sample_Factory_TakeImportedInterface_Response_New(struct MojomBuffer* in_buffer);

void sample_Factory_TakeImportedInterface_Response_Init(
  struct sample_Factory_TakeImportedInterface_Response* in_data);

void sample_Factory_TakeImportedInterface_Response_CloseAllHandles(
  struct sample_Factory_TakeImportedInterface_Response* in_data);

struct sample_Factory_TakeImportedInterface_Response* sample_Factory_TakeImportedInterface_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct sample_Factory_TakeImportedInterface_Response* in_data);

size_t sample_Factory_TakeImportedInterface_Response_ComputeSerializedSize(
  const struct sample_Factory_TakeImportedInterface_Response* in_data);

MojomValidationResult sample_Factory_TakeImportedInterface_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult sample_Factory_TakeImportedInterface_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult sample_Factory_TakeImportedInterface_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry sample_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Response__PointerTable[];
extern struct MojomPointerTableStructEntry sample_NamedObject_GetName_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_NamedObject_GetName_Response__PointerTable[];
extern struct MojomPointerTableStructEntry sample_NamedObject_SetName_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_CreateNamedObject_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_RequestImportedInterface_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_RequestImportedInterface_Response__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_TakeImportedInterface_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_TakeImportedInterface_Response__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_DoStuff_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_DoStuff_Response__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_DoStuff2_Request__PointerTable[];
extern struct MojomPointerTableStructEntry sample_Factory_DoStuff2_Response__PointerTable[];


#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_TESTS_SAMPLE_FACTORY_MOJOM_C_H_