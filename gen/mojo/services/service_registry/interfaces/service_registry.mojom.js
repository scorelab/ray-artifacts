// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/service_registry/interfaces/service_registry.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/public/interfaces/application/service_provider.mojom",
], function(bindings, codec, connection, core, validator, service_provider$) {

  function ServiceRegistry_AddServices_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceRegistry_AddServices_Params.prototype.initDefaults_ = function() {
    this.interface_names = null;
    this.service_provider = null;
  };
  ServiceRegistry_AddServices_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceRegistry_AddServices_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ServiceRegistry_AddServices_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceRegistry_AddServices_Params.interface_names
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ServiceRegistry_AddServices_Params.service_provider
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 8, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceRegistry_AddServices_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceRegistry_AddServices_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceRegistry_AddServices_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interface_names = decoder.decodeArrayPointer(codec.String);
    val.service_provider = decoder.decodeStruct(codec.Interface);
    return val;
  };

  ServiceRegistry_AddServices_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceRegistry_AddServices_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.interface_names);
    encoder.encodeStruct(codec.Interface, val.service_provider);
  };

  var kServiceRegistry_AddServices_Name = 0;

  function ServiceRegistryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  ServiceRegistryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  ServiceRegistryProxy.prototype.addServices = function(interface_names, service_provider) {
    var params = new ServiceRegistry_AddServices_Params();
    params.interface_names = interface_names;
    params.service_provider = core.isHandle(service_provider) ? service_provider : connection.bindImpl(service_provider, service_provider$.ServiceProvider);
    var builder = new codec.MessageBuilder(
        kServiceRegistry_AddServices_Name,
        codec.align(ServiceRegistry_AddServices_Params.encodedSize));
    builder.encodeStruct(ServiceRegistry_AddServices_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceRegistryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  ServiceRegistryStub.prototype = Object.create(bindings.StubBase.prototype);
  ServiceRegistryStub.prototype.addServices = function(interface_names, service_provider) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addServices && bindings.StubBindings(this).delegate.addServices(interface_names, connection.bindHandleToProxy(service_provider, service_provider$.ServiceProvider));
  }

  ServiceRegistryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceRegistry_AddServices_Name:
      var params = reader.decodeStruct(ServiceRegistry_AddServices_Params);
      this.addServices(params.interface_names, params.service_provider);
      return true;
    default:
      return false;
    }
  };

  ServiceRegistryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateServiceRegistryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceRegistry_AddServices_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceRegistry_AddServices_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceRegistryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceRegistry = {
    name: 'mojo::ServiceRegistry',
    proxyClass: ServiceRegistryProxy,
    stubClass: ServiceRegistryStub,
    validateRequest: validateServiceRegistryRequest,
    validateResponse: null,
  };
  ServiceRegistryStub.prototype.validator = validateServiceRegistryRequest;
  ServiceRegistryProxy.prototype.validator = null;


  var exports = {};
  exports.ServiceRegistry = ServiceRegistry;


  return exports;
});
