// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_NATIVE_SUPPORT_INTERFACES_PROCESS_MOJOM_C_H_
#define MOJO_SERVICES_NATIVE_SUPPORT_INTERFACES_PROCESS_MOJOM_C_H_

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
#include "mojo/services/files/interfaces/file.mojom-c.h"
#include "mojo/services/files/interfaces/types.mojom-c.h"


// Forward declarations for structs.
// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.


// Interface definitions.
// --- native_support_Process ---
#define native_support_Process__ServiceName ((const char*)"native_support::Process")
#define native_support_Process__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: Spawn

#define native_support_Process_Spawn__Ordinal \
    ((uint32_t)0)
#define native_support_Process_Spawn__MinVersion \
    ((uint32_t)0)

struct native_support_Process_Spawn_Request;
// -- native_support_Process_Spawn_Request --
// Enums
// Constants
// Struct definition
struct native_support_Process_Spawn_Request {
  struct MojomStructHeader header_;
  union MojomArrayPtr path;  // offset,bit = 0,0
  union MojomArrayPtr argv;  // offset,bit = 8,0
  union MojomArrayPtr envp;  // offset,bit = 16,0
  struct MojomInterfaceData stdin_file;  // offset,bit = 24,0
  struct MojomInterfaceData stdout_file;  // offset,bit = 32,0
  struct MojomInterfaceData stderr_file;  // offset,bit = 40,0
  MojoHandle process_controller;  // offset,bit = 48,0
  
};

struct native_support_Process_Spawn_Request* native_support_Process_Spawn_Request_New(struct MojomBuffer* in_buffer);

void native_support_Process_Spawn_Request_Init(
  struct native_support_Process_Spawn_Request* in_data);

void native_support_Process_Spawn_Request_CloseAllHandles(
  struct native_support_Process_Spawn_Request* in_data);

struct native_support_Process_Spawn_Request* native_support_Process_Spawn_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_Process_Spawn_Request* in_data);

size_t native_support_Process_Spawn_Request_ComputeSerializedSize(
  const struct native_support_Process_Spawn_Request* in_data);

MojomValidationResult native_support_Process_Spawn_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_Process_Spawn_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_Process_Spawn_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct native_support_Process_Spawn_Response;
// -- native_support_Process_Spawn_Response --
// Enums
// Constants
// Struct definition
struct native_support_Process_Spawn_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  
};

struct native_support_Process_Spawn_Response* native_support_Process_Spawn_Response_New(struct MojomBuffer* in_buffer);

void native_support_Process_Spawn_Response_Init(
  struct native_support_Process_Spawn_Response* in_data);

void native_support_Process_Spawn_Response_CloseAllHandles(
  struct native_support_Process_Spawn_Response* in_data);

struct native_support_Process_Spawn_Response* native_support_Process_Spawn_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_Process_Spawn_Response* in_data);

size_t native_support_Process_Spawn_Response_ComputeSerializedSize(
  const struct native_support_Process_Spawn_Response* in_data);

MojomValidationResult native_support_Process_Spawn_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_Process_Spawn_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_Process_Spawn_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: SpawnWithTerminal

#define native_support_Process_SpawnWithTerminal__Ordinal \
    ((uint32_t)1)
#define native_support_Process_SpawnWithTerminal__MinVersion \
    ((uint32_t)0)

struct native_support_Process_SpawnWithTerminal_Request;
// -- native_support_Process_SpawnWithTerminal_Request --
// Enums
// Constants
// Struct definition
struct native_support_Process_SpawnWithTerminal_Request {
  struct MojomStructHeader header_;
  union MojomArrayPtr path;  // offset,bit = 0,0
  union MojomArrayPtr argv;  // offset,bit = 8,0
  union MojomArrayPtr envp;  // offset,bit = 16,0
  struct MojomInterfaceData terminal_file;  // offset,bit = 24,0
  MojoHandle process_controller;  // offset,bit = 32,0
  
};

