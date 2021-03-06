// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/network/interfaces/web_socket.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/public/interfaces/network/network_error.mojom",
], function(bindings, codec, connection, core, validator, network_error$) {

  function WebSocket_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_Connect_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.protocols = null;
    this.origin = null;
    this.send_stream = null;
    this.client = null;
  };
  WebSocket_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_Connect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_Connect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_Connect_Params.url
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_Connect_Params.protocols
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_Connect_Params.origin
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_Connect_Params.send_stream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocket_Connect_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 28, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocket_Connect_Params.encodedSize = codec.kStructHeaderSize + 40;

  WebSocket_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url = decoder.decodeStruct(codec.String);
    val.protocols = decoder.decodeArrayPointer(codec.String);
    val.origin = decoder.decodeStruct(codec.String);
    val.send_stream = decoder.decodeStruct(codec.Handle);
    val.client = decoder.decodeStruct(codec.Interface);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebSocket_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.url);
    encoder.encodeArrayPointer(codec.String, val.protocols);
    encoder.encodeStruct(codec.String, val.origin);
    encoder.encodeStruct(codec.Handle, val.send_stream);
    encoder.encodeStruct(codec.Interface, val.client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function WebSocket_Send_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_Send_Params.prototype.initDefaults_ = function() {
    this.fin = false;
    this.type = 0;
    this.num_bytes = 0;
  };
  WebSocket_Send_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_Send_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_Send_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  WebSocket_Send_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocket_Send_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_Send_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fin = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.type = decoder.decodeStruct(codec.Int32);
    val.num_bytes = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebSocket_Send_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_Send_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.fin);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Uint32, val.num_bytes);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function WebSocket_FlowControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_FlowControl_Params.prototype.initDefaults_ = function() {
    this.quota = 0;
  };
  WebSocket_FlowControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_FlowControl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_FlowControl_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebSocket_FlowControl_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocket_FlowControl_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_FlowControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.quota = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebSocket_FlowControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_FlowControl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.quota);
  };

  function WebSocket_Close_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocket_Close_Params.prototype.initDefaults_ = function() {
    this.code = 0;
    this.reason = null;
  };
  WebSocket_Close_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocket_Close_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocket_Close_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate WebSocket_Close_Params.reason
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocket_Close_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocket_Close_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocket_Close_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.code = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.reason = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocket_Close_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocket_Close_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.reason);
  };

  function WebSocketClient_DidConnect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_DidConnect_Params.prototype.initDefaults_ = function() {
    this.selected_subprotocol = null;
    this.extensions = null;
    this.receive_stream = null;
  };
  WebSocketClient_DidConnect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_DidConnect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_DidConnect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_DidConnect_Params.selected_subprotocol
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_DidConnect_Params.extensions
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_DidConnect_Params.receive_stream
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_DidConnect_Params.encodedSize = codec.kStructHeaderSize + 24;

  WebSocketClient_DidConnect_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_DidConnect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.selected_subprotocol = decoder.decodeStruct(codec.String);
    val.extensions = decoder.decodeStruct(codec.String);
    val.receive_stream = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebSocketClient_DidConnect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_DidConnect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.selected_subprotocol);
    encoder.encodeStruct(codec.String, val.extensions);
    encoder.encodeStruct(codec.Handle, val.receive_stream);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function WebSocketClient_DidReceiveData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_DidReceiveData_Params.prototype.initDefaults_ = function() {
    this.fin = false;
    this.type = 0;
    this.num_bytes = 0;
  };
  WebSocketClient_DidReceiveData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_DidReceiveData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_DidReceiveData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  WebSocketClient_DidReceiveData_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocketClient_DidReceiveData_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_DidReceiveData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.fin = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.type = decoder.decodeStruct(codec.Int32);
    val.num_bytes = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  WebSocketClient_DidReceiveData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_DidReceiveData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.fin);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.encodeStruct(codec.Uint32, val.num_bytes);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function WebSocketClient_DidReceiveFlowControl_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_DidReceiveFlowControl_Params.prototype.initDefaults_ = function() {
    this.quota = 0;
  };
  WebSocketClient_DidReceiveFlowControl_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_DidReceiveFlowControl_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_DidReceiveFlowControl_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  WebSocketClient_DidReceiveFlowControl_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocketClient_DidReceiveFlowControl_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_DidReceiveFlowControl_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.quota = decoder.decodeStruct(codec.Int64);
    return val;
  };

  WebSocketClient_DidReceiveFlowControl_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_DidReceiveFlowControl_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.quota);
  };

  function WebSocketClient_DidFail_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_DidFail_Params.prototype.initDefaults_ = function() {
    this.message = null;
  };
  WebSocketClient_DidFail_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_DidFail_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_DidFail_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate WebSocketClient_DidFail_Params.message
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_DidFail_Params.encodedSize = codec.kStructHeaderSize + 8;

  WebSocketClient_DidFail_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_DidFail_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.message = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocketClient_DidFail_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_DidFail_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.message);
  };

  function WebSocketClient_DidClose_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  WebSocketClient_DidClose_Params.prototype.initDefaults_ = function() {
    this.was_clean = false;
    this.code = 0;
    this.reason = null;
  };
  WebSocketClient_DidClose_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  WebSocketClient_DidClose_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, WebSocketClient_DidClose_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate WebSocketClient_DidClose_Params.reason
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  WebSocketClient_DidClose_Params.encodedSize = codec.kStructHeaderSize + 16;

  WebSocketClient_DidClose_Params.decode = function(decoder) {
    var packed;
    var val = new WebSocketClient_DidClose_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.was_clean = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    val.code = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.reason = decoder.decodeStruct(codec.String);
    return val;
  };

  WebSocketClient_DidClose_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(WebSocketClient_DidClose_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.was_clean);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint16, val.code);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.reason);
  };

  var kWebSocket_Connect_Name = 0;
  var kWebSocket_Send_Name = 1;
  var kWebSocket_FlowControl_Name = 2;
  var kWebSocket_Close_Name = 3;

  function WebSocketProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebSocketProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebSocketProxy.prototype.connect = function(url, protocols, origin, send_stream, client) {
    var params = new WebSocket_Connect_Params();
    params.url = url;
    params.protocols = protocols;
    params.origin = origin;
    params.send_stream = send_stream;
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, WebSocketClient);
    var builder = new codec.MessageBuilder(
        kWebSocket_Connect_Name,
        codec.align(WebSocket_Connect_Params.encodedSize));
    builder.encodeStruct(WebSocket_Connect_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketProxy.prototype.send = function(fin, type, num_bytes) {
    var params = new WebSocket_Send_Params();
    params.fin = fin;
    params.type = type;
    params.num_bytes = num_bytes;
    var builder = new codec.MessageBuilder(
        kWebSocket_Send_Name,
        codec.align(WebSocket_Send_Params.encodedSize));
    builder.encodeStruct(WebSocket_Send_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketProxy.prototype.flowControl = function(quota) {
    var params = new WebSocket_FlowControl_Params();
    params.quota = quota;
    var builder = new codec.MessageBuilder(
        kWebSocket_FlowControl_Name,
        codec.align(WebSocket_FlowControl_Params.encodedSize));
    builder.encodeStruct(WebSocket_FlowControl_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketProxy.prototype.close = function(code, reason) {
    var params = new WebSocket_Close_Params();
    params.code = code;
    params.reason = reason;
    var builder = new codec.MessageBuilder(
        kWebSocket_Close_Name,
        codec.align(WebSocket_Close_Params.encodedSize));
    builder.encodeStruct(WebSocket_Close_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebSocketStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebSocketStub.prototype = Object.create(bindings.StubBase.prototype);
  WebSocketStub.prototype.connect = function(url, protocols, origin, send_stream, client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connect && bindings.StubBindings(this).delegate.connect(url, protocols, origin, send_stream, connection.bindHandleToProxy(client, WebSocketClient));
  }
  WebSocketStub.prototype.send = function(fin, type, num_bytes) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.send && bindings.StubBindings(this).delegate.send(fin, type, num_bytes);
  }
  WebSocketStub.prototype.flowControl = function(quota) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.flowControl && bindings.StubBindings(this).delegate.flowControl(quota);
  }
  WebSocketStub.prototype.close = function(code, reason) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.close && bindings.StubBindings(this).delegate.close(code, reason);
  }

  WebSocketStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebSocket_Connect_Name:
      var params = reader.decodeStruct(WebSocket_Connect_Params);
      this.connect(params.url, params.protocols, params.origin, params.send_stream, params.client);
      return true;
    case kWebSocket_Send_Name:
      var params = reader.decodeStruct(WebSocket_Send_Params);
      this.send(params.fin, params.type, params.num_bytes);
      return true;
    case kWebSocket_FlowControl_Name:
      var params = reader.decodeStruct(WebSocket_FlowControl_Params);
      this.flowControl(params.quota);
      return true;
    case kWebSocket_Close_Name:
      var params = reader.decodeStruct(WebSocket_Close_Params);
      this.close(params.code, params.reason);
      return true;
    default:
      return false;
    }
  };

  WebSocketStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebSocketRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebSocket_Connect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_Connect_Params;
      break;
      case kWebSocket_Send_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_Send_Params;
      break;
      case kWebSocket_FlowControl_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_FlowControl_Params;
      break;
      case kWebSocket_Close_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocket_Close_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebSocketResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebSocket = {
    name: null,
    proxyClass: WebSocketProxy,
    stubClass: WebSocketStub,
    validateRequest: validateWebSocketRequest,
    validateResponse: null,
  };
  WebSocket.kAbnormalCloseCode = 1006,
  WebSocket.MessageType = {};
  WebSocket.MessageType.CONTINUATION = 0;
  WebSocket.MessageType.TEXT = WebSocket.MessageType.CONTINUATION + 1;
  WebSocket.MessageType.BINARY = WebSocket.MessageType.TEXT + 1;
  WebSocketStub.prototype.validator = validateWebSocketRequest;
  WebSocketProxy.prototype.validator = null;

  var kWebSocketClient_DidConnect_Name = 0;
  var kWebSocketClient_DidReceiveData_Name = 1;
  var kWebSocketClient_DidReceiveFlowControl_Name = 2;
  var kWebSocketClient_DidFail_Name = 3;
  var kWebSocketClient_DidClose_Name = 4;

  function WebSocketClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  WebSocketClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  WebSocketClientProxy.prototype.didConnect = function(selected_subprotocol, extensions, receive_stream) {
    var params = new WebSocketClient_DidConnect_Params();
    params.selected_subprotocol = selected_subprotocol;
    params.extensions = extensions;
    params.receive_stream = receive_stream;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_DidConnect_Name,
        codec.align(WebSocketClient_DidConnect_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_DidConnect_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.didReceiveData = function(fin, type, num_bytes) {
    var params = new WebSocketClient_DidReceiveData_Params();
    params.fin = fin;
    params.type = type;
    params.num_bytes = num_bytes;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_DidReceiveData_Name,
        codec.align(WebSocketClient_DidReceiveData_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_DidReceiveData_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.didReceiveFlowControl = function(quota) {
    var params = new WebSocketClient_DidReceiveFlowControl_Params();
    params.quota = quota;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_DidReceiveFlowControl_Name,
        codec.align(WebSocketClient_DidReceiveFlowControl_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_DidReceiveFlowControl_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.didFail = function(message) {
    var params = new WebSocketClient_DidFail_Params();
    params.message = message;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_DidFail_Name,
        codec.align(WebSocketClient_DidFail_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_DidFail_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  WebSocketClientProxy.prototype.didClose = function(was_clean, code, reason) {
    var params = new WebSocketClient_DidClose_Params();
    params.was_clean = was_clean;
    params.code = code;
    params.reason = reason;
    var builder = new codec.MessageBuilder(
        kWebSocketClient_DidClose_Name,
        codec.align(WebSocketClient_DidClose_Params.encodedSize));
    builder.encodeStruct(WebSocketClient_DidClose_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function WebSocketClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  WebSocketClientStub.prototype = Object.create(bindings.StubBase.prototype);
  WebSocketClientStub.prototype.didConnect = function(selected_subprotocol, extensions, receive_stream) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didConnect && bindings.StubBindings(this).delegate.didConnect(selected_subprotocol, extensions, receive_stream);
  }
  WebSocketClientStub.prototype.didReceiveData = function(fin, type, num_bytes) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didReceiveData && bindings.StubBindings(this).delegate.didReceiveData(fin, type, num_bytes);
  }
  WebSocketClientStub.prototype.didReceiveFlowControl = function(quota) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didReceiveFlowControl && bindings.StubBindings(this).delegate.didReceiveFlowControl(quota);
  }
  WebSocketClientStub.prototype.didFail = function(message) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didFail && bindings.StubBindings(this).delegate.didFail(message);
  }
  WebSocketClientStub.prototype.didClose = function(was_clean, code, reason) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.didClose && bindings.StubBindings(this).delegate.didClose(was_clean, code, reason);
  }

  WebSocketClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kWebSocketClient_DidConnect_Name:
      var params = reader.decodeStruct(WebSocketClient_DidConnect_Params);
      this.didConnect(params.selected_subprotocol, params.extensions, params.receive_stream);
      return true;
    case kWebSocketClient_DidReceiveData_Name:
      var params = reader.decodeStruct(WebSocketClient_DidReceiveData_Params);
      this.didReceiveData(params.fin, params.type, params.num_bytes);
      return true;
    case kWebSocketClient_DidReceiveFlowControl_Name:
      var params = reader.decodeStruct(WebSocketClient_DidReceiveFlowControl_Params);
      this.didReceiveFlowControl(params.quota);
      return true;
    case kWebSocketClient_DidFail_Name:
      var params = reader.decodeStruct(WebSocketClient_DidFail_Params);
      this.didFail(params.message);
      return true;
    case kWebSocketClient_DidClose_Name:
      var params = reader.decodeStruct(WebSocketClient_DidClose_Params);
      this.didClose(params.was_clean, params.code, params.reason);
      return true;
    default:
      return false;
    }
  };

  WebSocketClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateWebSocketClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kWebSocketClient_DidConnect_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_DidConnect_Params;
      break;
      case kWebSocketClient_DidReceiveData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_DidReceiveData_Params;
      break;
      case kWebSocketClient_DidReceiveFlowControl_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_DidReceiveFlowControl_Params;
      break;
      case kWebSocketClient_DidFail_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_DidFail_Params;
      break;
      case kWebSocketClient_DidClose_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = WebSocketClient_DidClose_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateWebSocketClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var WebSocketClient = {
    name: null,
    proxyClass: WebSocketClientProxy,
    stubClass: WebSocketClientStub,
    validateRequest: validateWebSocketClientRequest,
    validateResponse: null,
  };
  WebSocketClientStub.prototype.validator = validateWebSocketClientRequest;
  WebSocketClientProxy.prototype.validator = null;


  var exports = {};
  exports.WebSocket = WebSocket;
  exports.WebSocketClient = WebSocketClient;


  return exports;
});
