// NOTE: This file was generated by the Mojo bindings generator.
#ifndef MOJO_SERVICES_CONTACTS_INTERFACES_CONTACTS_MOJOM_SYNC_H_
#define MOJO_SERVICES_CONTACTS_INTERFACES_CONTACTS_MOJOM_SYNC_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_handle.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_validator.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/lib/synchronous_connector.h"
#include "mojo/services/contacts/interfaces/contacts.mojom-internal.h"
#include "mojo/services/contacts/interfaces/contacts.mojom-common.h"


namespace contacts {

// --- Synchronous interface declaration ---

class ContactsService_SynchronousProxy;
class ContactsService_Synchronous
  : public internal::ContactsService_Base {
 public:
  virtual ~ContactsService_Synchronous() override {}
  
  using Proxy_ = ContactsService_SynchronousProxy;
  virtual bool GetCount(
      const mojo::String& in_filter, uint64_t* out_count)= 0;
  virtual bool Get(
      const mojo::String& in_filter, uint32_t in_offset, uint32_t in_limit, mojo::Array<ContactPtr>* out_contacts)= 0;
  virtual bool GetEmails(
      int64_t in_id, mojo::Array<mojo::String>* out_emails)= 0;
  virtual bool GetPhoto(
      int64_t in_id, bool in_high_resolution, mojo::String* out_photo_url)= 0;
};

class ContactsService_SynchronousProxy
    : public ContactsService_Synchronous {
 public:
  explicit ContactsService_SynchronousProxy(
      mojo::internal::SynchronousConnector* connector,
      mojo::internal::MessageValidatorList&& validators);
  bool GetCount(const mojo::String& in_filter, uint64_t* out_count) override;
  bool Get(const mojo::String& in_filter, uint32_t in_offset, uint32_t in_limit, mojo::Array<ContactPtr>* out_contacts) override;
  bool GetEmails(int64_t in_id, mojo::Array<mojo::String>* out_emails) override;
  bool GetPhoto(int64_t in_id, bool in_high_resolution, mojo::String* out_photo_url) override;

 private:
  // |connector_| is passed to us, and is not owned by us.
  mojo::internal::SynchronousConnector* const connector_;
  mojo::internal::MessageValidatorList const validators_;
};

}  // namespace contacts

#endif  // MOJO_SERVICES_CONTACTS_INTERFACES_CONTACTS_MOJOM_SYNC_H_