struct native_support_Process_SpawnWithTerminal_Request* native_support_Process_SpawnWithTerminal_Request_New(struct MojomBuffer* in_buffer);

void native_support_Process_SpawnWithTerminal_Request_Init(
  struct native_support_Process_SpawnWithTerminal_Request* in_data);

void native_support_Process_SpawnWithTerminal_Request_CloseAllHandles(
  struct native_support_Process_SpawnWithTerminal_Request* in_data);

struct native_support_Process_SpawnWithTerminal_Request* native_support_Process_SpawnWithTerminal_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_Process_SpawnWithTerminal_Request* in_data);

size_t native_support_Process_SpawnWithTerminal_Request_ComputeSerializedSize(
  const struct native_support_Process_SpawnWithTerminal_Request* in_data);

MojomValidationResult native_support_Process_SpawnWithTerminal_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_Process_SpawnWithTerminal_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_Process_SpawnWithTerminal_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct native_support_Process_SpawnWithTerminal_Response;
// -- native_support_Process_SpawnWithTerminal_Response --
// Enums
// Constants
// Struct definition
struct native_support_Process_SpawnWithTerminal_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  
};

struct native_support_Process_SpawnWithTerminal_Response* native_support_Process_SpawnWithTerminal_Response_New(struct MojomBuffer* in_buffer);

void native_support_Process_SpawnWithTerminal_Response_Init(
  struct native_support_Process_SpawnWithTerminal_Response* in_data);

void native_support_Process_SpawnWithTerminal_Response_CloseAllHandles(
  struct native_support_Process_SpawnWithTerminal_Response* in_data);

struct native_support_Process_SpawnWithTerminal_Response* native_support_Process_SpawnWithTerminal_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_Process_SpawnWithTerminal_Response* in_data);

size_t native_support_Process_SpawnWithTerminal_Response_ComputeSerializedSize(
  const struct native_support_Process_SpawnWithTerminal_Response* in_data);

MojomValidationResult native_support_Process_SpawnWithTerminal_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_Process_SpawnWithTerminal_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_Process_SpawnWithTerminal_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);





// --- native_support_ProcessController ---
#define native_support_ProcessController__ServiceName ((const char*)"")
#define native_support_ProcessController__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: Wait

#define native_support_ProcessController_Wait__Ordinal \
    ((uint32_t)0)
#define native_support_ProcessController_Wait__MinVersion \
    ((uint32_t)0)

struct native_support_ProcessController_Wait_Request;
// -- native_support_ProcessController_Wait_Request --
// Enums
// Constants
// Struct definition
struct native_support_ProcessController_Wait_Request {
  struct MojomStructHeader header_;
  
};

struct native_support_ProcessController_Wait_Request* native_support_ProcessController_Wait_Request_New(struct MojomBuffer* in_buffer);

void native_support_ProcessController_Wait_Request_Init(
  struct native_support_ProcessController_Wait_Request* in_data);

void native_support_ProcessController_Wait_Request_CloseAllHandles(
  struct native_support_ProcessController_Wait_Request* in_data);

struct native_support_ProcessController_Wait_Request* native_support_ProcessController_Wait_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_ProcessController_Wait_Request* in_data);

size_t native_support_ProcessController_Wait_Request_ComputeSerializedSize(
  const struct native_support_ProcessController_Wait_Request* in_data);

MojomValidationResult native_support_ProcessController_Wait_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_ProcessController_Wait_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_ProcessController_Wait_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct native_support_ProcessController_Wait_Response;
// -- native_support_ProcessController_Wait_Response --
// Enums
// Constants
// Struct definition
struct native_support_ProcessController_Wait_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  int32_t exit_status;  // offset,bit = 4,0
  uint8_t pad1_[4];  // padding
  
};

struct native_support_ProcessController_Wait_Response* native_support_ProcessController_Wait_Response_New(struct MojomBuffer* in_buffer);

