// This file was auto-generated by the C bindings generator.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_SERVICE_DESCRIBER_MOJOM_C_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_SERVICE_DESCRIBER_MOJOM_C_H_

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
#include "mojo/public/interfaces/bindings/mojom_types.mojom-c.h"


// Forward declarations for structs.
// Forward declarations for unions.
// Top level constants.


// Top level enums.


// Union definitions.


// Struct definitions.


// Interface definitions.
// --- mojo_bindings_types_ServiceDescriber ---
#define mojo_bindings_types_ServiceDescriber__ServiceName ((const char*)"mojo::bindings::types::ServiceDescriber")
#define mojo_bindings_types_ServiceDescriber__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: DescribeService

#define mojo_bindings_types_ServiceDescriber_DescribeService__Ordinal \
    ((uint32_t)0)
#define mojo_bindings_types_ServiceDescriber_DescribeService__MinVersion \
    ((uint32_t)0)

struct mojo_bindings_types_ServiceDescriber_DescribeService_Request;
// -- mojo_bindings_types_ServiceDescriber_DescribeService_Request --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_ServiceDescriber_DescribeService_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr interface_name;  // offset,bit = 0,0
  MojoHandle description_request;  // offset,bit = 8,0
  
};

struct mojo_bindings_types_ServiceDescriber_DescribeService_Request* mojo_bindings_types_ServiceDescriber_DescribeService_Request_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_ServiceDescriber_DescribeService_Request_Init(
  struct mojo_bindings_types_ServiceDescriber_DescribeService_Request* in_data);

void mojo_bindings_types_ServiceDescriber_DescribeService_Request_CloseAllHandles(
  struct mojo_bindings_types_ServiceDescriber_DescribeService_Request* in_data);

struct mojo_bindings_types_ServiceDescriber_DescribeService_Request* mojo_bindings_types_ServiceDescriber_DescribeService_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_ServiceDescriber_DescribeService_Request* in_data);

size_t mojo_bindings_types_ServiceDescriber_DescribeService_Request_ComputeSerializedSize(
  const struct mojo_bindings_types_ServiceDescriber_DescribeService_Request* in_data);

MojomValidationResult mojo_bindings_types_ServiceDescriber_DescribeService_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescriber_DescribeService_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescriber_DescribeService_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);





// --- mojo_bindings_types_ServiceDescription ---
#define mojo_bindings_types_ServiceDescription__ServiceName ((const char*)"")
#define mojo_bindings_types_ServiceDescription__CurrentVersion ((uint32_t)0)

// Enums
// Constants


// Message: GetTopLevelInterface

#define mojo_bindings_types_ServiceDescription_GetTopLevelInterface__Ordinal \
    ((uint32_t)0)
#define mojo_bindings_types_ServiceDescription_GetTopLevelInterface__MinVersion \
    ((uint32_t)0)

struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request;
// -- mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request {
  struct MojomStructHeader header_;
  
};

struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request* mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_Init(
  struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request* in_data);

void mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_CloseAllHandles(
  struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request* in_data);

struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request* mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request* in_data);

size_t mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_ComputeSerializedSize(
  const struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request* in_data);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response;
// -- mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response {
  struct MojomStructHeader header_;
  union mojo_bindings_types_MojomInterfacePtr mojomInterface;  // offset,bit = 0,0
  
};

struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response* mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_Init(
  struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response* in_data);

void mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_CloseAllHandles(
  struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response* in_data);

struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response* mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response* in_data);

size_t mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_ComputeSerializedSize(
  const struct mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response* in_data);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetTypeDefinition

#define mojo_bindings_types_ServiceDescription_GetTypeDefinition__Ordinal \
    ((uint32_t)1)
#define mojo_bindings_types_ServiceDescription_GetTypeDefinition__MinVersion \
    ((uint32_t)0)

struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request;
// -- mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request {
  struct MojomStructHeader header_;
  union MojomStringPtr type_key;  // offset,bit = 0,0
  
};

struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request* mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_Init(
  struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request* in_data);

void mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_CloseAllHandles(
  struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request* in_data);

struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request* mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request* in_data);

size_t mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_ComputeSerializedSize(
  const struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request* in_data);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response;
// -- mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response {
  struct MojomStructHeader header_;
  struct mojo_bindings_types_UserDefinedType type;  // offset,bit = 0,0
  
};

struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response* mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_Init(
  struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response* in_data);

void mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_CloseAllHandles(
  struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response* in_data);

struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response* mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response* in_data);

size_t mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_ComputeSerializedSize(
  const struct mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response* in_data);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);



// Message: GetAllTypeDefinitions

#define mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions__Ordinal \
    ((uint32_t)2)
#define mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions__MinVersion \
    ((uint32_t)0)

struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request;
// -- mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request {
  struct MojomStructHeader header_;
  
};

struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request* mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_Init(
  struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request* in_data);

void mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_CloseAllHandles(
  struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request* in_data);

struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request* mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request* in_data);

size_t mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_ComputeSerializedSize(
  const struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request* in_data);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);


struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response;
// -- mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response --
// Enums
// Constants
// Struct definition
struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response {
  struct MojomStructHeader header_;
  union MojomMapPtr definitions;  // offset,bit = 0,0
  
};

struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response* mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_New(struct MojomBuffer* in_buffer);

void mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_Init(
  struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response* in_data);

void mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_CloseAllHandles(
  struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response* in_data);

struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response* mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_DeepCopy(
  struct MojomBuffer* in_buffer,
  struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response* in_data);

size_t mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_ComputeSerializedSize(
  const struct mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response* in_data);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_EncodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size, MojoHandle* inout_handles,
  uint32_t in_num_handles, uint32_t* out_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_DecodePointersAndHandles(
  void* inout_buf, uint32_t in_buf_size,
  MojoHandle* inout_handles, uint32_t in_num_handles);

MojomValidationResult mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response_Validate(
  const void* in_buf, uint32_t in_buf_size,
  const MojoHandle* in_handles, uint32_t in_num_handles);







// Type tables declarations for structs and unions.



extern struct MojomPointerTableStructEntry mojo_bindings_types_ServiceDescriber_DescribeService_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_ServiceDescription_GetTopLevelInterface_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_ServiceDescription_GetTypeDefinition_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_ServiceDescription_GetTypeDefinition_Response__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Request__PointerTable[];
extern struct MojomPointerTableStructEntry mojo_bindings_types_ServiceDescription_GetAllTypeDefinitions_Response__PointerTable[];


#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_SERVICE_DESCRIBER_MOJOM_C_H_