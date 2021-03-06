// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/http_server/interfaces/http_response.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function HttpResponse(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  HttpResponse.prototype.initDefaults_ = function() {
    this.status_code = 200;
    this.body = null;
    this.content_length = 0;
    this.content_type = "text/html; charset=utf-8";
    this.custom_headers = null;
  };
  HttpResponse.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  HttpResponse.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, HttpResponse.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate HttpResponse.body
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, true)
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate HttpResponse.content_type
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate HttpResponse.custom_headers
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 24, true, codec.String, codec.String, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  HttpResponse.encodedSize = codec.kStructHeaderSize + 32;

  HttpResponse.decode = function(decoder) {
    var packed;
    var val = new HttpResponse();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status_code = decoder.decodeStruct(codec.Uint32);
    val.body = decoder.decodeStruct(codec.NullableHandle);
    val.content_length = decoder.decodeStruct(codec.Int64);
    val.content_type = decoder.decodeStruct(codec.String);
    val.custom_headers = decoder.decodeMapPointer(codec.String, codec.String);
    return val;
  };

  HttpResponse.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(HttpResponse.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.status_code);
    encoder.encodeStruct(codec.NullableHandle, val.body);
    encoder.encodeStruct(codec.Int64, val.content_length);
    encoder.encodeStruct(codec.String, val.content_type);
    encoder.encodeMapPointer(codec.String, codec.String, val.custom_headers);
  };


  var exports = {};
  exports.HttpResponse = HttpResponse;


  return exports;
});