void native_support_ProcessController_Wait_Response_Init(
  struct native_support_ProcessController_Wait_Response* in_data);

void native_support_ProcessController_Wait_Response_CloseAllHandles(
  struct native_support_ProcessController_Wait_Response* in_data);

struct native_support_ProcessController_Wait_Response* native_support_ProcessController_Wait_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_ProcessController_Wait_Response* in_data);

size_t native_support_ProcessController_Wait_Response_ComputeSerializedSize(
  const struct native_support_ProcessController_Wait_Response* in_data);

MojomValidationResult native_support_ProcessController_Wait_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_ProcessController_Wait_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_ProcessController_Wait_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: Kill

#define native_support_ProcessController_Kill__Ordinal \
    ((uint32_t)1)
#define native_support_ProcessController_Kill__MinVersion \
    ((uint32_t)0)

struct native_support_ProcessController_Kill_Request;
// -- native_support_ProcessController_Kill_Request --
// Enums
// Constants
// Struct definition
struct native_support_ProcessController_Kill_Request {
  struct MojomStructHeader header_;
  int32_t signal;  // offset,bit = 0,0
  
};

struct native_support_ProcessController_Kill_Request* native_support_ProcessController_Kill_Request_New(struct MojomBuffer* in_buffer);

void native_support_ProcessController_Kill_Request_Init(
  struct native_support_ProcessController_Kill_Request* in_data);

void native_support_ProcessController_Kill_Request_CloseAllHandles(
  struct native_support_ProcessController_Kill_Request* in_data);

struct native_support_ProcessController_Kill_Request* native_support_ProcessController_Kill_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_ProcessController_Kill_Request* in_data);

size_t native_support_ProcessController_Kill_Request_ComputeSerializedSize(
  const struct native_support_ProcessController_Kill_Request* in_data);

MojomValidationResult native_support_ProcessController_Kill_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_ProcessController_Kill_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_ProcessController_Kill_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct native_support_ProcessController_Kill_Response;
// -- native_support_ProcessController_Kill_Response --
// Enums
// Constants
// Struct definition
struct native_support_ProcessController_Kill_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  
};

struct native_support_ProcessController_Kill_Response* native_support_ProcessController_Kill_Response_New(struct MojomBuffer* in_buffer);

void native_support_ProcessController_Kill_Response_Init(
  struct native_support_ProcessController_Kill_Response* in_data);

void native_support_ProcessController_Kill_Response_CloseAllHandles(
  struct native_support_ProcessController_Kill_Response* in_data);

struct native_support_ProcessController_Kill_Response* native_support_ProcessController_Kill_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct native_support_ProcessController_Kill_Response* in_data);

size_t native_support_ProcessController_Kill_Response_ComputeSerializedSize(
  const struct native_support_ProcessController_Kill_Response* in_data);

MojomValidationResult native_support_ProcessController_Kill_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult native_support_ProcessController_Kill_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult native_support_ProcessController_Kill_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry native_support_Process_Spawn_Request__PointerTable[];
extern struct MojomPointerTableStructEntry native_support_Process_Spawn_Response__PointerTable[];
extern struct MojomPointerTableStructEntry native_support_Process_SpawnWithTerminal_Request__PointerTable[];
extern struct MojomPointerTableStructEntry native_support_Process_SpawnWithTerminal_Response__PointerTable[];
extern struct MojomPointerTableStructEntry native_support_ProcessController_Wait_Request__PointerTable[];
extern struct MojomPointerTableStructEntry native_support_ProcessController_Wait_Response__PointerTable[];
extern struct MojomPointerTableStructEntry native_support_ProcessController_Kill_Request__PointerTable[];
extern struct MojomPointerTableStructEntry native_support_ProcessController_Kill_Response__PointerTable[];


#endif  // MOJO_SERVICES_NATIVE_SUPPORT_INTERFACES_PROCESS_MOJOM_C_H_