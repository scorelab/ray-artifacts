// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/clipboard/interfaces/clipboard.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function Clipboard_GetSequenceNumber_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetSequenceNumber_Params.prototype.initDefaults_ = function() {
    this.clipboard_type = 0;
  };
  Clipboard_GetSequenceNumber_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Clipboard_GetSequenceNumber_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Clipboard_GetSequenceNumber_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Clipboard_GetSequenceNumber_Params.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_GetSequenceNumber_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetSequenceNumber_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboard_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Clipboard_GetSequenceNumber_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetSequenceNumber_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboard_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Clipboard_GetSequenceNumber_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetSequenceNumber_ResponseParams.prototype.initDefaults_ = function() {
    this.sequence = 0;
  };
  Clipboard_GetSequenceNumber_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Clipboard_GetSequenceNumber_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Clipboard_GetSequenceNumber_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Clipboard_GetSequenceNumber_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_GetSequenceNumber_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetSequenceNumber_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sequence = decoder.decodeStruct(codec.Uint64);
    return val;
  };

  Clipboard_GetSequenceNumber_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetSequenceNumber_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint64, val.sequence);
  };

  function Clipboard_GetAvailableMimeTypes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetAvailableMimeTypes_Params.prototype.initDefaults_ = function() {
    this.clipboard_types = 0;
  };
  Clipboard_GetAvailableMimeTypes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Clipboard_GetAvailableMimeTypes_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Clipboard_GetAvailableMimeTypes_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Clipboard_GetAvailableMimeTypes_Params.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_GetAvailableMimeTypes_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetAvailableMimeTypes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboard_types = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Clipboard_GetAvailableMimeTypes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetAvailableMimeTypes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboard_types);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Clipboard_GetAvailableMimeTypes_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.initDefaults_ = function() {
    this.types = null;
  };
  Clipboard_GetAvailableMimeTypes_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Clipboard_GetAvailableMimeTypes_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Clipboard_GetAvailableMimeTypes_ResponseParams.types
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_GetAvailableMimeTypes_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Clipboard_GetAvailableMimeTypes_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.types = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Clipboard_GetAvailableMimeTypes_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_GetAvailableMimeTypes_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.types);
  };

  function Clipboard_ReadMimeType_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_ReadMimeType_Params.prototype.initDefaults_ = function() {
    this.clipboard_type = 0;
    this.mime_type = null;
  };
  Clipboard_ReadMimeType_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Clipboard_ReadMimeType_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Clipboard_ReadMimeType_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Clipboard_ReadMimeType_Params.mime_type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_ReadMimeType_Params.encodedSize = codec.kStructHeaderSize + 16;

  Clipboard_ReadMimeType_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_ReadMimeType_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboard_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.mime_type = decoder.decodeStruct(codec.String);
    return val;
  };

  Clipboard_ReadMimeType_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_ReadMimeType_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboard_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.mime_type);
  };

  function Clipboard_ReadMimeType_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_ReadMimeType_ResponseParams.prototype.initDefaults_ = function() {
    this.data = null;
  };
  Clipboard_ReadMimeType_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Clipboard_ReadMimeType_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Clipboard_ReadMimeType_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Clipboard_ReadMimeType_ResponseParams.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_ReadMimeType_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Clipboard_ReadMimeType_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Clipboard_ReadMimeType_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  Clipboard_ReadMimeType_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_ReadMimeType_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };

  function Clipboard_WriteClipboardData_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Clipboard_WriteClipboardData_Params.prototype.initDefaults_ = function() {
    this.clipboard_type = 0;
    this.data = null;
  };
  Clipboard_WriteClipboardData_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Clipboard_WriteClipboardData_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Clipboard_WriteClipboardData_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Clipboard_WriteClipboardData_Params.data
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 8, true, codec.String, new codec.ArrayOf(codec.Uint8), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Clipboard_WriteClipboardData_Params.encodedSize = codec.kStructHeaderSize + 16;

  Clipboard_WriteClipboardData_Params.decode = function(decoder) {
    var packed;
    var val = new Clipboard_WriteClipboardData_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clipboard_type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.data = decoder.decodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8));
    return val;
  };

  Clipboard_WriteClipboardData_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Clipboard_WriteClipboardData_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.clipboard_type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeMapPointer(codec.String, new codec.ArrayOf(codec.Uint8), val.data);
  };

  var kClipboard_GetSequenceNumber_Name = 0;
  var kClipboard_GetAvailableMimeTypes_Name = 1;
  var kClipboard_ReadMimeType_Name = 2;
  var kClipboard_WriteClipboardData_Name = 3;

  function ClipboardProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ClipboardProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ClipboardProxy.prototype.getSequenceNumber = function(clipboard_type) {
    var params = new Clipboard_GetSequenceNumber_Params();
    params.clipboard_type = clipboard_type;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kClipboard_GetSequenceNumber_Name,
          codec.align(Clipboard_GetSequenceNumber_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Clipboard_GetSequenceNumber_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Clipboard_GetSequenceNumber_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardProxy.prototype.getAvailableMimeTypes = function(clipboard_types) {
    var params = new Clipboard_GetAvailableMimeTypes_Params();
    params.clipboard_types = clipboard_types;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kClipboard_GetAvailableMimeTypes_Name,
          codec.align(Clipboard_GetAvailableMimeTypes_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Clipboard_GetAvailableMimeTypes_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Clipboard_GetAvailableMimeTypes_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardProxy.prototype.readMimeType = function(clipboard_type, mime_type) {
    var params = new Clipboard_ReadMimeType_Params();
    params.clipboard_type = clipboard_type;
    params.mime_type = mime_type;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kClipboard_ReadMimeType_Name,
          codec.align(Clipboard_ReadMimeType_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Clipboard_ReadMimeType_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Clipboard_ReadMimeType_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  ClipboardProxy.prototype.writeClipboardData = function(clipboard_type, data) {
    var params = new Clipboard_WriteClipboardData_Params();
    params.clipboard_type = clipboard_type;
    params.data = data;
    var builder = new codec.MessageBuilder(
        kClipboard_WriteClipboardData_Name,
        codec.align(Clipboard_WriteClipboardData_Params.encodedSize));
    builder.encodeStruct(Clipboard_WriteClipboardData_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ClipboardStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ClipboardStub.prototype = Object.create(bindings.StubBase.prototype);
  ClipboardStub.prototype.getSequenceNumber = function(clipboard_type) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getSequenceNumber && bindings.StubBindings(this).delegate.getSequenceNumber(clipboard_type);
  }
  ClipboardStub.prototype.getAvailableMimeTypes = function(clipboard_types) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.getAvailableMimeTypes && bindings.StubBindings(this).delegate.getAvailableMimeTypes(clipboard_types);
  }
  ClipboardStub.prototype.readMimeType = function(clipboard_type, mime_type) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.readMimeType && bindings.StubBindings(this).delegate.readMimeType(clipboard_type, mime_type);
  }
  ClipboardStub.prototype.writeClipboardData = function(clipboard_type, data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.writeClipboardData && bindings.StubBindings(this).delegate.writeClipboardData(clipboard_type, data);
  }

  ClipboardStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClipboard_WriteClipboardData_Name:
      var params = reader.decodeStruct(Clipboard_WriteClipboardData_Params);
      this.writeClipboardData(params.clipboard_type, params.data);
      return true;
    default:
      return false;
    }
  };

  ClipboardStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kClipboard_GetSequenceNumber_Name:
      var params = reader.decodeStruct(Clipboard_GetSequenceNumber_Params);
      return this.getSequenceNumber(params.clipboard_type).then(function(response) {
        var responseParams =
            new Clipboard_GetSequenceNumber_ResponseParams();
        responseParams.sequence = response.sequence;
        var builder = new codec.MessageWithRequestIDBuilder(
            kClipboard_GetSequenceNumber_Name,
            codec.align(Clipboard_GetSequenceNumber_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Clipboard_GetSequenceNumber_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kClipboard_GetAvailableMimeTypes_Name:
      var params = reader.decodeStruct(Clipboard_GetAvailableMimeTypes_Params);
      return this.getAvailableMimeTypes(params.clipboard_types).then(function(response) {
        var responseParams =
            new Clipboard_GetAvailableMimeTypes_ResponseParams();
        responseParams.types = response.types;
        var builder = new codec.MessageWithRequestIDBuilder(
            kClipboard_GetAvailableMimeTypes_Name,
            codec.align(Clipboard_GetAvailableMimeTypes_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Clipboard_GetAvailableMimeTypes_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kClipboard_ReadMimeType_Name:
      var params = reader.decodeStruct(Clipboard_ReadMimeType_Params);
      return this.readMimeType(params.clipboard_type, params.mime_type).then(function(response) {
        var responseParams =
            new Clipboard_ReadMimeType_ResponseParams();
        responseParams.data = response.data;
        var builder = new codec.MessageWithRequestIDBuilder(
            kClipboard_ReadMimeType_Name,
            codec.align(Clipboard_ReadMimeType_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Clipboard_ReadMimeType_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateClipboardRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kClipboard_GetSequenceNumber_Name:
        if (message.expectsResponse())
          paramsClass = Clipboard_GetSequenceNumber_Params;
      break;
      case kClipboard_GetAvailableMimeTypes_Name:
        if (message.expectsResponse())
          paramsClass = Clipboard_GetAvailableMimeTypes_Params;
      break;
      case kClipboard_ReadMimeType_Name:
        if (message.expectsResponse())
          paramsClass = Clipboard_ReadMimeType_Params;
      break;
      case kClipboard_WriteClipboardData_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Clipboard_WriteClipboardData_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateClipboardResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kClipboard_GetSequenceNumber_Name:
        if (message.isResponse())
          paramsClass = Clipboard_GetSequenceNumber_ResponseParams;
        break;
      case kClipboard_GetAvailableMimeTypes_Name:
        if (message.isResponse())
          paramsClass = Clipboard_GetAvailableMimeTypes_ResponseParams;
        break;
      case kClipboard_ReadMimeType_Name:
        if (message.isResponse())
          paramsClass = Clipboard_ReadMimeType_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Clipboard = {
    name: 'mojo::Clipboard',
    proxyClass: ClipboardProxy,
    stubClass: ClipboardStub,
    validateRequest: validateClipboardRequest,
    validateResponse: validateClipboardResponse,
  };
  Clipboard.MIME_TYPE_TEXT = "text/plain",
  Clipboard.MIME_TYPE_HTML = "text/html",
  Clipboard.MIME_TYPE_URL = "text/url",
  Clipboard.Type = {};
  Clipboard.Type.COPY_PASTE = 0;
  Clipboard.Type.SELECTION = 1;
  Clipboard.Type.DRAG = 2;
  ClipboardStub.prototype.validator = validateClipboardRequest;
  ClipboardProxy.prototype.validator = validateClipboardResponse;


  var exports = {};
  exports.Clipboard = Clipboard;


  return exports;
});
