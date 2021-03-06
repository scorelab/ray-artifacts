// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/public/interfaces/bindings/tests/rect.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
], function(bindings, codec, connection, core, validator) {

  function Rect(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Rect.prototype.initDefaults_ = function() {
    this.x = 0;
    this.y = 0;
    this.width = 0;
    this.height = 0;
  };
  Rect.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Rect.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Rect.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;





    return validator.validationError.NONE;
  };

  Rect.encodedSize = codec.kStructHeaderSize + 16;

  Rect.decode = function(decoder) {
    var packed;
    var val = new Rect();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.x = decoder.decodeStruct(codec.Int32);
    val.y = decoder.decodeStruct(codec.Int32);
    val.width = decoder.decodeStruct(codec.Int32);
    val.height = decoder.decodeStruct(codec.Int32);
    return val;
  };

  Rect.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Rect.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.x);
    encoder.encodeStruct(codec.Int32, val.y);
    encoder.encodeStruct(codec.Int32, val.width);
    encoder.encodeStruct(codec.Int32, val.height);
  };


  var exports = {};
  exports.Rect = Rect;


  return exports;
});
