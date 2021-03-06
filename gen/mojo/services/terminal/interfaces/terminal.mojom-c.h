// This file was auto-generated by the C bindings generator.

#ifndef MOJO_SERVICES_TERMINAL_INTERFACES_TERMINAL_MOJOM_C_H_
#define MOJO_SERVICES_TERMINAL_INTERFACES_TERMINAL_MOJOM_C_H_

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
#include "mojo/services/terminal/interfaces/terminal_client.mojom-c.h"


// Forward declarations for structs.
// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.


// Interface definitions.
// --- mojo_terminal_Terminal ---
#define mojo_terminal_Terminal__ServiceName ((const char*)"mojo::terminal::Terminal")
#define mojo_terminal_Terminal__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: SetSize

#define mojo_terminal_Terminal_SetSize__Ordinal \
    ((uint32_t)3)
#define mojo_terminal_Terminal_SetSize__MinVersion \
    ((uint32_t)0)

struct mojo_terminal_Terminal_SetSize_Request;
// -- mojo_terminal_Terminal_SetSize_Request --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_SetSize_Request {
  struct MojomStructHeader header_;
  uint32_t rows;  // offset,bit = 0,0
  uint32_t columns;  // offset,bit = 4,0
  bool reset : 1;  // offset,bit = 8,0
  
};

struct mojo_terminal_Terminal_SetSize_Request* mojo_terminal_Terminal_SetSize_Request_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_SetSize_Request_Init(
  struct mojo_terminal_Terminal_SetSize_Request* in_data);

void mojo_terminal_Terminal_SetSize_Request_CloseAllHandles(
  struct mojo_terminal_Terminal_SetSize_Request* in_data);

struct mojo_terminal_Terminal_SetSize_Request* mojo_terminal_Terminal_SetSize_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_SetSize_Request* in_data);

size_t mojo_terminal_Terminal_SetSize_Request_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_SetSize_Request* in_data);

MojomValidationResult mojo_terminal_Terminal_SetSize_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_SetSize_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_SetSize_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_terminal_Terminal_SetSize_Response;
// -- mojo_terminal_Terminal_SetSize_Response --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_SetSize_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  uint32_t rows;  // offset,bit = 4,0
  uint32_t columns;  // offset,bit = 8,0
  
};

struct mojo_terminal_Terminal_SetSize_Response* mojo_terminal_Terminal_SetSize_Response_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_SetSize_Response_Init(
  struct mojo_terminal_Terminal_SetSize_Response* in_data);

void mojo_terminal_Terminal_SetSize_Response_CloseAllHandles(
  struct mojo_terminal_Terminal_SetSize_Response* in_data);

struct mojo_terminal_Terminal_SetSize_Response* mojo_terminal_Terminal_SetSize_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_SetSize_Response* in_data);

size_t mojo_terminal_Terminal_SetSize_Response_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_SetSize_Response* in_data);

MojomValidationResult mojo_terminal_Terminal_SetSize_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_SetSize_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_SetSize_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: Connect

#define mojo_terminal_Terminal_Connect__Ordinal \
    ((uint32_t)0)
#define mojo_terminal_Terminal_Connect__MinVersion \
    ((uint32_t)0)

struct mojo_terminal_Terminal_Connect_Request;
// -- mojo_terminal_Terminal_Connect_Request --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_Connect_Request {
  struct MojomStructHeader header_;
  MojoHandle terminal_file;  // offset,bit = 0,0
  bool force : 1;  // offset,bit = 4,0
  uint8_t pad1_[4];  // padding
  
};

struct mojo_terminal_Terminal_Connect_Request* mojo_terminal_Terminal_Connect_Request_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_Connect_Request_Init(
  struct mojo_terminal_Terminal_Connect_Request* in_data);

void mojo_terminal_Terminal_Connect_Request_CloseAllHandles(
  struct mojo_terminal_Terminal_Connect_Request* in_data);

struct mojo_terminal_Terminal_Connect_Request* mojo_terminal_Terminal_Connect_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_Connect_Request* in_data);

size_t mojo_terminal_Terminal_Connect_Request_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_Connect_Request* in_data);

MojomValidationResult mojo_terminal_Terminal_Connect_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_Connect_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_Connect_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_terminal_Terminal_Connect_Response;
// -- mojo_terminal_Terminal_Connect_Response --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_Connect_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  
};

struct mojo_terminal_Terminal_Connect_Response* mojo_terminal_Terminal_Connect_Response_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_Connect_Response_Init(
  struct mojo_terminal_Terminal_Connect_Response* in_data);

void mojo_terminal_Terminal_Connect_Response_CloseAllHandles(
  struct mojo_terminal_Terminal_Connect_Response* in_data);

struct mojo_terminal_Terminal_Connect_Response* mojo_terminal_Terminal_Connect_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_Connect_Response* in_data);

size_t mojo_terminal_Terminal_Connect_Response_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_Connect_Response* in_data);

MojomValidationResult mojo_terminal_Terminal_Connect_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_Connect_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_Connect_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: ConnectToClient

#define mojo_terminal_Terminal_ConnectToClient__Ordinal \
    ((uint32_t)1)
