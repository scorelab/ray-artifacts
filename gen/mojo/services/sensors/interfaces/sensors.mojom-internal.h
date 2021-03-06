// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_SENSORS_INTERFACES_SENSORS_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_SENSORS_INTERFACES_SENSORS_MOJOM_INTERNAL_H_

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
namespace sensors {

class SensorData;


namespace internal {

class SensorData_Data;



#pragma pack(push, 1)


class SensorData_Data {
 public:
  static SensorData_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t accuracy;
  uint8_t pad0_[4];
  int64_t time_stamp;
  mojo::internal::ArrayPointer<float> values;

 private:
  SensorData_Data();
  ~SensorData_Data() = delete;
};
static_assert(sizeof(SensorData_Data) == 32,
              "Bad sizeof(SensorData_Data)");


class SensorListener_OnAccuracyChanged_Params_Data {
 public:
  static SensorListener_OnAccuracyChanged_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t accuracy;
  uint8_t padfinal_[4];

 private:
  SensorListener_OnAccuracyChanged_Params_Data();
  ~SensorListener_OnAccuracyChanged_Params_Data() = delete;
};
static_assert(sizeof(SensorListener_OnAccuracyChanged_Params_Data) == 16,
              "Bad sizeof(SensorListener_OnAccuracyChanged_Params_Data)");


class SensorListener_OnSensorChanged_Params_Data {
 public:
  static SensorListener_OnSensorChanged_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::SensorData_Data> data;

 private:
  SensorListener_OnSensorChanged_Params_Data();
  ~SensorListener_OnSensorChanged_Params_Data() = delete;
};
static_assert(sizeof(SensorListener_OnSensorChanged_Params_Data) == 16,
              "Bad sizeof(SensorListener_OnSensorChanged_Params_Data)");


class SensorService_AddListener_Params_Data {
 public:
  static SensorService_AddListener_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  int32_t type;
  mojo::internal::Interface_Data listener;
  uint8_t padfinal_[4];

 private:
  SensorService_AddListener_Params_Data();
  ~SensorService_AddListener_Params_Data() = delete;
};
static_assert(sizeof(SensorService_AddListener_Params_Data) == 24,
              "Bad sizeof(SensorService_AddListener_Params_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace sensors

#endif  // MOJO_SERVICES_SENSORS_INTERFACES_SENSORS_MOJOM_INTERNAL_H_
