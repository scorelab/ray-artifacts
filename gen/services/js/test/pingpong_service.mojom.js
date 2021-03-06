// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("services/js/test/pingpong_service.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function PingPongService_SetClient_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_SetClient_Params.prototype.initDefaults_ = function() {
    this.client = null;
  };
  PingPongService_SetClient_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_SetClient_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_SetClient_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PingPongService_SetClient_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PingPongService_SetClient_Params.encodedSize = codec.kStructHeaderSize + 8;

  PingPongService_SetClient_Params.decode = function(decoder) {
    var packed;
    var val = new PingPongService_SetClient_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    return val;
  };

  PingPongService_SetClient_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_SetClient_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
  };

  function PingPongService_Ping_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_Ping_Params.prototype.initDefaults_ = function() {
    this.ping_value = 0;
  };
  PingPongService_Ping_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_Ping_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_Ping_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PingPongService_Ping_Params.encodedSize = codec.kStructHeaderSize + 8;

  PingPongService_Ping_Params.decode = function(decoder) {
    var packed;
    var val = new PingPongService_Ping_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ping_value = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PingPongService_Ping_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_Ping_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.ping_value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PingPongService_PingTargetURL_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_PingTargetURL_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.count = 0;
  };
  PingPongService_PingTargetURL_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_PingTargetURL_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_PingTargetURL_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PingPongService_PingTargetURL_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PingPongService_PingTargetURL_Params.encodedSize = codec.kStructHeaderSize + 16;

  PingPongService_PingTargetURL_Params.decode = function(decoder) {
    var packed;
    var val = new PingPongService_PingTargetURL_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.count = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PingPongService_PingTargetURL_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_PingTargetURL_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeStruct(codec.Uint16, val.count);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PingPongService_PingTargetURL_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_PingTargetURL_ResponseParams.prototype.initDefaults_ = function() {
    this.ok = false;
  };
  PingPongService_PingTargetURL_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_PingTargetURL_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_PingTargetURL_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PingPongService_PingTargetURL_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PingPongService_PingTargetURL_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PingPongService_PingTargetURL_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ok = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PingPongService_PingTargetURL_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_PingTargetURL_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.ok);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PingPongService_PingTargetService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_PingTargetService_Params.prototype.initDefaults_ = function() {
    this.service = null;
    this.count = 0;
  };
  PingPongService_PingTargetService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_PingTargetService_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_PingTargetService_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PingPongService_PingTargetService_Params.service
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PingPongService_PingTargetService_Params.encodedSize = codec.kStructHeaderSize + 16;

  PingPongService_PingTargetService_Params.decode = function(decoder) {
    var packed;
    var val = new PingPongService_PingTargetService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStruct(codec.Interface);
    val.count = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PingPongService_PingTargetService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_PingTargetService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.service);
    encoder.encodeStruct(codec.Uint16, val.count);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PingPongService_PingTargetService_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_PingTargetService_ResponseParams.prototype.initDefaults_ = function() {
    this.ok = false;
  };
  PingPongService_PingTargetService_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_PingTargetService_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_PingTargetService_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PingPongService_PingTargetService_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  PingPongService_PingTargetService_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new PingPongService_PingTargetService_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.ok = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PingPongService_PingTargetService_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_PingTargetService_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.ok);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PingPongService_GetPingPongService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_GetPingPongService_Params.prototype.initDefaults_ = function() {
    this.service = null;
  };
  PingPongService_GetPingPongService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_GetPingPongService_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_GetPingPongService_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate PingPongService_GetPingPongService_Params.service
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PingPongService_GetPingPongService_Params.encodedSize = codec.kStructHeaderSize + 8;

  PingPongService_GetPingPongService_Params.decode = function(decoder) {
    var packed;
    var val = new PingPongService_GetPingPongService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.service = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PingPongService_GetPingPongService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_GetPingPongService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.service);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function PingPongService_Quit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongService_Quit_Params.prototype.initDefaults_ = function() {
  };
  PingPongService_Quit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongService_Quit_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongService_Quit_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PingPongService_Quit_Params.encodedSize = codec.kStructHeaderSize + 0;

  PingPongService_Quit_Params.decode = function(decoder) {
    var packed;
    var val = new PingPongService_Quit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PingPongService_Quit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongService_Quit_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function PingPongClient_Pong_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PingPongClient_Pong_Params.prototype.initDefaults_ = function() {
    this.pong_value = 0;
  };
  PingPongClient_Pong_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PingPongClient_Pong_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, PingPongClient_Pong_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PingPongClient_Pong_Params.encodedSize = codec.kStructHeaderSize + 8;

  PingPongClient_Pong_Params.decode = function(decoder) {
    var packed;
    var val = new PingPongClient_Pong_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.pong_value = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PingPongClient_Pong_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PingPongClient_Pong_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.pong_value);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kPingPongService_SetClient_Name = 0;
  var kPingPongService_Ping_Name = 1;
  var kPingPongService_PingTargetURL_Name = 2;
  var kPingPongService_PingTargetService_Name = 3;
  var kPingPongService_GetPingPongService_Name = 4;
  var kPingPongService_Quit_Name = 5;

  function PingPongServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PingPongServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PingPongServiceProxy.prototype.setClient = function(client) {
    var params = new PingPongService_SetClient_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, PingPongClient);
    var builder = new codec.MessageBuilder(
        kPingPongService_SetClient_Name,
        codec.align(PingPongService_SetClient_Params.encodedSize));
    builder.encodeStruct(PingPongService_SetClient_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PingPongServiceProxy.prototype.ping = function(ping_value) {
    var params = new PingPongService_Ping_Params();
    params.ping_value = ping_value;
    var builder = new codec.MessageBuilder(
        kPingPongService_Ping_Name,
        codec.align(PingPongService_Ping_Params.encodedSize));
    builder.encodeStruct(PingPongService_Ping_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PingPongServiceProxy.prototype.pingTargetURL = function(url, count) {
    var params = new PingPongService_PingTargetURL_Params();
    params.url = url;
    params.count = count;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPingPongService_PingTargetURL_Name,
          codec.align(PingPongService_PingTargetURL_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PingPongService_PingTargetURL_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PingPongService_PingTargetURL_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PingPongServiceProxy.prototype.pingTargetService = function(service, count) {
    var params = new PingPongService_PingTargetService_Params();
    params.service = core.isHandle(service) ? service : connection.bindImpl(service, PingPongService);
    params.count = count;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kPingPongService_PingTargetService_Name,
          codec.align(PingPongService_PingTargetService_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(PingPongService_PingTargetService_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(PingPongService_PingTargetService_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  PingPongServiceProxy.prototype.getPingPongService = function(service) {
    var params = new PingPongService_GetPingPongService_Params();
    params.service = core.isHandle(service) ? service : connection.bindProxy(service, PingPongService);
    var builder = new codec.MessageBuilder(
        kPingPongService_GetPingPongService_Name,
        codec.align(PingPongService_GetPingPongService_Params.encodedSize));
    builder.encodeStruct(PingPongService_GetPingPongService_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PingPongServiceProxy.prototype.quit = function() {
    var params = new PingPongService_Quit_Params();
    var builder = new codec.MessageBuilder(
        kPingPongService_Quit_Name,
        codec.align(PingPongService_Quit_Params.encodedSize));
    builder.encodeStruct(PingPongService_Quit_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PingPongServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PingPongServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  PingPongServiceStub.prototype.setClient = function(client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setClient && bindings.StubBindings(this).delegate.setClient(connection.bindHandleToProxy(client, PingPongClient));
  }
  PingPongServiceStub.prototype.ping = function(ping_value) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.ping && bindings.StubBindings(this).delegate.ping(ping_value);
  }
  PingPongServiceStub.prototype.pingTargetURL = function(url, count) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.pingTargetURL && bindings.StubBindings(this).delegate.pingTargetURL(url, count);
  }
  PingPongServiceStub.prototype.pingTargetService = function(service, count) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.pingTargetService && bindings.StubBindings(this).delegate.pingTargetService(connection.bindHandleToProxy(service, PingPongService), count);
  }
  PingPongServiceStub.prototype.getPingPongService = function(service) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getPingPongService && bindings.StubBindings(this).delegate.getPingPongService(connection.bindHandleToStub(service, PingPongService));
  }
  PingPongServiceStub.prototype.quit = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.quit && bindings.StubBindings(this).delegate.quit();
  }

  PingPongServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPingPongService_SetClient_Name:
      var params = reader.decodeStruct(PingPongService_SetClient_Params);
      this.setClient(params.client);
      return true;
    case kPingPongService_Ping_Name:
      var params = reader.decodeStruct(PingPongService_Ping_Params);
      this.ping(params.ping_value);
      return true;
    case kPingPongService_GetPingPongService_Name:
      var params = reader.decodeStruct(PingPongService_GetPingPongService_Params);
      this.getPingPongService(params.service);
      return true;
    case kPingPongService_Quit_Name:
      var params = reader.decodeStruct(PingPongService_Quit_Params);
      this.quit();
      return true;
    default:
      return false;
    }
  };

  PingPongServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPingPongService_PingTargetURL_Name:
      var params = reader.decodeStruct(PingPongService_PingTargetURL_Params);
      return this.pingTargetURL(params.url, params.count).then(function(response) {
        var responseParams =
            new PingPongService_PingTargetURL_ResponseParams();
        responseParams.ok = response.ok;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPingPongService_PingTargetURL_Name,
            codec.align(PingPongService_PingTargetURL_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PingPongService_PingTargetURL_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kPingPongService_PingTargetService_Name:
      var params = reader.decodeStruct(PingPongService_PingTargetService_Params);
      return this.pingTargetService(params.service, params.count).then(function(response) {
        var responseParams =
            new PingPongService_PingTargetService_ResponseParams();
        responseParams.ok = response.ok;
        var builder = new codec.MessageWithRequestIDBuilder(
            kPingPongService_PingTargetService_Name,
            codec.align(PingPongService_PingTargetService_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(PingPongService_PingTargetService_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePingPongServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPingPongService_SetClient_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PingPongService_SetClient_Params;
      break;
      case kPingPongService_Ping_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PingPongService_Ping_Params;
      break;
      case kPingPongService_PingTargetURL_Name:
        if (message.expectsResponse())
          paramsClass = PingPongService_PingTargetURL_Params;
      break;
      case kPingPongService_PingTargetService_Name:
        if (message.expectsResponse())
          paramsClass = PingPongService_PingTargetService_Params;
      break;
      case kPingPongService_GetPingPongService_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PingPongService_GetPingPongService_Params;
      break;
      case kPingPongService_Quit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PingPongService_Quit_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePingPongServiceResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kPingPongService_PingTargetURL_Name:
        if (message.isResponse())
          paramsClass = PingPongService_PingTargetURL_ResponseParams;
        break;
      case kPingPongService_PingTargetService_Name:
        if (message.isResponse())
          paramsClass = PingPongService_PingTargetService_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var PingPongService = {
    name: 'js::PingPongService',
    proxyClass: PingPongServiceProxy,
    stubClass: PingPongServiceStub,
    validateRequest: validatePingPongServiceRequest,
    validateResponse: validatePingPongServiceResponse,
  };
  PingPongServiceStub.prototype.validator = validatePingPongServiceRequest;
  PingPongServiceProxy.prototype.validator = validatePingPongServiceResponse;

  var kPingPongClient_Pong_Name = 0;

  function PingPongClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  PingPongClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  PingPongClientProxy.prototype.pong = function(pong_value) {
    var params = new PingPongClient_Pong_Params();
    params.pong_value = pong_value;
    var builder = new codec.MessageBuilder(
        kPingPongClient_Pong_Name,
        codec.align(PingPongClient_Pong_Params.encodedSize));
    builder.encodeStruct(PingPongClient_Pong_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PingPongClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  PingPongClientStub.prototype = Object.create(bindings.StubBase.prototype);
  PingPongClientStub.prototype.pong = function(pong_value) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.pong && bindings.StubBindings(this).delegate.pong(pong_value);
  }

  PingPongClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPingPongClient_Pong_Name:
      var params = reader.decodeStruct(PingPongClient_Pong_Params);
      this.pong(params.pong_value);
      return true;
    default:
      return false;
    }
  };

  PingPongClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validatePingPongClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPingPongClient_Pong_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PingPongClient_Pong_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePingPongClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PingPongClient = {
    name: null,
    proxyClass: PingPongClientProxy,
    stubClass: PingPongClientStub,
    validateRequest: validatePingPongClientRequest,
    validateResponse: null,
  };
  PingPongClientStub.prototype.validator = validatePingPongClientRequest;
  PingPongClientProxy.prototype.validator = null;


  var exports = {};
  exports.PingPongService = PingPongService;
  exports.PingPongClient = PingPongClient;


  return exports;
});
