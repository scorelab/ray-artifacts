// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/surfaces/interfaces/display.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/gpu/interfaces/context_provider.mojom",
    "mojo/services/gpu/interfaces/viewport_parameter_listener.mojom",
    "mojo/services/surfaces/interfaces/surfaces.mojom",
], function(bindings, codec, connection, core, validator, context_provider$, viewport_parameter_listener$, surfaces$) {

  function Display_SubmitFrame_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Display_SubmitFrame_Params.prototype.initDefaults_ = function() {
    this.frame = null;
  };
  Display_SubmitFrame_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Display_SubmitFrame_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Display_SubmitFrame_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Display_SubmitFrame_Params.frame
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, surfaces$.Frame, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Display_SubmitFrame_Params.encodedSize = codec.kStructHeaderSize + 8;

  Display_SubmitFrame_Params.decode = function(decoder) {
    var packed;
    var val = new Display_SubmitFrame_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frame = decoder.decodeStructPointer(surfaces$.Frame);
    return val;
  };

  Display_SubmitFrame_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Display_SubmitFrame_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(surfaces$.Frame, val.frame);
  };

  function Display_SubmitFrame_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Display_SubmitFrame_ResponseParams.prototype.initDefaults_ = function() {
  };
  Display_SubmitFrame_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Display_SubmitFrame_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Display_SubmitFrame_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Display_SubmitFrame_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  Display_SubmitFrame_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Display_SubmitFrame_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Display_SubmitFrame_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Display_SubmitFrame_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };

  function DisplayFactory_Create_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  DisplayFactory_Create_Params.prototype.initDefaults_ = function() {
    this.context_provider = null;
    this.returner = null;
    this.display_request = null;
  };
  DisplayFactory_Create_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  DisplayFactory_Create_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, DisplayFactory_Create_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DisplayFactory_Create_Params.context_provider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DisplayFactory_Create_Params.returner
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate DisplayFactory_Create_Params.display_request
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  DisplayFactory_Create_Params.encodedSize = codec.kStructHeaderSize + 24;

  DisplayFactory_Create_Params.decode = function(decoder) {
    var packed;
    var val = new DisplayFactory_Create_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.context_provider = decoder.decodeStruct(codec.Interface);
    val.returner = decoder.decodeStruct(codec.NullableInterface);
    val.display_request = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  DisplayFactory_Create_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(DisplayFactory_Create_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.context_provider);
    encoder.encodeStruct(codec.NullableInterface, val.returner);
    encoder.encodeStruct(codec.Handle, val.display_request);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kDisplay_SubmitFrame_Name = 0;

  function DisplayProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DisplayProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DisplayProxy.prototype.submitFrame = function(frame) {
    var params = new Display_SubmitFrame_Params();
    params.frame = frame;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kDisplay_SubmitFrame_Name,
          codec.align(Display_SubmitFrame_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Display_SubmitFrame_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Display_SubmitFrame_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function DisplayStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DisplayStub.prototype = Object.create(bindings.StubBase.prototype);
  DisplayStub.prototype.submitFrame = function(frame) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.submitFrame && bindings.StubBindings(this).delegate.submitFrame(frame);
  }

  DisplayStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  DisplayStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplay_SubmitFrame_Name:
      var params = reader.decodeStruct(Display_SubmitFrame_Params);
      return this.submitFrame(params.frame).then(function(response) {
        var responseParams =
            new Display_SubmitFrame_ResponseParams();
        var builder = new codec.MessageWithRequestIDBuilder(
            kDisplay_SubmitFrame_Name,
            codec.align(Display_SubmitFrame_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Display_SubmitFrame_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDisplayRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDisplay_SubmitFrame_Name:
        if (message.expectsResponse())
          paramsClass = Display_SubmitFrame_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDisplayResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kDisplay_SubmitFrame_Name:
        if (message.isResponse())
          paramsClass = Display_SubmitFrame_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Display = {
    name: null,
    proxyClass: DisplayProxy,
    stubClass: DisplayStub,
    validateRequest: validateDisplayRequest,
    validateResponse: validateDisplayResponse,
  };
  DisplayStub.prototype.validator = validateDisplayRequest;
  DisplayProxy.prototype.validator = validateDisplayResponse;

  var kDisplayFactory_Create_Name = 0;

  function DisplayFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  DisplayFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  DisplayFactoryProxy.prototype.create = function(context_provider, returner, display_request) {
    var params = new DisplayFactory_Create_Params();
    params.context_provider = core.isHandle(context_provider) ? context_provider : connection.bindImpl(context_provider, context_provider$.ContextProvider);
    params.returner = core.isHandle(returner) ? returner : connection.bindImpl(returner, surfaces$.ResourceReturner);
    params.display_request = core.isHandle(display_request) ? display_request : connection.bindProxy(display_request, Display);
    var builder = new codec.MessageBuilder(
        kDisplayFactory_Create_Name,
        codec.align(DisplayFactory_Create_Params.encodedSize));
    builder.encodeStruct(DisplayFactory_Create_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function DisplayFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  DisplayFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  DisplayFactoryStub.prototype.create = function(context_provider, returner, display_request) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.create && bindings.StubBindings(this).delegate.create(connection.bindHandleToProxy(context_provider, context_provider$.ContextProvider), connection.bindHandleToProxy(returner, surfaces$.ResourceReturner), connection.bindHandleToStub(display_request, Display));
  }

  DisplayFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kDisplayFactory_Create_Name:
      var params = reader.decodeStruct(DisplayFactory_Create_Params);
      this.create(params.context_provider, params.returner, params.display_request);
      return true;
    default:
      return false;
    }
  };

  DisplayFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateDisplayFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kDisplayFactory_Create_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = DisplayFactory_Create_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateDisplayFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var DisplayFactory = {
    name: 'mojo::DisplayFactory',
    proxyClass: DisplayFactoryProxy,
    stubClass: DisplayFactoryStub,
    validateRequest: validateDisplayFactoryRequest,
    validateResponse: null,
  };
  DisplayFactoryStub.prototype.validator = validateDisplayFactoryRequest;
  DisplayFactoryProxy.prototype.validator = null;


  var exports = {};
  exports.Display = Display;
  exports.DisplayFactory = DisplayFactory;


  return exports;
});