#define mojo_terminal_Terminal_ConnectToClient__MinVersion \
    ((uint32_t)0)

struct mojo_terminal_Terminal_ConnectToClient_Request;
// -- mojo_terminal_Terminal_ConnectToClient_Request --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_ConnectToClient_Request {
  struct MojomStructHeader header_;
  struct MojomInterfaceData terminal_client;  // offset,bit = 0,0
  bool force : 1;  // offset,bit = 8,0
  
};

struct mojo_terminal_Terminal_ConnectToClient_Request* mojo_terminal_Terminal_ConnectToClient_Request_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_ConnectToClient_Request_Init(
  struct mojo_terminal_Terminal_ConnectToClient_Request* in_data);

void mojo_terminal_Terminal_ConnectToClient_Request_CloseAllHandles(
  struct mojo_terminal_Terminal_ConnectToClient_Request* in_data);

struct mojo_terminal_Terminal_ConnectToClient_Request* mojo_terminal_Terminal_ConnectToClient_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_ConnectToClient_Request* in_data);

size_t mojo_terminal_Terminal_ConnectToClient_Request_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_ConnectToClient_Request* in_data);

MojomValidationResult mojo_terminal_Terminal_ConnectToClient_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_ConnectToClient_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_ConnectToClient_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_terminal_Terminal_ConnectToClient_Response;
// -- mojo_terminal_Terminal_ConnectToClient_Response --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_ConnectToClient_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  
};

struct mojo_terminal_Terminal_ConnectToClient_Response* mojo_terminal_Terminal_ConnectToClient_Response_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_ConnectToClient_Response_Init(
  struct mojo_terminal_Terminal_ConnectToClient_Response* in_data);

void mojo_terminal_Terminal_ConnectToClient_Response_CloseAllHandles(
  struct mojo_terminal_Terminal_ConnectToClient_Response* in_data);

struct mojo_terminal_Terminal_ConnectToClient_Response* mojo_terminal_Terminal_ConnectToClient_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_ConnectToClient_Response* in_data);

size_t mojo_terminal_Terminal_ConnectToClient_Response_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_ConnectToClient_Response* in_data);

MojomValidationResult mojo_terminal_Terminal_ConnectToClient_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_ConnectToClient_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_ConnectToClient_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetSize

#define mojo_terminal_Terminal_GetSize__Ordinal \
    ((uint32_t)2)
#define mojo_terminal_Terminal_GetSize__MinVersion \
    ((uint32_t)0)

struct mojo_terminal_Terminal_GetSize_Request;
// -- mojo_terminal_Terminal_GetSize_Request --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_GetSize_Request {
  struct MojomStructHeader header_;
  
};

struct mojo_terminal_Terminal_GetSize_Request* mojo_terminal_Terminal_GetSize_Request_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_GetSize_Request_Init(
  struct mojo_terminal_Terminal_GetSize_Request* in_data);

void mojo_terminal_Terminal_GetSize_Request_CloseAllHandles(
  struct mojo_terminal_Terminal_GetSize_Request* in_data);

struct mojo_terminal_Terminal_GetSize_Request* mojo_terminal_Terminal_GetSize_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_GetSize_Request* in_data);

size_t mojo_terminal_Terminal_GetSize_Request_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_GetSize_Request* in_data);

MojomValidationResult mojo_terminal_Terminal_GetSize_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_GetSize_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_GetSize_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_terminal_Terminal_GetSize_Response;
// -- mojo_terminal_Terminal_GetSize_Response --
// Enums
// Constants
// Struct definition
struct mojo_terminal_Terminal_GetSize_Response {
  struct MojomStructHeader header_;
  mojo_files_Error error;  // offset,bit = 0,0
  uint32_t rows;  // offset,bit = 4,0
  uint32_t columns;  // offset,bit = 8,0
  
};

struct mojo_terminal_Terminal_GetSize_Response* mojo_terminal_Terminal_GetSize_Response_New(struct MojomBuffer* in_buffer);

void mojo_terminal_Terminal_GetSize_Response_Init(
  struct mojo_terminal_Terminal_GetSize_Response* in_data);

void mojo_terminal_Terminal_GetSize_Response_CloseAllHandles(
  struct mojo_terminal_Terminal_GetSize_Response* in_data);

struct mojo_terminal_Terminal_GetSize_Response* mojo_terminal_Terminal_GetSize_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_terminal_Terminal_GetSize_Response* in_data);

size_t mojo_terminal_Terminal_GetSize_Response_ComputeSerializedSize(
  const struct mojo_terminal_Terminal_GetSize_Response* in_data);

MojomValidationResult mojo_terminal_Terminal_GetSize_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_terminal_Terminal_GetSize_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_terminal_Terminal_GetSize_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_ConnectToClient_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_ConnectToClient_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_GetSize_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_GetSize_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_SetSize_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_SetSize_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_Connect_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_terminal_Terminal_Connect_Response__PointerTable[];


#endif  // MOJO_SERVICES_TERMINAL_INTERFACES_TERMINAL_MOJOM_C_H_