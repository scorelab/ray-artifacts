// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/public/interfaces/application/application.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/public/interfaces/application/service_provider.mojom",
    "mojo/public/interfaces/application/shell.mojom",
], function(bindings, codec, connection, core, validator, service_provider$, shell$) {

  function Application_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Application_Initialize_Params.prototype.initDefaults_ = function() {
    this.shell = null;
    this.args = null;
    this.url = null;
  };
  Application_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Application_Initialize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Application_Initialize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_Initialize_Params.shell
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_Initialize_Params.args
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_Initialize_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Application_Initialize_Params.encodedSize = codec.kStructHeaderSize + 24;

  Application_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new Application_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.shell = decoder.decodeStruct(codec.Interface);
    val.args = decoder.decodeArrayPointer(codec.String);
    val.url = decoder.decodeStruct(codec.String);
    return val;
  };

  Application_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Application_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.shell);
    encoder.encodeArrayPointer(codec.String, val.args);
    encoder.encodeStruct(codec.String, val.url);
  };

  function Application_AcceptConnection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Application_AcceptConnection_Params.prototype.initDefaults_ = function() {
    this.requestor_url = null;
    this.resolved_url = null;
    this.services = null;
  };
  Application_AcceptConnection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Application_AcceptConnection_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Application_AcceptConnection_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_AcceptConnection_Params.requestor_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_AcceptConnection_Params.resolved_url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Application_AcceptConnection_Params.services
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Application_AcceptConnection_Params.encodedSize = codec.kStructHeaderSize + 24;

  Application_AcceptConnection_Params.decode = function(decoder) {
    var packed;
    var val = new Application_AcceptConnection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestor_url = decoder.decodeStruct(codec.String);
    val.resolved_url = decoder.decodeStruct(codec.String);
    val.services = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Application_AcceptConnection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Application_AcceptConnection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.requestor_url);
    encoder.encodeStruct(codec.String, val.resolved_url);
    encoder.encodeStruct(codec.Handle, val.services);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Application_RequestQuit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Application_RequestQuit_Params.prototype.initDefaults_ = function() {
  };
  Application_RequestQuit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Application_RequestQuit_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Application_RequestQuit_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Application_RequestQuit_Params.encodedSize = codec.kStructHeaderSize + 0;

  Application_RequestQuit_Params.decode = function(decoder) {
    var packed;
    var val = new Application_RequestQuit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Application_RequestQuit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Application_RequestQuit_Params.encodedSize);
    encoder.writeUint32(0);
  };

  var kApplication_Initialize_Name = 0;
  var kApplication_AcceptConnection_Name = 1;
  var kApplication_RequestQuit_Name = 2;

  function ApplicationProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ApplicationProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ApplicationProxy.prototype.initialize = function(shell, args, url) {
    var params = new Application_Initialize_Params();
    params.shell = core.isHandle(shell) ? shell : connection.bindImpl(shell, shell$.Shell);
    params.args = args;
    params.url = url;
    var builder = new codec.MessageBuilder(
        kApplication_Initialize_Name,
        codec.align(Application_Initialize_Params.encodedSize));
    builder.encodeStruct(Application_Initialize_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationProxy.prototype.acceptConnection = function(requestor_url, resolved_url, services) {
    var params = new Application_AcceptConnection_Params();
    params.requestor_url = requestor_url;
    params.resolved_url = resolved_url;
    params.services = core.isHandle(services) ? services : connection.bindProxy(services, service_provider$.ServiceProvider);
    var builder = new codec.MessageBuilder(
        kApplication_AcceptConnection_Name,
        codec.align(Application_AcceptConnection_Params.encodedSize));
    builder.encodeStruct(Application_AcceptConnection_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ApplicationProxy.prototype.requestQuit = function() {
    var params = new Application_RequestQuit_Params();
    var builder = new codec.MessageBuilder(
        kApplication_RequestQuit_Name,
        codec.align(Application_RequestQuit_Params.encodedSize));
    builder.encodeStruct(Application_RequestQuit_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ApplicationStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ApplicationStub.prototype = Object.create(bindings.StubBase.prototype);
  ApplicationStub.prototype.initialize = function(shell, args, url) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.initialize && bindings.StubBindings(this).delegate.initialize(connection.bindHandleToProxy(shell, shell$.Shell), args, url);
  }
  ApplicationStub.prototype.acceptConnection = function(requestor_url, resolved_url, services) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.acceptConnection && bindings.StubBindings(this).delegate.acceptConnection(requestor_url, resolved_url, connection.bindHandleToStub(services, service_provider$.ServiceProvider));
  }
  ApplicationStub.prototype.requestQuit = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.requestQuit && bindings.StubBindings(this).delegate.requestQuit();
  }

  ApplicationStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kApplication_Initialize_Name:
      var params = reader.decodeStruct(Application_Initialize_Params);
      this.initialize(params.shell, params.args, params.url);
      return true;
    case kApplication_AcceptConnection_Name:
      var params = reader.decodeStruct(Application_AcceptConnection_Params);
      this.acceptConnection(params.requestor_url, params.resolved_url, params.services);
      return true;
    case kApplication_RequestQuit_Name:
      var params = reader.decodeStruct(Application_RequestQuit_Params);
      this.requestQuit();
      return true;
    default:
      return false;
    }
  };

  ApplicationStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateApplicationRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kApplication_Initialize_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Application_Initialize_Params;
      break;
      case kApplication_AcceptConnection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Application_AcceptConnection_Params;
      break;
      case kApplication_RequestQuit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Application_RequestQuit_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateApplicationResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Application = {
    name: null,
    proxyClass: ApplicationProxy,
    stubClass: ApplicationStub,
    validateRequest: validateApplicationRequest,
    validateResponse: null,
  };
  ApplicationStub.prototype.validator = validateApplicationRequest;
  ApplicationProxy.prototype.validator = null;


  var exports = {};
  exports.Application = Application;


  return exports;
});
