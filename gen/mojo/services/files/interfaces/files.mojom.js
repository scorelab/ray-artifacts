// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/files/interfaces/files.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/files/interfaces/directory.mojom",
    "mojo/services/files/interfaces/types.mojom",
], function(bindings, codec, connection, core, validator, directory$, types$) {

  function Files_OpenFileSystem_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Files_OpenFileSystem_Params.prototype.initDefaults_ = function() {
    this.file_system = null;
    this.directory = null;
  };
  Files_OpenFileSystem_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Files_OpenFileSystem_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Files_OpenFileSystem_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Files_OpenFileSystem_Params.file_system
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Files_OpenFileSystem_Params.directory
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Files_OpenFileSystem_Params.encodedSize = codec.kStructHeaderSize + 16;

  Files_OpenFileSystem_Params.decode = function(decoder) {
    var packed;
    var val = new Files_OpenFileSystem_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.file_system = decoder.decodeStruct(codec.NullableString);
    val.directory = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Files_OpenFileSystem_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Files_OpenFileSystem_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.file_system);
    encoder.encodeStruct(codec.Handle, val.directory);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function Files_OpenFileSystem_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Files_OpenFileSystem_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
  };
  Files_OpenFileSystem_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Files_OpenFileSystem_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Files_OpenFileSystem_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  Files_OpenFileSystem_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  Files_OpenFileSystem_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Files_OpenFileSystem_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Files_OpenFileSystem_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Files_OpenFileSystem_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kFiles_OpenFileSystem_Name = 0;

  function FilesProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  FilesProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  FilesProxy.prototype.openFileSystem = function(file_system, directory) {
    var params = new Files_OpenFileSystem_Params();
    params.file_system = file_system;
    params.directory = core.isHandle(directory) ? directory : connection.bindProxy(directory, directory$.Directory);
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kFiles_OpenFileSystem_Name,
          codec.align(Files_OpenFileSystem_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Files_OpenFileSystem_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Files_OpenFileSystem_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function FilesStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  FilesStub.prototype = Object.create(bindings.StubBase.prototype);
  FilesStub.prototype.openFileSystem = function(file_system, directory) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.openFileSystem && bindings.StubBindings(this).delegate.openFileSystem(file_system, connection.bindHandleToStub(directory, directory$.Directory));
  }

  FilesStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  FilesStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFiles_OpenFileSystem_Name:
      var params = reader.decodeStruct(Files_OpenFileSystem_Params);
      return this.openFileSystem(params.file_system, params.directory).then(function(response) {
        var responseParams =
            new Files_OpenFileSystem_ResponseParams();
        responseParams.error = response.error;
        var builder = new codec.MessageWithRequestIDBuilder(
            kFiles_OpenFileSystem_Name,
            codec.align(Files_OpenFileSystem_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Files_OpenFileSystem_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateFilesRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFiles_OpenFileSystem_Name:
        if (message.expectsResponse())
          paramsClass = Files_OpenFileSystem_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFilesResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kFiles_OpenFileSystem_Name:
        if (message.isResponse())
          paramsClass = Files_OpenFileSystem_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Files = {
    name: 'mojo::files::Files',
    proxyClass: FilesProxy,
    stubClass: FilesStub,
    validateRequest: validateFilesRequest,
    validateResponse: validateFilesResponse,
  };
  FilesStub.prototype.validator = validateFilesRequest;
  FilesProxy.prototype.validator = validateFilesResponse;


  var exports = {};
  exports.Files = Files;


  return exports;
});
