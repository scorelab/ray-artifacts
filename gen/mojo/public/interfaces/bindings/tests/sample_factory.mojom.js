// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/public/interfaces/bindings/tests/sample_factory.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/public/interfaces/bindings/tests/sample_import.mojom",
], function(bindings, codec, connection, core, validator, sample_import$) {

  function Request(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Request.prototype.initDefaults_ = function() {
    this.x = 0;
    this.pipe = null;
    this.more_pipes = null;
    this.obj = null;
  };
  Request.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Request.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Request.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Request.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Request.more_pipes
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 4, codec.Handle, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Request.obj
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 16, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Request.encodedSize = codec.kStructHeaderSize + 24;

  Request.decode = function(decoder) {
    var packed;
    var val = new Request();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.pipe = decoder.decodeStruct(codec.NullableHandle);
    val.more_pipes = decoder.decodeArrayPointer(codec.Handle);
    val.obj = decoder.decodeStruct(codec.NullableInterface);
    return val;
  };

  Request.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Request.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.NullableHandle, val.pipe);
    encoder.encodeArrayPointer(codec.Handle, val.more_pipes);
    encoder.encodeStruct(codec.NullableInterface, val.obj);
  };

  function Response(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Response.prototype.initDefaults_ = function() {
    this.x = 0;
    this.pipe = null;
  };
  Response.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Response.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Response.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Response.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Response.encodedSize = codec.kStructHeaderSize + 8;

  Response.decode = function(decoder) {
    var packed;
    var val = new Response();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.pipe = decoder.decodeStruct(codec.NullableHandle);
    return val;
  };

  Response.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Response.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.NullableHandle, val.pipe);
  };

  function NamedObject_SetName_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NamedObject_SetName_Params.prototype.initDefaults_ = function() {
    this.name = null;
  };
  NamedObject_SetName_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NamedObject_SetName_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NamedObject_SetName_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate NamedObject_SetName_Params.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NamedObject_SetName_Params.encodedSize = codec.kStructHeaderSize + 8;

  NamedObject_SetName_Params.decode = function(decoder) {
    var packed;
    var val = new NamedObject_SetName_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  NamedObject_SetName_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NamedObject_SetName_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
  };

  function NamedObject_GetName_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NamedObject_GetName_Params.prototype.initDefaults_ = function() {
  };
  NamedObject_GetName_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NamedObject_GetName_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NamedObject_GetName_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NamedObject_GetName_Params.encodedSize = codec.kStructHeaderSize + 0;

  NamedObject_GetName_Params.decode = function(decoder) {
    var packed;
    var val = new NamedObject_GetName_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  NamedObject_GetName_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NamedObject_GetName_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function NamedObject_GetName_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NamedObject_GetName_ResponseParams.prototype.initDefaults_ = function() {
    this.name = null;
  };
  NamedObject_GetName_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NamedObject_GetName_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NamedObject_GetName_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate NamedObject_GetName_ResponseParams.name
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NamedObject_GetName_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NamedObject_GetName_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NamedObject_GetName_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.name = decoder.decodeStruct(codec.String);
    return val;
  };

  NamedObject_GetName_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NamedObject_GetName_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.name);
  };

  function Factory_DoStuff_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_DoStuff_Params.prototype.initDefaults_ = function() {
    this.request = null;
    this.pipe = null;
  };
  Factory_DoStuff_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_DoStuff_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_DoStuff_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_DoStuff_Params.request
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Request, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_DoStuff_Params.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_DoStuff_Params.encodedSize = codec.kStructHeaderSize + 16;

  Factory_DoStuff_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_DoStuff_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.request = decoder.decodeStructPointer(Request);
    val.pipe = decoder.decodeStruct(codec.NullableHandle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_DoStuff_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_DoStuff_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Request, val.request);
    encoder.encodeStruct(codec.NullableHandle, val.pipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Factory_DoStuff_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_DoStuff_ResponseParams.prototype.initDefaults_ = function() {
    this.response = null;
    this.text = null;
  };
  Factory_DoStuff_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_DoStuff_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_DoStuff_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_DoStuff_ResponseParams.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, Response, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_DoStuff_ResponseParams.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_DoStuff_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Factory_DoStuff_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Factory_DoStuff_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response = decoder.decodeStructPointer(Response);
    val.text = decoder.decodeStruct(codec.String);
    return val;
  };

  Factory_DoStuff_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_DoStuff_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(Response, val.response);
    encoder.encodeStruct(codec.String, val.text);
  };

  function Factory_DoStuff2_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_DoStuff2_Params.prototype.initDefaults_ = function() {
    this.pipe = null;
  };
  Factory_DoStuff2_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_DoStuff2_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_DoStuff2_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_DoStuff2_Params.pipe
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_DoStuff2_Params.encodedSize = codec.kStructHeaderSize + 8;

  Factory_DoStuff2_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_DoStuff2_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pipe = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_DoStuff2_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_DoStuff2_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.pipe);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Factory_DoStuff2_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_DoStuff2_ResponseParams.prototype.initDefaults_ = function() {
    this.text = null;
  };
  Factory_DoStuff2_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_DoStuff2_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_DoStuff2_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_DoStuff2_ResponseParams.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_DoStuff2_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Factory_DoStuff2_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Factory_DoStuff2_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStruct(codec.String);
    return val;
  };

  Factory_DoStuff2_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_DoStuff2_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.text);
  };

  function Factory_CreateNamedObject_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_CreateNamedObject_Params.prototype.initDefaults_ = function() {
    this.obj = null;
  };
  Factory_CreateNamedObject_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_CreateNamedObject_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_CreateNamedObject_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_CreateNamedObject_Params.obj
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_CreateNamedObject_Params.encodedSize = codec.kStructHeaderSize + 8;

  Factory_CreateNamedObject_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_CreateNamedObject_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.obj = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_CreateNamedObject_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_CreateNamedObject_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.obj);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Factory_RequestImportedInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_RequestImportedInterface_Params.prototype.initDefaults_ = function() {
    this.obj = null;
  };
  Factory_RequestImportedInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_RequestImportedInterface_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_RequestImportedInterface_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_RequestImportedInterface_Params.obj
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_RequestImportedInterface_Params.encodedSize = codec.kStructHeaderSize + 8;

  Factory_RequestImportedInterface_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_RequestImportedInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.obj = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_RequestImportedInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_RequestImportedInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.obj);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Factory_RequestImportedInterface_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_RequestImportedInterface_ResponseParams.prototype.initDefaults_ = function() {
    this.obj = null;
  };
  Factory_RequestImportedInterface_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_RequestImportedInterface_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_RequestImportedInterface_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_RequestImportedInterface_ResponseParams.obj
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_RequestImportedInterface_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Factory_RequestImportedInterface_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Factory_RequestImportedInterface_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.obj = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Factory_RequestImportedInterface_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_RequestImportedInterface_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.obj);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Factory_TakeImportedInterface_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_TakeImportedInterface_Params.prototype.initDefaults_ = function() {
    this.obj = null;
  };
  Factory_TakeImportedInterface_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_TakeImportedInterface_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_TakeImportedInterface_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_TakeImportedInterface_Params.obj
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_TakeImportedInterface_Params.encodedSize = codec.kStructHeaderSize + 8;

  Factory_TakeImportedInterface_Params.decode = function(decoder) {
    var packed;
    var val = new Factory_TakeImportedInterface_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.obj = decoder.decodeStruct(codec.Interface);
    return val;
  };

  Factory_TakeImportedInterface_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_TakeImportedInterface_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.obj);
  };

  function Factory_TakeImportedInterface_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Factory_TakeImportedInterface_ResponseParams.prototype.initDefaults_ = function() {
    this.obj = null;
  };
  Factory_TakeImportedInterface_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Factory_TakeImportedInterface_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Factory_TakeImportedInterface_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Factory_TakeImportedInterface_ResponseParams.obj
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Factory_TakeImportedInterface_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Factory_TakeImportedInterface_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Factory_TakeImportedInterface_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.obj = decoder.decodeStruct(codec.Interface);
    return val;
  };

  Factory_TakeImportedInterface_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Factory_TakeImportedInterface_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.obj);
  };

  var kNamedObject_SetName_Name = 0;
  var kNamedObject_GetName_Name = 1;

  function NamedObjectProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  NamedObjectProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  NamedObjectProxy.prototype.setName = function(name) {
    var params = new NamedObject_SetName_Params();
    params.name = name;
    var builder = new codec.MessageBuilder(
        kNamedObject_SetName_Name,
        codec.align(NamedObject_SetName_Params.encodedSize));
    builder.encodeStruct(NamedObject_SetName_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  NamedObjectProxy.prototype.getName = function() {
    var params = new NamedObject_GetName_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kNamedObject_GetName_Name,
          codec.align(NamedObject_GetName_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NamedObject_GetName_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NamedObject_GetName_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NamedObjectStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  NamedObjectStub.prototype = Object.create(bindings.StubBase.prototype);
  NamedObjectStub.prototype.setName = function(name) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setName && bindings.StubBindings(this).delegate.setName(name);
  }
  NamedObjectStub.prototype.getName = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getName && bindings.StubBindings(this).delegate.getName();
  }

  NamedObjectStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNamedObject_SetName_Name:
      var params = reader.decodeStruct(NamedObject_SetName_Params);
      this.setName(params.name);
      return true;
    default:
      return false;
    }
  };

  NamedObjectStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNamedObject_GetName_Name:
      var params = reader.decodeStruct(NamedObject_GetName_Params);
      return this.getName().then(function(response) {
        var responseParams =
            new NamedObject_GetName_ResponseParams();
        responseParams.name = response.name;
        var builder = new codec.MessageWithRequestIDBuilder(
            kNamedObject_GetName_Name,
            codec.align(NamedObject_GetName_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NamedObject_GetName_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateNamedObjectRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNamedObject_SetName_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NamedObject_SetName_Params;
      break;
      case kNamedObject_GetName_Name:
        if (message.expectsResponse())
          paramsClass = NamedObject_GetName_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNamedObjectResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNamedObject_GetName_Name:
        if (message.isResponse())
          paramsClass = NamedObject_GetName_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NamedObject = {
    name: 'sample::NamedObject',
    proxyClass: NamedObjectProxy,
    stubClass: NamedObjectStub,
    validateRequest: validateNamedObjectRequest,
    validateResponse: validateNamedObjectResponse,
  };
  NamedObjectStub.prototype.validator = validateNamedObjectRequest;
  NamedObjectProxy.prototype.validator = validateNamedObjectResponse;

  var kFactory_DoStuff_Name = 0;
  var kFactory_DoStuff2_Name = 1;
  var kFactory_CreateNamedObject_Name = 2;
  var kFactory_RequestImportedInterface_Name = 3;
  var kFactory_TakeImportedInterface_Name = 4;

  function FactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  FactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  FactoryProxy.prototype.doStuff = function(request, pipe) {
    var params = new Factory_DoStuff_Params();
    params.request = request;
    params.pipe = pipe;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFactory_DoStuff_Name,
          codec.align(Factory_DoStuff_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Factory_DoStuff_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Factory_DoStuff_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FactoryProxy.prototype.doStuff2 = function(pipe) {
    var params = new Factory_DoStuff2_Params();
    params.pipe = pipe;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFactory_DoStuff2_Name,
          codec.align(Factory_DoStuff2_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Factory_DoStuff2_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Factory_DoStuff2_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FactoryProxy.prototype.createNamedObject = function(obj) {
    var params = new Factory_CreateNamedObject_Params();
    params.obj = core.isHandle(obj) ? obj : connection.bindProxy(obj, NamedObject);
    var builder = new codec.MessageBuilder(
        kFactory_CreateNamedObject_Name,
        codec.align(Factory_CreateNamedObject_Params.encodedSize));
    builder.encodeStruct(Factory_CreateNamedObject_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  FactoryProxy.prototype.requestImportedInterface = function(obj) {
    var params = new Factory_RequestImportedInterface_Params();
    params.obj = core.isHandle(obj) ? obj : connection.bindProxy(obj, sample_import$.ImportedInterface);
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFactory_RequestImportedInterface_Name,
          codec.align(Factory_RequestImportedInterface_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Factory_RequestImportedInterface_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Factory_RequestImportedInterface_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  FactoryProxy.prototype.takeImportedInterface = function(obj) {
    var params = new Factory_TakeImportedInterface_Params();
    params.obj = core.isHandle(obj) ? obj : connection.bindImpl(obj, sample_import$.ImportedInterface);
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFactory_TakeImportedInterface_Name,
          codec.align(Factory_TakeImportedInterface_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Factory_TakeImportedInterface_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Factory_TakeImportedInterface_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  FactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  FactoryStub.prototype.doStuff = function(request, pipe) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.doStuff && bindings.StubBindings(this).delegate.doStuff(request, pipe);
  }
  FactoryStub.prototype.doStuff2 = function(pipe) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.doStuff2 && bindings.StubBindings(this).delegate.doStuff2(pipe);
  }
  FactoryStub.prototype.createNamedObject = function(obj) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createNamedObject && bindings.StubBindings(this).delegate.createNamedObject(connection.bindHandleToStub(obj, NamedObject));
  }
  FactoryStub.prototype.requestImportedInterface = function(obj) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestImportedInterface && bindings.StubBindings(this).delegate.requestImportedInterface(connection.bindHandleToStub(obj, sample_import$.ImportedInterface));
  }
  FactoryStub.prototype.takeImportedInterface = function(obj) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.takeImportedInterface && bindings.StubBindings(this).delegate.takeImportedInterface(connection.bindHandleToProxy(obj, sample_import$.ImportedInterface));
  }

  FactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFactory_CreateNamedObject_Name:
      var params = reader.decodeStruct(Factory_CreateNamedObject_Params);
      this.createNamedObject(params.obj);
      return true;
    default:
      return false;
    }
  };

  FactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFactory_DoStuff_Name:
      var params = reader.decodeStruct(Factory_DoStuff_Params);
      return this.doStuff(params.request, params.pipe).then(function(response) {
        var responseParams =
            new Factory_DoStuff_ResponseParams();
        responseParams.response = response.response;
        responseParams.text = response.text;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFactory_DoStuff_Name,
            codec.align(Factory_DoStuff_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Factory_DoStuff_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFactory_DoStuff2_Name:
      var params = reader.decodeStruct(Factory_DoStuff2_Params);
      return this.doStuff2(params.pipe).then(function(response) {
        var responseParams =
            new Factory_DoStuff2_ResponseParams();
        responseParams.text = response.text;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFactory_DoStuff2_Name,
            codec.align(Factory_DoStuff2_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Factory_DoStuff2_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFactory_RequestImportedInterface_Name:
      var params = reader.decodeStruct(Factory_RequestImportedInterface_Params);
      return this.requestImportedInterface(params.obj).then(function(response) {
        var responseParams =
            new Factory_RequestImportedInterface_ResponseParams();
        responseParams.obj = response.obj;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFactory_RequestImportedInterface_Name,
            codec.align(Factory_RequestImportedInterface_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Factory_RequestImportedInterface_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kFactory_TakeImportedInterface_Name:
      var params = reader.decodeStruct(Factory_TakeImportedInterface_Params);
      return this.takeImportedInterface(params.obj).then(function(response) {
        var responseParams =
            new Factory_TakeImportedInterface_ResponseParams();
        responseParams.obj = response.obj;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFactory_TakeImportedInterface_Name,
            codec.align(Factory_TakeImportedInterface_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Factory_TakeImportedInterface_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFactory_DoStuff_Name:
        if (message.expectsResponse())
          paramsClass = Factory_DoStuff_Params;
      break;
      case kFactory_DoStuff2_Name:
        if (message.expectsResponse())
          paramsClass = Factory_DoStuff2_Params;
      break;
      case kFactory_CreateNamedObject_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Factory_CreateNamedObject_Params;
      break;
      case kFactory_RequestImportedInterface_Name:
        if (message.expectsResponse())
          paramsClass = Factory_RequestImportedInterface_Params;
      break;
      case kFactory_TakeImportedInterface_Name:
        if (message.expectsResponse())
          paramsClass = Factory_TakeImportedInterface_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFactoryResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFactory_DoStuff_Name:
        if (message.isResponse())
          paramsClass = Factory_DoStuff_ResponseParams;
        break;
      case kFactory_DoStuff2_Name:
        if (message.isResponse())
          paramsClass = Factory_DoStuff2_ResponseParams;
        break;
      case kFactory_RequestImportedInterface_Name:
        if (message.isResponse())
          paramsClass = Factory_RequestImportedInterface_ResponseParams;
        break;
      case kFactory_TakeImportedInterface_Name:
        if (message.isResponse())
          paramsClass = Factory_TakeImportedInterface_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Factory = {
    name: null,
    proxyClass: FactoryProxy,
    stubClass: FactoryStub,
    validateRequest: validateFactoryRequest,
    validateResponse: validateFactoryResponse,
  };
  FactoryStub.prototype.validator = validateFactoryRequest;
  FactoryProxy.prototype.validator = validateFactoryResponse;


  var exports = {};
  exports.Request = Request;
  exports.Response = Response;
  exports.NamedObject = NamedObject;
  exports.Factory = Factory;


  return exports;
});
