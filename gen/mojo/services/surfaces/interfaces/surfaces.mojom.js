// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/surfaces/interfaces/surfaces.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/geometry/interfaces/geometry.mojom",
    "mojo/services/surfaces/interfaces/quads.mojom",
    "mojo/services/surfaces/interfaces/surface_id.mojom",
], function(bindings, codec, connection, core, validator, geometry$, quads$, surface_id$) {
  var ResourceFormat = {};
  ResourceFormat.RGBA_8888 = 0;
  ResourceFormat.RGBA_4444 = ResourceFormat.RGBA_8888 + 1;
  ResourceFormat.BGRA_8888 = ResourceFormat.RGBA_4444 + 1;
  ResourceFormat.ALPHA_8 = ResourceFormat.BGRA_8888 + 1;
  ResourceFormat.LUMINANCE_8 = ResourceFormat.ALPHA_8 + 1;
  ResourceFormat.RGB_565 = ResourceFormat.LUMINANCE_8 + 1;
  ResourceFormat.ETC1 = ResourceFormat.RGB_565 + 1;

  function Mailbox(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Mailbox.prototype.initDefaults_ = function() {
    this.name = null;
  };
  Mailbox.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Mailbox.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Mailbox.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Mailbox.name
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Int8, false, [64], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Mailbox.encodedSize = codec.kStructHeaderSize + 8;

  Mailbox.decode = function(decoder) {
    var packed;
    var val = new Mailbox();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeArrayPointer(codec.Int8);
    return val;
  };

  Mailbox.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Mailbox.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Int8, val.name);
  };

  function MailboxHolder(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MailboxHolder.prototype.initDefaults_ = function() {
    this.mailbox = null;
    this.texture_target = 0;
    this.sync_point = 0;
  };
  MailboxHolder.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MailboxHolder.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, MailboxHolder.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate MailboxHolder.mailbox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Mailbox, false);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  MailboxHolder.encodedSize = codec.kStructHeaderSize + 16;

  MailboxHolder.decode = function(decoder) {
    var packed;
    var val = new MailboxHolder();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mailbox = decoder.decodeStructPointer(Mailbox);
    val.texture_target = decoder.decodeStruct(codec.Uint32);
    val.sync_point = decoder.decodeStruct(codec.Uint32);
    return val;
  };

  MailboxHolder.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MailboxHolder.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Mailbox, val.mailbox);
    encoder.encodeStruct(codec.Uint32, val.texture_target);
    encoder.encodeStruct(codec.Uint32, val.sync_point);
  };

  function TransferableResource(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  TransferableResource.prototype.initDefaults_ = function() {
    this.id = 0;
    this.format = 0;
    this.filter = 0;
    this.is_repeated = false;
    this.is_software = false;
    this.size = null;
    this.mailbox_holder = null;
  };
  TransferableResource.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  TransferableResource.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, TransferableResource.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;






    
    // validate TransferableResource.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate TransferableResource.mailbox_holder
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, MailboxHolder, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  TransferableResource.encodedSize = codec.kStructHeaderSize + 32;

  TransferableResource.decode = function(decoder) {
    var packed;
    var val = new TransferableResource();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.format = decoder.decodeStruct(codec.Int32);
    val.filter = decoder.decodeStruct(codec.Uint32);
    packed = decoder.readUint8();
    val.is_repeated = (packed >> 0) & 1 ? true : false;
    val.is_software = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.size = decoder.decodeStructPointer(geometry$.Size);
    val.mailbox_holder = decoder.decodeStructPointer(MailboxHolder);
    return val;
  };

  TransferableResource.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(TransferableResource.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Uint32, val.filter);
    packed = 0;
    packed |= (val.is_repeated & 1) << 0
    packed |= (val.is_software & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(geometry$.Size, val.size);
    encoder.encodeStructPointer(MailboxHolder, val.mailbox_holder);
  };

  function ReturnedResource(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ReturnedResource.prototype.initDefaults_ = function() {
    this.id = 0;
    this.sync_point = 0;
    this.count = 0;
    this.lost = false;
  };
  ReturnedResource.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ReturnedResource.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ReturnedResource.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  ReturnedResource.encodedSize = codec.kStructHeaderSize + 16;

  ReturnedResource.decode = function(decoder) {
    var packed;
    var val = new ReturnedResource();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Uint32);
    val.sync_point = decoder.decodeStruct(codec.Uint32);
    val.count = decoder.decodeStruct(codec.Int32);
    val.lost = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ReturnedResource.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ReturnedResource.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id);
    encoder.encodeStruct(codec.Uint32, val.sync_point);
    encoder.encodeStruct(codec.Int32, val.count);
    encoder.encodeStruct(codec.Uint8, val.lost);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Frame(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Frame.prototype.initDefaults_ = function() {
    this.resources = null;
    this.passes = null;
  };
  Frame.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Frame.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Frame.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Frame.resources
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(TransferableResource), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Frame.passes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(quads$.Pass), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Frame.encodedSize = codec.kStructHeaderSize + 16;

  Frame.decode = function(decoder) {
    var packed;
    var val = new Frame();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resources = decoder.decodeArrayPointer(new codec.PointerTo(TransferableResource));
    val.passes = decoder.decodeArrayPointer(new codec.PointerTo(quads$.Pass));
    return val;
  };

  Frame.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Frame.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(TransferableResource), val.resources);
    encoder.encodeArrayPointer(new codec.PointerTo(quads$.Pass), val.passes);
  };

  function ResourceReturner_ReturnResources_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResourceReturner_ReturnResources_Params.prototype.initDefaults_ = function() {
    this.resources = null;
  };
  ResourceReturner_ReturnResources_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResourceReturner_ReturnResources_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ResourceReturner_ReturnResources_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ResourceReturner_ReturnResources_Params.resources
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ReturnedResource), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ResourceReturner_ReturnResources_Params.encodedSize = codec.kStructHeaderSize + 8;

  ResourceReturner_ReturnResources_Params.decode = function(decoder) {
    var packed;
    var val = new ResourceReturner_ReturnResources_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.resources = decoder.decodeArrayPointer(new codec.PointerTo(ReturnedResource));
    return val;
  };

  ResourceReturner_ReturnResources_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResourceReturner_ReturnResources_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ReturnedResource), val.resources);
  };

  function Surface_GetIdNamespace_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_GetIdNamespace_Params.prototype.initDefaults_ = function() {
  };
  Surface_GetIdNamespace_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_GetIdNamespace_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_GetIdNamespace_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Surface_GetIdNamespace_Params.encodedSize = codec.kStructHeaderSize + 0;

  Surface_GetIdNamespace_Params.decode = function(decoder) {
    var packed;
    var val = new Surface_GetIdNamespace_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Surface_GetIdNamespace_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_GetIdNamespace_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function Surface_GetIdNamespace_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_GetIdNamespace_ResponseParams.prototype.initDefaults_ = function() {
    this.id_namespace = 0;
  };
  Surface_GetIdNamespace_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_GetIdNamespace_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_GetIdNamespace_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Surface_GetIdNamespace_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Surface_GetIdNamespace_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Surface_GetIdNamespace_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id_namespace = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Surface_GetIdNamespace_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_GetIdNamespace_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id_namespace);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Surface_SetResourceReturner_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_SetResourceReturner_Params.prototype.initDefaults_ = function() {
    this.returner = null;
  };
  Surface_SetResourceReturner_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_SetResourceReturner_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_SetResourceReturner_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Surface_SetResourceReturner_Params.returner
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Surface_SetResourceReturner_Params.encodedSize = codec.kStructHeaderSize + 8;

  Surface_SetResourceReturner_Params.decode = function(decoder) {
    var packed;
    var val = new Surface_SetResourceReturner_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.returner = decoder.decodeStruct(codec.Interface);
    return val;
  };

  Surface_SetResourceReturner_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_SetResourceReturner_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.returner);
  };

  function Surface_CreateSurface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_CreateSurface_Params.prototype.initDefaults_ = function() {
    this.id_local = 0;
  };
  Surface_CreateSurface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_CreateSurface_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_CreateSurface_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Surface_CreateSurface_Params.encodedSize = codec.kStructHeaderSize + 8;

  Surface_CreateSurface_Params.decode = function(decoder) {
    var packed;
    var val = new Surface_CreateSurface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id_local = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Surface_CreateSurface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_CreateSurface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id_local);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Surface_SubmitFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_SubmitFrame_Params.prototype.initDefaults_ = function() {
    this.id_local = 0;
    this.frame = null;
  };
  Surface_SubmitFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_SubmitFrame_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_SubmitFrame_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Surface_SubmitFrame_Params.frame
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Frame, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Surface_SubmitFrame_Params.encodedSize = codec.kStructHeaderSize + 16;

  Surface_SubmitFrame_Params.decode = function(decoder) {
    var packed;
    var val = new Surface_SubmitFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id_local = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.frame = decoder.decodeStructPointer(Frame);
    return val;
  };

  Surface_SubmitFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_SubmitFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id_local);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Frame, val.frame);
  };

  function Surface_SubmitFrame_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_SubmitFrame_ResponseParams.prototype.initDefaults_ = function() {
  };
  Surface_SubmitFrame_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_SubmitFrame_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_SubmitFrame_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Surface_SubmitFrame_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  Surface_SubmitFrame_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Surface_SubmitFrame_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Surface_SubmitFrame_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_SubmitFrame_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  function Surface_DestroySurface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Surface_DestroySurface_Params.prototype.initDefaults_ = function() {
    this.id_local = 0;
  };
  Surface_DestroySurface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Surface_DestroySurface_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Surface_DestroySurface_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Surface_DestroySurface_Params.encodedSize = codec.kStructHeaderSize + 8;

  Surface_DestroySurface_Params.decode = function(decoder) {
    var packed;
    var val = new Surface_DestroySurface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id_local = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Surface_DestroySurface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Surface_DestroySurface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.id_local);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kResourceReturner_ReturnResources_Name = 0;

  function ResourceReturnerProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ResourceReturnerProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ResourceReturnerProxy.prototype.returnResources = function(resources) {
    var params = new ResourceReturner_ReturnResources_Params();
    params.resources = resources;
    var builder = new codec.MessageBuilder(
        kResourceReturner_ReturnResources_Name,
        codec.align(ResourceReturner_ReturnResources_Params.encodedSize));
    builder.encodeStruct(ResourceReturner_ReturnResources_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ResourceReturnerStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ResourceReturnerStub.prototype = Object.create(bindings.StubBase.prototype);
  ResourceReturnerStub.prototype.returnResources = function(resources) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.returnResources && bindings.StubBindings(this).delegate.returnResources(resources);
  }

  ResourceReturnerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kResourceReturner_ReturnResources_Name:
      var params = reader.decodeStruct(ResourceReturner_ReturnResources_Params);
      this.returnResources(params.resources);
      return true;
    default:
      return false;
    }
  };

  ResourceReturnerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateResourceReturnerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kResourceReturner_ReturnResources_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ResourceReturner_ReturnResources_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateResourceReturnerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ResourceReturner = {
    name: null,
    proxyClass: ResourceReturnerProxy,
    stubClass: ResourceReturnerStub,
    validateRequest: validateResourceReturnerRequest,
    validateResponse: null,
  };
  ResourceReturnerStub.prototype.validator = validateResourceReturnerRequest;
  ResourceReturnerProxy.prototype.validator = null;

  var kSurface_GetIdNamespace_Name = 0;
  var kSurface_SetResourceReturner_Name = 1;
  var kSurface_CreateSurface_Name = 2;
  var kSurface_SubmitFrame_Name = 3;
  var kSurface_DestroySurface_Name = 4;

  function SurfaceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  SurfaceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  SurfaceProxy.prototype.getIdNamespace = function() {
    var params = new Surface_GetIdNamespace_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kSurface_GetIdNamespace_Name,
          codec.align(Surface_GetIdNamespace_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Surface_GetIdNamespace_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Surface_GetIdNamespace_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SurfaceProxy.prototype.setResourceReturner = function(returner) {
    var params = new Surface_SetResourceReturner_Params();
    params.returner = core.isHandle(returner) ? returner : connection.bindImpl(returner, ResourceReturner);
    var builder = new codec.MessageBuilder(
        kSurface_SetResourceReturner_Name,
        codec.align(Surface_SetResourceReturner_Params.encodedSize));
    builder.encodeStruct(Surface_SetResourceReturner_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SurfaceProxy.prototype.createSurface = function(id_local) {
    var params = new Surface_CreateSurface_Params();
    params.id_local = id_local;
    var builder = new codec.MessageBuilder(
        kSurface_CreateSurface_Name,
        codec.align(Surface_CreateSurface_Params.encodedSize));
    builder.encodeStruct(Surface_CreateSurface_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  SurfaceProxy.prototype.submitFrame = function(id_local, frame) {
    var params = new Surface_SubmitFrame_Params();
    params.id_local = id_local;
    params.frame = frame;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kSurface_SubmitFrame_Name,
          codec.align(Surface_SubmitFrame_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Surface_SubmitFrame_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Surface_SubmitFrame_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  SurfaceProxy.prototype.destroySurface = function(id_local) {
    var params = new Surface_DestroySurface_Params();
    params.id_local = id_local;
    var builder = new codec.MessageBuilder(
        kSurface_DestroySurface_Name,
        codec.align(Surface_DestroySurface_Params.encodedSize));
    builder.encodeStruct(Surface_DestroySurface_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function SurfaceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  SurfaceStub.prototype = Object.create(bindings.StubBase.prototype);
  SurfaceStub.prototype.getIdNamespace = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getIdNamespace && bindings.StubBindings(this).delegate.getIdNamespace();
  }
  SurfaceStub.prototype.setResourceReturner = function(returner) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setResourceReturner && bindings.StubBindings(this).delegate.setResourceReturner(connection.bindHandleToProxy(returner, ResourceReturner));
  }
  SurfaceStub.prototype.createSurface = function(id_local) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createSurface && bindings.StubBindings(this).delegate.createSurface(id_local);
  }
  SurfaceStub.prototype.submitFrame = function(id_local, frame) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.submitFrame && bindings.StubBindings(this).delegate.submitFrame(id_local, frame);
  }
  SurfaceStub.prototype.destroySurface = function(id_local) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.destroySurface && bindings.StubBindings(this).delegate.destroySurface(id_local);
  }

  SurfaceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSurface_SetResourceReturner_Name:
      var params = reader.decodeStruct(Surface_SetResourceReturner_Params);
      this.setResourceReturner(params.returner);
      return true;
    case kSurface_CreateSurface_Name:
      var params = reader.decodeStruct(Surface_CreateSurface_Params);
      this.createSurface(params.id_local);
      return true;
    case kSurface_DestroySurface_Name:
      var params = reader.decodeStruct(Surface_DestroySurface_Params);
      this.destroySurface(params.id_local);
      return true;
    default:
      return false;
    }
  };

  SurfaceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kSurface_GetIdNamespace_Name:
      var params = reader.decodeStruct(Surface_GetIdNamespace_Params);
      return this.getIdNamespace().then(function(response) {
        var responseParams =
            new Surface_GetIdNamespace_ResponseParams();
        responseParams.id_namespace = response.id_namespace;
        var builder = new codec.MessageWithRequestIDBuilder(
            kSurface_GetIdNamespace_Name,
            codec.align(Surface_GetIdNamespace_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Surface_GetIdNamespace_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kSurface_SubmitFrame_Name:
      var params = reader.decodeStruct(Surface_SubmitFrame_Params);
      return this.submitFrame(params.id_local, params.frame).then(function(response) {
        var responseParams =
            new Surface_SubmitFrame_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kSurface_SubmitFrame_Name,
            codec.align(Surface_SubmitFrame_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Surface_SubmitFrame_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateSurfaceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kSurface_GetIdNamespace_Name:
        if (message.expectsResponse())
          paramsClass = Surface_GetIdNamespace_Params;
      break;
      case kSurface_SetResourceReturner_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Surface_SetResourceReturner_Params;
      break;
      case kSurface_CreateSurface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Surface_CreateSurface_Params;
      break;
      case kSurface_SubmitFrame_Name:
        if (message.expectsResponse())
          paramsClass = Surface_SubmitFrame_Params;
      break;
      case kSurface_DestroySurface_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Surface_DestroySurface_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateSurfaceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kSurface_GetIdNamespace_Name:
        if (message.isResponse())
          paramsClass = Surface_GetIdNamespace_ResponseParams;
        break;
      case kSurface_SubmitFrame_Name:
        if (message.isResponse())
          paramsClass = Surface_SubmitFrame_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Surface = {
    name: 'mojo::Surface',
    proxyClass: SurfaceProxy,
    stubClass: SurfaceStub,
    validateRequest: validateSurfaceRequest,
    validateResponse: validateSurfaceResponse,
  };
  SurfaceStub.prototype.validator = validateSurfaceRequest;
  SurfaceProxy.prototype.validator = validateSurfaceResponse;


  var exports = {};
  exports.ResourceFormat = ResourceFormat;
  exports.Mailbox = Mailbox;
  exports.MailboxHolder = MailboxHolder;
  exports.TransferableResource = TransferableResource;
  exports.ReturnedResource = ReturnedResource;
  exports.Frame = Frame;
  exports.ResourceReturner = ResourceReturner;
  exports.Surface = Surface;


  return exports;
});
