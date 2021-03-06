// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/network/interfaces/net_address.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {
  var NetAddressFamily = {};
  NetAddressFamily.UNSPECIFIED = 0;
  NetAddressFamily.IPV4 = NetAddressFamily.UNSPECIFIED + 1;
  NetAddressFamily.IPV6 = NetAddressFamily.IPV4 + 1;

  function NetAddressIPv4(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetAddressIPv4.prototype.initDefaults_ = function() {
    this.port = 0;
    this.addr = null;
  };
  NetAddressIPv4.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetAddressIPv4.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NetAddressIPv4.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate NetAddressIPv4.addr
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [4], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetAddressIPv4.encodedSize = codec.kStructHeaderSize + 16;

  NetAddressIPv4.decode = function(decoder) {
    var packed;
    var val = new NetAddressIPv4();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.port = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.addr = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  NetAddressIPv4.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetAddressIPv4.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.addr);
  };

  function NetAddressIPv6(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetAddressIPv6.prototype.initDefaults_ = function() {
    this.port = 0;
    this.addr = null;
  };
  NetAddressIPv6.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetAddressIPv6.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NetAddressIPv6.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate NetAddressIPv6.addr
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [16], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetAddressIPv6.encodedSize = codec.kStructHeaderSize + 16;

  NetAddressIPv6.decode = function(decoder) {
    var packed;
    var val = new NetAddressIPv6();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.port = decoder.decodeStruct(codec.Uint16);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.addr = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  NetAddressIPv6.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetAddressIPv6.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint16, val.port);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(codec.Uint8, val.addr);
  };

  function NetAddress(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetAddress.prototype.initDefaults_ = function() {
    this.family = NetAddressFamily.UNSPECIFIED;
    this.ipv4 = null;
    this.ipv6 = null;
  };
  NetAddress.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetAddress.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, NetAddress.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate NetAddress.ipv4
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, NetAddressIPv4, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate NetAddress.ipv6
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, NetAddressIPv6, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetAddress.encodedSize = codec.kStructHeaderSize + 24;

  NetAddress.decode = function(decoder) {
    var packed;
    var val = new NetAddress();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.family = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.ipv4 = decoder.decodeStructPointer(NetAddressIPv4);
    val.ipv6 = decoder.decodeStructPointer(NetAddressIPv6);
    return val;
  };

  NetAddress.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetAddress.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.family);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(NetAddressIPv4, val.ipv4);
    encoder.encodeStructPointer(NetAddressIPv6, val.ipv6);
  };


  var exports = {};
  exports.NetAddressFamily = NetAddressFamily;
  exports.NetAddressIPv4 = NetAddressIPv4;
  exports.NetAddressIPv6 = NetAddressIPv6;
  exports.NetAddress = NetAddress;


  return exports;
});
