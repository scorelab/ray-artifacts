// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_NOTIFICATIONS_INTERFACES_NOTIFICATIONS_MOJOM_INTERNAL_H_
#define MOJO_SERVICES_NOTIFICATIONS_INTERFACES_NOTIFICATIONS_MOJOM_INTERNAL_H_

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
namespace notifications {

class NotificationData;


namespace internal {

class NotificationData_Data;



#pragma pack(push, 1)


class NotificationData_Data {
 public:
  static NotificationData_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer title;
  mojo::internal::StringPointer text;
  uint8_t play_sound : 1;
  uint8_t vibrate : 1;
  uint8_t set_lights : 1;
  uint8_t padfinal_[7];

 private:
  NotificationData_Data();
  ~NotificationData_Data() = delete;
};
static_assert(sizeof(NotificationData_Data) == 32,
              "Bad sizeof(NotificationData_Data)");


class NotificationClient_OnSelected_Params_Data {
 public:
  static NotificationClient_OnSelected_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  NotificationClient_OnSelected_Params_Data();
  ~NotificationClient_OnSelected_Params_Data() = delete;
};
static_assert(sizeof(NotificationClient_OnSelected_Params_Data) == 8,
              "Bad sizeof(NotificationClient_OnSelected_Params_Data)");


class NotificationClient_OnDismissed_Params_Data {
 public:
  static NotificationClient_OnDismissed_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  NotificationClient_OnDismissed_Params_Data();
  ~NotificationClient_OnDismissed_Params_Data() = delete;
};
static_assert(sizeof(NotificationClient_OnDismissed_Params_Data) == 8,
              "Bad sizeof(NotificationClient_OnDismissed_Params_Data)");


class Notification_Update_Params_Data {
 public:
  static Notification_Update_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::NotificationData_Data> notification_data;

 private:
  Notification_Update_Params_Data();
  ~Notification_Update_Params_Data() = delete;
};
static_assert(sizeof(Notification_Update_Params_Data) == 16,
              "Bad sizeof(Notification_Update_Params_Data)");


class Notification_Cancel_Params_Data {
 public:
  static Notification_Cancel_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;

 private:
  Notification_Cancel_Params_Data();
  ~Notification_Cancel_Params_Data() = delete;
};
static_assert(sizeof(Notification_Cancel_Params_Data) == 8,
              "Bad sizeof(Notification_Cancel_Params_Data)");


class NotificationService_Post_Params_Data {
 public:
  static NotificationService_Post_Params_Data* New(mojo::internal::Buffer* buf);

  static mojo::internal::ValidationError Validate(
      const void* data,
      mojo::internal::BoundsChecker* bounds_checker,
      std::string* err);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);

  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::NotificationData_Data> notification_data;
  mojo::internal::Interface_Data client;
  mojo::MessagePipeHandle notification;
  uint8_t padfinal_[4];

 private:
  NotificationService_Post_Params_Data();
  ~NotificationService_Post_Params_Data() = delete;
};
static_assert(sizeof(NotificationService_Post_Params_Data) == 32,
              "Bad sizeof(NotificationService_Post_Params_Data)");


#pragma pack(pop)

}  // namespace internal
}  // namespace notifications

#endif  // MOJO_SERVICES_NOTIFICATIONS_INTERFACES_NOTIFICATIONS_MOJOM_INTERNAL_H_