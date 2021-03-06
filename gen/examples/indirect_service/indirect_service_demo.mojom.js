// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("examples/indirect_service/indirect_service_demo.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function IntegerService_Increment_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IntegerService_Increment_Params.prototype.initDefaults_ = function() {
  };
  IntegerService_Increment_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IntegerService_Increment_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IntegerService_Increment_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IntegerService_Increment_Params.encodedSize = codec.kStructHeaderSize + 0;

  IntegerService_Increment_Params.decode = function(decoder) {
    var packed;
    var val = new IntegerService_Increment_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  IntegerService_Increment_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IntegerService_Increment_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function IntegerService_Increment_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IntegerService_Increment_ResponseParams.prototype.initDefaults_ = function() {
    this.value = 0;
  };
  IntegerService_Increment_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IntegerService_Increment_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IntegerService_Increment_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  IntegerService_Increment_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  IntegerService_Increment_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new IntegerService_Increment_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.value = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  IntegerService_Increment_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IntegerService_Increment_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function IndirectIntegerService_Set_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IndirectIntegerService_Set_Params.prototype.initDefaults_ = function() {
    this.service = null;
  };
  IndirectIntegerService_Set_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IndirectIntegerService_Set_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IndirectIntegerService_Set_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate IndirectIntegerService_Set_Params.service
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IndirectIntegerService_Set_Params.encodedSize = codec.kStructHeaderSize + 8;

  IndirectIntegerService_Set_Params.decode = function(decoder) {
    var packed;
    var val = new IndirectIntegerService_Set_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStruct(codec.NullableInterface);
    return val;
  };

  IndirectIntegerService_Set_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IndirectIntegerService_Set_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableInterface, val.service);
  };

  function IndirectIntegerService_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  IndirectIntegerService_Get_Params.prototype.initDefaults_ = function() {
    this.service = null;
  };
  IndirectIntegerService_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  IndirectIntegerService_Get_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, IndirectIntegerService_Get_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate IndirectIntegerService_Get_Params.service
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  IndirectIntegerService_Get_Params.encodedSize = codec.kStructHeaderSize + 8;

  IndirectIntegerService_Get_Params.decode = function(decoder) {
    var packed;
    var val = new IndirectIntegerService_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  IndirectIntegerService_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(IndirectIntegerService_Get_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.service);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kIntegerService_Increment_Name = 0;

  function IntegerServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  IntegerServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  IntegerServiceProxy.prototype.increment = function() {
    var params = new IntegerService_Increment_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kIntegerService_Increment_Name,
          codec.align(IntegerService_Increment_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(IntegerService_Increment_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(IntegerService_Increment_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function IntegerServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  IntegerServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  IntegerServiceStub.prototype.increment = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.increment && bindings.StubBindings(this).delegate.increment();
  }

  IntegerServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  IntegerServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIntegerService_Increment_Name:
      var params = reader.decodeStruct(IntegerService_Increment_Params);
      return this.increment().then(function(response) {
        var responseParams =
            new IntegerService_Increment_ResponseParams();
        responseParams.value = response.value;
        var builder = new codec.MessageWithRequestIDBuilder(
            kIntegerService_Increment_Name,
            codec.align(IntegerService_Increment_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(IntegerService_Increment_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateIntegerServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIntegerService_Increment_Name:
        if (message.expectsResponse())
          paramsClass = IntegerService_Increment_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIntegerServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kIntegerService_Increment_Name:
        if (message.isResponse())
          paramsClass = IntegerService_Increment_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var IntegerService = {
    name: 'mojo::examples::IntegerService',
    proxyClass: IntegerServiceProxy,
    stubClass: IntegerServiceStub,
    validateRequest: validateIntegerServiceRequest,
    validateResponse: validateIntegerServiceResponse,
  };
  IntegerServiceStub.prototype.validator = validateIntegerServiceRequest;
  IntegerServiceProxy.prototype.validator = validateIntegerServiceResponse;

  var kIndirectIntegerService_Set_Name = 0;
  var kIndirectIntegerService_Get_Name = 1;

  function IndirectIntegerServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  IndirectIntegerServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  IndirectIntegerServiceProxy.prototype.set = function(service) {
    var params = new IndirectIntegerService_Set_Params();
    params.service = core.isHandle(service) ? service : connection.bindImpl(service, IntegerService);
    var builder = new codec.MessageBuilder(
        kIndirectIntegerService_Set_Name,
        codec.align(IndirectIntegerService_Set_Params.encodedSize));
    builder.encodeStruct(IndirectIntegerService_Set_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  IndirectIntegerServiceProxy.prototype.get = function(service) {
    var params = new IndirectIntegerService_Get_Params();
    params.service = core.isHandle(service) ? service : connection.bindProxy(service, IntegerService);
    var builder = new codec.MessageBuilder(
        kIndirectIntegerService_Get_Name,
        codec.align(IndirectIntegerService_Get_Params.encodedSize));
    builder.encodeStruct(IndirectIntegerService_Get_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function IndirectIntegerServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  IndirectIntegerServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  IndirectIntegerServiceStub.prototype.set = function(service) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.set && bindings.StubBindings(this).delegate.set(connection.bindHandleToProxy(service, IntegerService));
  }
  IndirectIntegerServiceStub.prototype.get = function(service) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.get && bindings.StubBindings(this).delegate.get(connection.bindHandleToStub(service, IntegerService));
  }

  IndirectIntegerServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kIndirectIntegerService_Set_Name:
      var params = reader.decodeStruct(IndirectIntegerService_Set_Params);
      this.set(params.service);
      return true;
    case kIndirectIntegerService_Get_Name:
      var params = reader.decodeStruct(IndirectIntegerService_Get_Params);
      this.get(params.service);
      return true;
    default:
      return false;
    }
  };

  IndirectIntegerServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateIndirectIntegerServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kIndirectIntegerService_Set_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IndirectIntegerService_Set_Params;
      break;
      case kIndirectIntegerService_Get_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = IndirectIntegerService_Get_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateIndirectIntegerServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var IndirectIntegerService = {
    name: 'mojo::examples::IndirectIntegerService',
    proxyClass: IndirectIntegerServiceProxy,
    stubClass: IndirectIntegerServiceStub,
    validateRequest: validateIndirectIntegerServiceRequest,
    validateResponse: null,
  };
  IndirectIntegerServiceStub.prototype.validator = validateIndirectIntegerServiceRequest;
  IndirectIntegerServiceProxy.prototype.validator = null;


  var exports = {};
  exports.IntegerService = IntegerService;
  exports.IndirectIntegerService = IndirectIntegerService;


  return exports;
});
