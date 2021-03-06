// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/gpu/interfaces/gpu.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/gpu/interfaces/command_buffer.mojom",
], function(bindings, codec, connection, core, validator, command_buffer$) {

  function Gpu_CreateOffscreenGLES2Context_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Gpu_CreateOffscreenGLES2Context_Params.prototype.initDefaults_ = function() {
    this.gles2_client = null;
  };
  Gpu_CreateOffscreenGLES2Context_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Gpu_CreateOffscreenGLES2Context_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Gpu_CreateOffscreenGLES2Context_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Gpu_CreateOffscreenGLES2Context_Params.gles2_client
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Gpu_CreateOffscreenGLES2Context_Params.encodedSize = codec.kStructHeaderSize + 8;

  Gpu_CreateOffscreenGLES2Context_Params.decode = function(decoder) {
    var packed;
    var val = new Gpu_CreateOffscreenGLES2Context_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.gles2_client = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  Gpu_CreateOffscreenGLES2Context_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Gpu_CreateOffscreenGLES2Context_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.gles2_client);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  var kGpu_CreateOffscreenGLES2Context_Name = 0;

  function GpuProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  GpuProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  GpuProxy.prototype.createOffscreenGLES2Context = function(gles2_client) {
    var params = new Gpu_CreateOffscreenGLES2Context_Params();
    params.gles2_client = core.isHandle(gles2_client) ? gles2_client : connection.bindProxy(gles2_client, command_buffer$.CommandBuffer);
    var builder = new codec.MessageBuilder(
        kGpu_CreateOffscreenGLES2Context_Name,
        codec.align(Gpu_CreateOffscreenGLES2Context_Params.encodedSize));
    builder.encodeStruct(Gpu_CreateOffscreenGLES2Context_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function GpuStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  GpuStub.prototype = Object.create(bindings.StubBase.prototype);
  GpuStub.prototype.createOffscreenGLES2Context = function(gles2_client) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createOffscreenGLES2Context && bindings.StubBindings(this).delegate.createOffscreenGLES2Context(connection.bindHandleToStub(gles2_client, command_buffer$.CommandBuffer));
  }

  GpuStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGpu_CreateOffscreenGLES2Context_Name:
      var params = reader.decodeStruct(Gpu_CreateOffscreenGLES2Context_Params);
      this.createOffscreenGLES2Context(params.gles2_client);
      return true;
    default:
      return false;
    }
  };

  GpuStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateGpuRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGpu_CreateOffscreenGLES2Context_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Gpu_CreateOffscreenGLES2Context_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGpuResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Gpu = {
    name: 'mojo::Gpu',
    proxyClass: GpuProxy,
    stubClass: GpuStub,
    validateRequest: validateGpuRequest,
    validateResponse: null,
  };
  GpuStub.prototype.validator = validateGpuRequest;
  GpuProxy.prototype.validator = null;


  var exports = {};
  exports.Gpu = Gpu;


  return exports;
});
