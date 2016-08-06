// This file was auto-generated by the C bindings generator.

#include "mojo/public/interfaces/bindings/mojom_types.mojom-c.h"

#include <stdbool.h>

#include "mojo/public/c/bindings/lib/type_table.h"
#include "mojo/public/c/system/handle.h"

// Imports.


// Type tables definitions for structs, arrays and unions.

// Declarations for array type entries.
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomStruct_8_0__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomStruct_16_1__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomUnion_8_2__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomEnum_8_3__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_bindings_types_DeclarationData_0_5__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_bindings_types_ContainedDeclarations_0_6__PointerEntry;
static struct MojomPointerTableArrayEntry mojo_bindings_types_ContainedDeclarations_8_7__PointerEntry;
// Declarations for struct type tables.
struct MojomPointerTableStructEntry mojo_bindings_types_StringType__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_HandleType__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_ArrayType__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_MapType__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_TypeReference__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_StructField__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_DefaultKeyword__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_StructVersion__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_MojomStruct__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_UnionField__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_MojomUnion__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_EnumValue__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_MojomEnum__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_MojomMethod__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_MojomInterface_16_4__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_MojomInterface__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_ConstantReference__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_EnumValueReference__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_DeclaredConstant__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_Attribute__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_DeclarationData__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_SourceFileInfo__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_ContainedDeclarations__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_RuntimeTypeInfo_0_8__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_RuntimeTypeInfo_8_9__PointerTable[];
struct MojomPointerTableStructEntry mojo_bindings_types_RuntimeTypeInfo__PointerTable[];
// Declarations for union type tables.
struct MojomPointerTableUnionEntry mojo_bindings_types_Type__PointerTable[];
struct MojomPointerTableUnionEntry mojo_bindings_types_UserDefinedType__PointerTable[];
struct MojomPointerTableUnionEntry mojo_bindings_types_DefaultFieldValue__PointerTable[];
struct MojomPointerTableUnionEntry mojo_bindings_types_Value__PointerTable[];
struct MojomPointerTableUnionEntry mojo_bindings_types_LiteralValue__PointerTable[];
// Array type entry definitions.
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomStruct_8_0__PointerEntry = {
  mojo_bindings_types_StructField__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomStruct_16_1__PointerEntry = {
  mojo_bindings_types_StructVersion__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomUnion_8_2__PointerEntry = {
  mojo_bindings_types_UnionField__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_bindings_types_MojomEnum_8_3__PointerEntry = {
  mojo_bindings_types_EnumValue__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_bindings_types_DeclarationData_0_5__PointerEntry = {
  mojo_bindings_types_Attribute__PointerTable, 0,
  MOJOM_ELEMENT_TYPE_STRUCT, false,
};
static struct MojomPointerTableArrayEntry mojo_bindings_types_ContainedDeclarations_0_6__PointerEntry = {
  (void*)&MojomStringPointerEntry, 0,
  MOJOM_ELEMENT_TYPE_ARRAY, false,
};
static struct MojomPointerTableArrayEntry mojo_bindings_types_ContainedDeclarations_8_7__PointerEntry = {
  (void*)&MojomStringPointerEntry, 0,
  MOJOM_ELEMENT_TYPE_ARRAY, false,
};
// Struct type table definitions.
struct MojomPointerTableStructEntry mojo_bindings_types_StringType__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_bindings_types_HandleType__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_bindings_types_ArrayType__PointerTable[] = {
  {
    mojo_bindings_types_Type__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_MapType__PointerTable[] = {
  {
    mojo_bindings_types_Type__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, true,
  },

  {
    mojo_bindings_types_Type__PointerTable, 24, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_TypeReference__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    (void*)&MojomStringPointerEntry, 16, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_StructField__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_bindings_types_Type__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, true,
  },

  {
    mojo_bindings_types_DefaultFieldValue__PointerTable, 24, 0,
    MOJOM_ELEMENT_TYPE_UNION, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_DefaultKeyword__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_bindings_types_StructVersion__PointerTable[] = {};
struct MojomPointerTableStructEntry mojo_bindings_types_MojomStruct__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    &mojo_bindings_types_MojomStruct_8_0__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    &mojo_bindings_types_MojomStruct_16_1__PointerEntry, 16, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_UnionField__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_bindings_types_Type__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_MojomUnion__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    &mojo_bindings_types_MojomUnion_8_2__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_EnumValue__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_bindings_types_Value__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_MojomEnum__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    &mojo_bindings_types_MojomEnum_8_3__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_MojomMethod__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_bindings_types_MojomStruct__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    mojo_bindings_types_MojomStruct__PointerTable, 16, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_MojomInterface_16_4__PointerTable[] = {
  {
    NULL, 0, 0,
    MOJOM_ELEMENT_TYPE_POD, false, true,
  },

  {
    mojo_bindings_types_MojomMethod__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_MojomInterface__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    &mojo_bindings_types_MojomInterface_16_4__PointerTable, 16, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_ConstantReference__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_EnumValueReference__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_DeclaredConstant__PointerTable[] = {
  {
    mojo_bindings_types_DeclarationData__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    mojo_bindings_types_Type__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, true,
  },

  {
    mojo_bindings_types_Value__PointerTable, 24, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, true,
  },

  {
    mojo_bindings_types_Value__PointerTable, 40, 0,
    MOJOM_ELEMENT_TYPE_UNION, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_Attribute__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    mojo_bindings_types_LiteralValue__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_DeclarationData__PointerTable[] = {
  {
    &mojo_bindings_types_DeclarationData_0_5__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    (void*)&MojomStringPointerEntry, 16, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    mojo_bindings_types_SourceFileInfo__PointerTable, 32, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    mojo_bindings_types_ContainedDeclarations__PointerTable, 40, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, true, true,
  },

  {
    (void*)&MojomStringPointerEntry, 48, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_SourceFileInfo__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_ContainedDeclarations__PointerTable[] = {
  {
    &mojo_bindings_types_ContainedDeclarations_0_6__PointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, true,
  },

  {
    &mojo_bindings_types_ContainedDeclarations_8_7__PointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, true, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_RuntimeTypeInfo_0_8__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    (void*)&MojomStringPointerEntry, 8, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_RuntimeTypeInfo_8_9__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 0, 0,
    MOJOM_ELEMENT_TYPE_ARRAY, false, true,
  },

  {
    mojo_bindings_types_UserDefinedType__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_UNION, false, false,
  },
};
struct MojomPointerTableStructEntry mojo_bindings_types_RuntimeTypeInfo__PointerTable[] = {
  {
    &mojo_bindings_types_RuntimeTypeInfo_0_8__PointerTable, 0, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, true,
  },

  {
    &mojo_bindings_types_RuntimeTypeInfo_8_9__PointerTable, 8, 0,
    MOJOM_ELEMENT_TYPE_STRUCT, false, false,
  },
};
// Union type table definitions.
struct MojomPointerTableUnionEntry mojo_bindings_types_Type__PointerTable[] = {
  {
    mojo_bindings_types_StringType__PointerTable, 1, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_ArrayType__PointerTable, 2, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_MapType__PointerTable, 3, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_HandleType__PointerTable, 4, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_TypeReference__PointerTable, 5, MOJOM_ELEMENT_TYPE_STRUCT,
    false, false,
  },
};
struct MojomPointerTableUnionEntry mojo_bindings_types_UserDefinedType__PointerTable[] = {
  {
    mojo_bindings_types_MojomEnum__PointerTable, 0, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_MojomStruct__PointerTable, 1, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_MojomUnion__PointerTable, 2, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_MojomInterface__PointerTable, 3, MOJOM_ELEMENT_TYPE_STRUCT,
    false, false,
  },
};
struct MojomPointerTableUnionEntry mojo_bindings_types_DefaultFieldValue__PointerTable[] = {
  {
    mojo_bindings_types_Value__PointerTable, 0, MOJOM_ELEMENT_TYPE_UNION,
    false, true,
  },

  {
    mojo_bindings_types_DefaultKeyword__PointerTable, 1, MOJOM_ELEMENT_TYPE_STRUCT,
    false, false,
  },
};
struct MojomPointerTableUnionEntry mojo_bindings_types_Value__PointerTable[] = {
  {
    mojo_bindings_types_LiteralValue__PointerTable, 0, MOJOM_ELEMENT_TYPE_UNION,
    false, true,
  },

  {
    mojo_bindings_types_ConstantReference__PointerTable, 1, MOJOM_ELEMENT_TYPE_STRUCT,
    false, true,
  },

  {
    mojo_bindings_types_EnumValueReference__PointerTable, 2, MOJOM_ELEMENT_TYPE_STRUCT,
    false, false,
  },
};
struct MojomPointerTableUnionEntry mojo_bindings_types_LiteralValue__PointerTable[] = {
  {
    (void*)&MojomStringPointerEntry, 7, MOJOM_ELEMENT_TYPE_ARRAY,
    false, false,
  },
};




// Definitions for constants.
// Top level constants:
// Struct level constants:
// Interface level constants: