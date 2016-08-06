// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_MOJOM_TYPES_MOJOM_INTERNAL_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_MOJOM_TYPES_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/system/buffer.h"
#include "mojo/public/cpp/system/data_pipe.h"
#include "mojo/public/cpp/system/handle.h"
#include "mojo/public/cpp/system/message_pipe.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace mojo {
namespace bindings {
namespace types {

class StringType;
class HandleType;
class ArrayType;
class MapType;
class TypeReference;
class StructField;
class DefaultKeyword;
class StructVersion;
class MojomStruct;
class UnionField;
class MojomUnion;
class EnumValue;
class MojomEnum;
class MojomMethod;
class MojomInterface;
class ConstantReference;
class EnumValueReference;
class DeclaredConstant;
class Attribute;
class DeclarationData;
class SourceFileInfo;
class ContainedDeclarations;
class RuntimeTypeInfo;

class Type;
class UserDefinedType;
class DefaultFieldValue;
class Value;
class LiteralValue;

namespace internal {

class StringType_Data;
class HandleType_Data;
class ArrayType_Data;
class MapType_Data;
class TypeReference_Data;
class StructField_Data;
class DefaultKeyword_Data;
class StructVersion_Data;
class MojomStruct_Data;
class UnionField_Data;
class MojomUnion_Data;
class EnumValue_Data;
class MojomEnum_Data;
class MojomMethod_Data;
class MojomInterface_Data;
class ConstantReference_Data;
class EnumValueReference_Data;
class DeclaredConstant_Data;
class Attribute_Data;
class DeclarationData_Data;
class SourceFileInfo_Data;
class ContainedDeclarations_Data;
class RuntimeTypeInfo_Data;


class Type_Data;
class UserDefinedType_Data;
class DefaultFieldValue_Data;
class Value_Data;
class LiteralValue_Data;

#pragma pack(push, 1)



class Type_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static Type_Data* New(mojo::internal::Buffer* buf);
  Type_Data();
  // Do nothing in the destructor since it won't be called.
  ~Type_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class Type_Tag : uint32_t {

    SIMPLE_TYPE,
    STRING_TYPE,
    ARRAY_TYPE,
    MAP_TYPE,
    HANDLE_TYPE,
    TYPE_REFERENCE,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    int32_t f_simple_type;
    mojo::internal::StructPointer<internal::StringType_Data> f_string_type;
    mojo::internal::StructPointer<internal::ArrayType_Data> f_array_type;
    mojo::internal::StructPointer<internal::MapType_Data> f_map_type;
    mojo::internal::StructPointer<internal::HandleType_Data> f_handle_type;
    mojo::internal::StructPointer<internal::TypeReference_Data> f_type_reference;
    uint64_t unknown;
  };

  uint32_t size;
  Type_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(Type_Data) == 16,
              "Bad sizeof(Type_Data)");
static_assert(sizeof(Type_Data::Union_) == 8,
              "Bad sizeof(Type_Data::Union_)");



class UserDefinedType_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static UserDefinedType_Data* New(mojo::internal::Buffer* buf);
  UserDefinedType_Data();
  // Do nothing in the destructor since it won't be called.
  ~UserDefinedType_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class UserDefinedType_Tag : uint32_t {

    ENUM_TYPE,
    STRUCT_TYPE,
    UNION_TYPE,
    INTERFACE_TYPE,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    mojo::internal::StructPointer<internal::MojomEnum_Data> f_enum_type;
    mojo::internal::StructPointer<internal::MojomStruct_Data> f_struct_type;
    mojo::internal::StructPointer<internal::MojomUnion_Data> f_union_type;
    mojo::internal::StructPointer<internal::MojomInterface_Data> f_interface_type;
    uint64_t unknown;
  };

  uint32_t size;
  UserDefinedType_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(UserDefinedType_Data) == 16,
              "Bad sizeof(UserDefinedType_Data)");
static_assert(sizeof(UserDefinedType_Data::Union_) == 8,
              "Bad sizeof(UserDefinedType_Data::Union_)");



class DefaultFieldValue_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static DefaultFieldValue_Data* New(mojo::internal::Buffer* buf);
  DefaultFieldValue_Data();
  // Do nothing in the destructor since it won't be called.
  ~DefaultFieldValue_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class DefaultFieldValue_Tag : uint32_t {

    VALUE,
    DEFAULT_KEYWORD,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    mojo::internal::UnionPointer<internal::Value_Data> f_value;
    mojo::internal::StructPointer<internal::DefaultKeyword_Data> f_default_keyword;
    uint64_t unknown;
  };

  uint32_t size;
  DefaultFieldValue_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(DefaultFieldValue_Data) == 16,
              "Bad sizeof(DefaultFieldValue_Data)");
static_assert(sizeof(DefaultFieldValue_Data::Union_) == 8,
              "Bad sizeof(DefaultFieldValue_Data::Union_)");



class Value_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static Value_Data* New(mojo::internal::Buffer* buf);
  Value_Data();
  // Do nothing in the destructor since it won't be called.
  ~Value_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class Value_Tag : uint32_t {

    LITERAL_VALUE,
    CONSTANT_REFERENCE,
    ENUM_VALUE_REFERENCE,
    BUILTIN_VALUE,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    mojo::internal::UnionPointer<internal::LiteralValue_Data> f_literal_value;
    mojo::internal::StructPointer<internal::ConstantReference_Data> f_constant_reference;
    mojo::internal::StructPointer<internal::EnumValueReference_Data> f_enum_value_reference;
    int32_t f_builtin_value;
    uint64_t unknown;
  };

  uint32_t size;
  Value_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(Value_Data) == 16,
              "Bad sizeof(Value_Data)");
static_assert(sizeof(Value_Data::Union_) == 8,
              "Bad sizeof(Value_Data::Union_)");



class LiteralValue_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;
  static LiteralValue_Data* New(mojo::internal::Buffer* buf);
  LiteralValue_Data();
  // Do nothing in the destructor since it won't be called.
  ~LiteralValue_Data() {}

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      bool inlined,
      std::string* err);

  bool is_null() const {
    return size == 0;
  }

  void set_null();

  enum class LiteralValue_Tag : uint32_t {

    BOOL_VALUE,
    DOUBLE_VALUE,
    FLOAT_VALUE,
    INT8_VALUE,
    INT16_VALUE,
    INT32_VALUE,
    INT64_VALUE,
    STRING_VALUE,
    UINT8_VALUE,
    UINT16_VALUE,
    UINT32_VALUE,
    UINT64_VALUE,
    __UNKNOWN__ = 0xFFFFFFFF,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    uint8_t f_bool_value : 1;
    double f_double_value;
    float f_float_value;
    int8_t f_int8_value;
    int16_t f_int16_value;
    int32_t f_int32_value;
    int64_t f_int64_value;
    mojo::internal::StringPointer f_string_value;
    uint8_t f_uint8_value;
    uint16_t f_uint16_value;
    uint32_t f_uint32_value;
    uint64_t f_uint64_value;
    uint64_t unknown;
  };

  uint32_t size;
  LiteralValue_Tag tag;
  Union_ data;

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);
};
static_assert(sizeof(LiteralValue_Data) == 16,
              "Bad sizeof(LiteralValue_Data)");
static_assert(sizeof(LiteralValue_Data::Union_) == 8,
              "Bad sizeof(LiteralValue_Data::Union_)");


class StringType_Data {
 public:
  static StringType_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t nullable : 1;
  uint8_t padfinal_[7];

 private:
  StringType_Data();
  ~StringType_Data() = delete;
};
static_assert(sizeof(StringType_Data) == 16,
              "Bad sizeof(StringType_Data)");

class HandleType_Data {
 public:
  static HandleType_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t nullable : 1;
  uint8_t pad0_[3];
  int32_t kind;

 private:
  HandleType_Data();
  ~HandleType_Data() = delete;
};
static_assert(sizeof(HandleType_Data) == 16,
              "Bad sizeof(HandleType_Data)");

class ArrayType_Data {
 public:
  static ArrayType_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t nullable : 1;
  uint8_t pad0_[3];
  int32_t fixed_length;
  internal::Type_Data element_type;

 private:
  ArrayType_Data();
  ~ArrayType_Data() = delete;
};
static_assert(sizeof(ArrayType_Data) == 32,
              "Bad sizeof(ArrayType_Data)");

class MapType_Data {
 public:
  static MapType_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t nullable : 1;
  uint8_t pad0_[7];
  internal::Type_Data key_type;
  internal::Type_Data value_type;

 private:
  MapType_Data();
  ~MapType_Data() = delete;
};
static_assert(sizeof(MapType_Data) == 48,
              "Bad sizeof(MapType_Data)");

class TypeReference_Data {
 public:
  static TypeReference_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint8_t nullable : 1;
  uint8_t is_interface_request : 1;
  uint8_t pad1_[7];
  mojo::internal::StringPointer identifier;
  mojo::internal::StringPointer type_key;

 private:
  TypeReference_Data();
  ~TypeReference_Data() = delete;
};
static_assert(sizeof(TypeReference_Data) == 32,
              "Bad sizeof(TypeReference_Data)");

class StructField_Data {
 public:
  static StructField_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  internal::Type_Data type;
  internal::DefaultFieldValue_Data default_value;
  uint32_t offset;
  int8_t bit;
  uint8_t pad4_[3];
  uint32_t min_version;
  uint8_t padfinal_[4];

 private:
  StructField_Data();
  ~StructField_Data() = delete;
};
static_assert(sizeof(StructField_Data) == 64,
              "Bad sizeof(StructField_Data)");

class DefaultKeyword_Data {
 public:
  static DefaultKeyword_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  DefaultKeyword_Data();
  ~DefaultKeyword_Data() = delete;
};
static_assert(sizeof(DefaultKeyword_Data) == 8,
              "Bad sizeof(DefaultKeyword_Data)");

class StructVersion_Data {
 public:
  static StructVersion_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  uint32_t version_number;
  uint32_t num_fields;
  uint32_t num_bytes;
  uint8_t padfinal_[4];

 private:
  StructVersion_Data();
  ~StructVersion_Data() = delete;
};
static_assert(sizeof(StructVersion_Data) == 24,
              "Bad sizeof(StructVersion_Data)");

class MojomStruct_Data {
 public:
  static MojomStruct_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  mojo::internal::ArrayPointer<internal::StructField_Data*> fields;
  mojo::internal::ArrayPointer<internal::StructVersion_Data*> version_info;

 private:
  MojomStruct_Data();
  ~MojomStruct_Data() = delete;
};
static_assert(sizeof(MojomStruct_Data) == 32,
              "Bad sizeof(MojomStruct_Data)");

class UnionField_Data {
 public:
  static UnionField_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  internal::Type_Data type;
  uint32_t tag;
  uint8_t padfinal_[4];

 private:
  UnionField_Data();
  ~UnionField_Data() = delete;
};
static_assert(sizeof(UnionField_Data) == 40,
              "Bad sizeof(UnionField_Data)");

class MojomUnion_Data {
 public:
  static MojomUnion_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  mojo::internal::ArrayPointer<internal::UnionField_Data*> fields;

 private:
  MojomUnion_Data();
  ~MojomUnion_Data() = delete;
};
static_assert(sizeof(MojomUnion_Data) == 24,
              "Bad sizeof(MojomUnion_Data)");

class EnumValue_Data {
 public:
  static EnumValue_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  internal::Value_Data initializer_value;
  int32_t int_value;
  uint8_t padfinal_[4];

 private:
  EnumValue_Data();
  ~EnumValue_Data() = delete;
};
static_assert(sizeof(EnumValue_Data) == 40,
              "Bad sizeof(EnumValue_Data)");

class MojomEnum_Data {
 public:
  static MojomEnum_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  mojo::internal::ArrayPointer<internal::EnumValue_Data*> values;

 private:
  MojomEnum_Data();
  ~MojomEnum_Data() = delete;
};
static_assert(sizeof(MojomEnum_Data) == 24,
              "Bad sizeof(MojomEnum_Data)");

class MojomMethod_Data {
 public:
  static MojomMethod_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  mojo::internal::StructPointer<internal::MojomStruct_Data> parameters;
  mojo::internal::StructPointer<internal::MojomStruct_Data> response_params;
  uint32_t ordinal;
  uint32_t min_version;

 private:
  MojomMethod_Data();
  ~MojomMethod_Data() = delete;
};
static_assert(sizeof(MojomMethod_Data) == 40,
              "Bad sizeof(MojomMethod_Data)");

class MojomInterface_Data {
 public:
  static MojomInterface_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  mojo::internal::StringPointer service_name;
  mojo::internal::StructPointer<mojo::internal::Map_Data<uint32_t, internal::MojomMethod_Data*>> methods;
  uint32_t current_version;
  uint8_t padfinal_[4];

 private:
  MojomInterface_Data();
  ~MojomInterface_Data() = delete;
};
static_assert(sizeof(MojomInterface_Data) == 40,
              "Bad sizeof(MojomInterface_Data)");

class ConstantReference_Data {
 public:
  static ConstantReference_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer identifier;
  mojo::internal::StringPointer constant_key;

 private:
  ConstantReference_Data();
  ~ConstantReference_Data() = delete;
};
static_assert(sizeof(ConstantReference_Data) == 24,
              "Bad sizeof(ConstantReference_Data)");

class EnumValueReference_Data {
 public:
  static EnumValueReference_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer identifier;
  mojo::internal::StringPointer enum_type_key;
  uint32_t enum_value_index;
  uint8_t padfinal_[4];

 private:
  EnumValueReference_Data();
  ~EnumValueReference_Data() = delete;
};
static_assert(sizeof(EnumValueReference_Data) == 32,
              "Bad sizeof(EnumValueReference_Data)");

class DeclaredConstant_Data {
 public:
  static DeclaredConstant_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeclarationData_Data> decl_data;
  internal::Type_Data type;
  internal::Value_Data value;
  internal::Value_Data resolved_concrete_value;

 private:
  DeclaredConstant_Data();
  ~DeclaredConstant_Data() = delete;
};
static_assert(sizeof(DeclaredConstant_Data) == 64,
              "Bad sizeof(DeclaredConstant_Data)");

class Attribute_Data {
 public:
  static Attribute_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer key;
  internal::LiteralValue_Data value;

 private:
  Attribute_Data();
  ~Attribute_Data() = delete;
};
static_assert(sizeof(Attribute_Data) == 32,
              "Bad sizeof(Attribute_Data)");

class DeclarationData_Data {
 public:
  static DeclarationData_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::Attribute_Data*> attributes;
  mojo::internal::StringPointer short_name;
  mojo::internal::StringPointer full_identifier;
  int32_t declared_ordinal;
  int32_t declaration_order;
  mojo::internal::StructPointer<internal::SourceFileInfo_Data> source_file_info;
  mojo::internal::StructPointer<internal::ContainedDeclarations_Data> contained_declarations;
  mojo::internal::StringPointer container_type_key;

 private:
  DeclarationData_Data();
  ~DeclarationData_Data() = delete;
};
static_assert(sizeof(DeclarationData_Data) == 64,
              "Bad sizeof(DeclarationData_Data)");

class SourceFileInfo_Data {
 public:
  static SourceFileInfo_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer file_name;
  uint32_t line_number;
  uint32_t column_number;

 private:
  SourceFileInfo_Data();
  ~SourceFileInfo_Data() = delete;
};
static_assert(sizeof(SourceFileInfo_Data) == 24,
              "Bad sizeof(SourceFileInfo_Data)");

class ContainedDeclarations_Data {
 public:
  static ContainedDeclarations_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> enums;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> constants;

 private:
  ContainedDeclarations_Data();
  ~ContainedDeclarations_Data() = delete;
};
static_assert(sizeof(ContainedDeclarations_Data) == 24,
              "Bad sizeof(ContainedDeclarations_Data)");

class RuntimeTypeInfo_Data {
 public:
  static RuntimeTypeInfo_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, mojo::internal::String_Data*>> services;
  mojo::internal::StructPointer<mojo::internal::Map_Data<mojo::internal::String_Data*, internal::UserDefinedType_Data>> type_map;

 private:
  RuntimeTypeInfo_Data();
  ~RuntimeTypeInfo_Data() = delete;
};
static_assert(sizeof(RuntimeTypeInfo_Data) == 24,
              "Bad sizeof(RuntimeTypeInfo_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace types
}  // namespace bindings
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_MOJOM_TYPES_MOJOM_INTERNAL_H_
