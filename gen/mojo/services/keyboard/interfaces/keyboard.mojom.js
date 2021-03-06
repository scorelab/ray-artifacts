// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/keyboard/interfaces/keyboard.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/native_viewport/interfaces/native_viewport_event_dispatcher.mojom",
], function(bindings, codec, connection, core, validator, native_viewport_event_dispatcher$) {
  var SubmitAction = {};
  SubmitAction.DONE = 0;
  var KeyboardType = {};
  KeyboardType.TEXT = 0;
  KeyboardType.NUMBER = KeyboardType.TEXT + 1;
  KeyboardType.PHONE = KeyboardType.NUMBER + 1;
  KeyboardType.DATETIME = KeyboardType.PHONE + 1;

  function CompletionData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CompletionData.prototype.initDefaults_ = function() {
    this.id = 0;
    this.position = 0;
    this.text = null;
    this.label = null;
  };
  CompletionData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CompletionData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CompletionData.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    
    // validate CompletionData.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CompletionData.label
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CompletionData.encodedSize = codec.kStructHeaderSize + 32;

  CompletionData.decode = function(decoder) {
    var packed;
    var val = new CompletionData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id = decoder.decodeStruct(codec.Int64);
    val.position = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.text = decoder.decodeStruct(codec.String);
    val.label = decoder.decodeStruct(codec.String);
    return val;
  };

  CompletionData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CompletionData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int64, val.id);
    encoder.encodeStruct(codec.Int32, val.position);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.text);
    encoder.encodeStruct(codec.String, val.label);
  };

  function CorrectionData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CorrectionData.prototype.initDefaults_ = function() {
    this.offset = 0;
    this.old_text = null;
    this.new_text = null;
  };
  CorrectionData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CorrectionData.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, CorrectionData.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate CorrectionData.old_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate CorrectionData.new_text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CorrectionData.encodedSize = codec.kStructHeaderSize + 24;

  CorrectionData.decode = function(decoder) {
    var packed;
    var val = new CorrectionData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.offset = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.old_text = decoder.decodeStruct(codec.String);
    val.new_text = decoder.decodeStruct(codec.String);
    return val;
  };

  CorrectionData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CorrectionData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.offset);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.old_text);
    encoder.encodeStruct(codec.String, val.new_text);
  };

  function KeyboardClient_CommitCompletion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_CommitCompletion_Params.prototype.initDefaults_ = function() {
    this.completion = null;
  };
  KeyboardClient_CommitCompletion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_CommitCompletion_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_CommitCompletion_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardClient_CommitCompletion_Params.completion
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CompletionData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardClient_CommitCompletion_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardClient_CommitCompletion_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_CommitCompletion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.completion = decoder.decodeStructPointer(CompletionData);
    return val;
  };

  KeyboardClient_CommitCompletion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_CommitCompletion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CompletionData, val.completion);
  };

  function KeyboardClient_CommitCorrection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_CommitCorrection_Params.prototype.initDefaults_ = function() {
    this.correction = null;
  };
  KeyboardClient_CommitCorrection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_CommitCorrection_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_CommitCorrection_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardClient_CommitCorrection_Params.correction
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CorrectionData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardClient_CommitCorrection_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardClient_CommitCorrection_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_CommitCorrection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.correction = decoder.decodeStructPointer(CorrectionData);
    return val;
  };

  KeyboardClient_CommitCorrection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_CommitCorrection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CorrectionData, val.correction);
  };

  function KeyboardClient_CommitText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_CommitText_Params.prototype.initDefaults_ = function() {
    this.text = null;
    this.newCursorPosition = 0;
  };
  KeyboardClient_CommitText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_CommitText_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_CommitText_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardClient_CommitText_Params.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  KeyboardClient_CommitText_Params.encodedSize = codec.kStructHeaderSize + 16;

  KeyboardClient_CommitText_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_CommitText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStruct(codec.String);
    val.newCursorPosition = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  KeyboardClient_CommitText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_CommitText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.text);
    encoder.encodeStruct(codec.Int32, val.newCursorPosition);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function KeyboardClient_DeleteSurroundingText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_DeleteSurroundingText_Params.prototype.initDefaults_ = function() {
    this.beforeLength = 0;
    this.afterLength = 0;
  };
  KeyboardClient_DeleteSurroundingText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_DeleteSurroundingText_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_DeleteSurroundingText_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  KeyboardClient_DeleteSurroundingText_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardClient_DeleteSurroundingText_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_DeleteSurroundingText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.beforeLength = decoder.decodeStruct(codec.Int32);
    val.afterLength = decoder.decodeStruct(codec.Int32);
    return val;
  };

  KeyboardClient_DeleteSurroundingText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_DeleteSurroundingText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.beforeLength);
    encoder.encodeStruct(codec.Int32, val.afterLength);
  };

  function KeyboardClient_SetComposingRegion_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_SetComposingRegion_Params.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
  };
  KeyboardClient_SetComposingRegion_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_SetComposingRegion_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_SetComposingRegion_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  KeyboardClient_SetComposingRegion_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardClient_SetComposingRegion_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_SetComposingRegion_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Int32);
    val.end = decoder.decodeStruct(codec.Int32);
    return val;
  };

  KeyboardClient_SetComposingRegion_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_SetComposingRegion_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.start);
    encoder.encodeStruct(codec.Int32, val.end);
  };

  function KeyboardClient_SetComposingText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_SetComposingText_Params.prototype.initDefaults_ = function() {
    this.text = null;
    this.newCursorPosition = 0;
  };
  KeyboardClient_SetComposingText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_SetComposingText_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_SetComposingText_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardClient_SetComposingText_Params.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  KeyboardClient_SetComposingText_Params.encodedSize = codec.kStructHeaderSize + 16;

  KeyboardClient_SetComposingText_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_SetComposingText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStruct(codec.String);
    val.newCursorPosition = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  KeyboardClient_SetComposingText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_SetComposingText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.text);
    encoder.encodeStruct(codec.Int32, val.newCursorPosition);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function KeyboardClient_SetSelection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_SetSelection_Params.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
  };
  KeyboardClient_SetSelection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_SetSelection_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_SetSelection_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  KeyboardClient_SetSelection_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardClient_SetSelection_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_SetSelection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Int32);
    val.end = decoder.decodeStruct(codec.Int32);
    return val;
  };

  KeyboardClient_SetSelection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_SetSelection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.start);
    encoder.encodeStruct(codec.Int32, val.end);
  };

  function KeyboardClient_Submit_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardClient_Submit_Params.prototype.initDefaults_ = function() {
    this.action = 0;
  };
  KeyboardClient_Submit_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardClient_Submit_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardClient_Submit_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  KeyboardClient_Submit_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardClient_Submit_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardClient_Submit_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.action = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  KeyboardClient_Submit_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardClient_Submit_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.action);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function KeyboardService_Show_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardService_Show_Params.prototype.initDefaults_ = function() {
    this.client = null;
    this.type = 0;
  };
  KeyboardService_Show_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardService_Show_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardService_Show_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardService_Show_Params.client
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  KeyboardService_Show_Params.encodedSize = codec.kStructHeaderSize + 16;

  KeyboardService_Show_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardService_Show_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.client = decoder.decodeStruct(codec.Interface);
    val.type = decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  KeyboardService_Show_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardService_Show_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Interface, val.client);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function KeyboardService_ShowByRequest_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardService_ShowByRequest_Params.prototype.initDefaults_ = function() {
  };
  KeyboardService_ShowByRequest_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardService_ShowByRequest_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardService_ShowByRequest_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardService_ShowByRequest_Params.encodedSize = codec.kStructHeaderSize + 0;

  KeyboardService_ShowByRequest_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardService_ShowByRequest_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  KeyboardService_ShowByRequest_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardService_ShowByRequest_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function KeyboardService_Hide_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardService_Hide_Params.prototype.initDefaults_ = function() {
  };
  KeyboardService_Hide_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardService_Hide_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardService_Hide_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardService_Hide_Params.encodedSize = codec.kStructHeaderSize + 0;

  KeyboardService_Hide_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardService_Hide_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  KeyboardService_Hide_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardService_Hide_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function KeyboardService_SetText_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardService_SetText_Params.prototype.initDefaults_ = function() {
    this.text = null;
  };
  KeyboardService_SetText_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardService_SetText_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardService_SetText_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardService_SetText_Params.text
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardService_SetText_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardService_SetText_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardService_SetText_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.text = decoder.decodeStruct(codec.String);
    return val;
  };

  KeyboardService_SetText_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardService_SetText_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.text);
  };

  function KeyboardService_SetSelection_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardService_SetSelection_Params.prototype.initDefaults_ = function() {
    this.start = 0;
    this.end = 0;
  };
  KeyboardService_SetSelection_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardService_SetSelection_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardService_SetSelection_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;



    return validator.validationError.NONE;
  };

  KeyboardService_SetSelection_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardService_SetSelection_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardService_SetSelection_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.start = decoder.decodeStruct(codec.Int32);
    val.end = decoder.decodeStruct(codec.Int32);
    return val;
  };

  KeyboardService_SetSelection_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardService_SetSelection_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.start);
    encoder.encodeStruct(codec.Int32, val.end);
  };

  function KeyboardServiceFactory_CreateKeyboardService_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  KeyboardServiceFactory_CreateKeyboardService_Params.prototype.initDefaults_ = function() {
    this.keyEventDispatcher = null;
    this.serviceRequest = null;
  };
  KeyboardServiceFactory_CreateKeyboardService_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  KeyboardServiceFactory_CreateKeyboardService_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, KeyboardServiceFactory_CreateKeyboardService_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardServiceFactory_CreateKeyboardService_Params.keyEventDispatcher
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate KeyboardServiceFactory_CreateKeyboardService_Params.serviceRequest
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 4, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  KeyboardServiceFactory_CreateKeyboardService_Params.encodedSize = codec.kStructHeaderSize + 8;

  KeyboardServiceFactory_CreateKeyboardService_Params.decode = function(decoder) {
    var packed;
    var val = new KeyboardServiceFactory_CreateKeyboardService_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keyEventDispatcher = decoder.decodeStruct(codec.Handle);
    val.serviceRequest = decoder.decodeStruct(codec.Handle);
    return val;
  };

  KeyboardServiceFactory_CreateKeyboardService_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(KeyboardServiceFactory_CreateKeyboardService_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Handle, val.keyEventDispatcher);
    encoder.encodeStruct(codec.Handle, val.serviceRequest);
  };

  var kKeyboardClient_CommitCompletion_Name = 0;
  var kKeyboardClient_CommitCorrection_Name = 1;
  var kKeyboardClient_CommitText_Name = 2;
  var kKeyboardClient_DeleteSurroundingText_Name = 3;
  var kKeyboardClient_SetComposingRegion_Name = 4;
  var kKeyboardClient_SetComposingText_Name = 5;
  var kKeyboardClient_SetSelection_Name = 6;
  var kKeyboardClient_Submit_Name = 7;

  function KeyboardClientProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  KeyboardClientProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  KeyboardClientProxy.prototype.commitCompletion = function(completion) {
    var params = new KeyboardClient_CommitCompletion_Params();
    params.completion = completion;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_CommitCompletion_Name,
        codec.align(KeyboardClient_CommitCompletion_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_CommitCompletion_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardClientProxy.prototype.commitCorrection = function(correction) {
    var params = new KeyboardClient_CommitCorrection_Params();
    params.correction = correction;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_CommitCorrection_Name,
        codec.align(KeyboardClient_CommitCorrection_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_CommitCorrection_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardClientProxy.prototype.commitText = function(text, newCursorPosition) {
    var params = new KeyboardClient_CommitText_Params();
    params.text = text;
    params.newCursorPosition = newCursorPosition;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_CommitText_Name,
        codec.align(KeyboardClient_CommitText_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_CommitText_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardClientProxy.prototype.deleteSurroundingText = function(beforeLength, afterLength) {
    var params = new KeyboardClient_DeleteSurroundingText_Params();
    params.beforeLength = beforeLength;
    params.afterLength = afterLength;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_DeleteSurroundingText_Name,
        codec.align(KeyboardClient_DeleteSurroundingText_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_DeleteSurroundingText_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardClientProxy.prototype.setComposingRegion = function(start, end) {
    var params = new KeyboardClient_SetComposingRegion_Params();
    params.start = start;
    params.end = end;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_SetComposingRegion_Name,
        codec.align(KeyboardClient_SetComposingRegion_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_SetComposingRegion_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardClientProxy.prototype.setComposingText = function(text, newCursorPosition) {
    var params = new KeyboardClient_SetComposingText_Params();
    params.text = text;
    params.newCursorPosition = newCursorPosition;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_SetComposingText_Name,
        codec.align(KeyboardClient_SetComposingText_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_SetComposingText_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardClientProxy.prototype.setSelection = function(start, end) {
    var params = new KeyboardClient_SetSelection_Params();
    params.start = start;
    params.end = end;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_SetSelection_Name,
        codec.align(KeyboardClient_SetSelection_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_SetSelection_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardClientProxy.prototype.submit = function(action) {
    var params = new KeyboardClient_Submit_Params();
    params.action = action;
    var builder = new codec.MessageBuilder(
        kKeyboardClient_Submit_Name,
        codec.align(KeyboardClient_Submit_Params.encodedSize));
    builder.encodeStruct(KeyboardClient_Submit_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function KeyboardClientStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  KeyboardClientStub.prototype = Object.create(bindings.StubBase.prototype);
  KeyboardClientStub.prototype.commitCompletion = function(completion) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.commitCompletion && bindings.StubBindings(this).delegate.commitCompletion(completion);
  }
  KeyboardClientStub.prototype.commitCorrection = function(correction) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.commitCorrection && bindings.StubBindings(this).delegate.commitCorrection(correction);
  }
  KeyboardClientStub.prototype.commitText = function(text, newCursorPosition) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.commitText && bindings.StubBindings(this).delegate.commitText(text, newCursorPosition);
  }
  KeyboardClientStub.prototype.deleteSurroundingText = function(beforeLength, afterLength) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.deleteSurroundingText && bindings.StubBindings(this).delegate.deleteSurroundingText(beforeLength, afterLength);
  }
  KeyboardClientStub.prototype.setComposingRegion = function(start, end) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setComposingRegion && bindings.StubBindings(this).delegate.setComposingRegion(start, end);
  }
  KeyboardClientStub.prototype.setComposingText = function(text, newCursorPosition) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setComposingText && bindings.StubBindings(this).delegate.setComposingText(text, newCursorPosition);
  }
  KeyboardClientStub.prototype.setSelection = function(start, end) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setSelection && bindings.StubBindings(this).delegate.setSelection(start, end);
  }
  KeyboardClientStub.prototype.submit = function(action) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.submit && bindings.StubBindings(this).delegate.submit(action);
  }

  KeyboardClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kKeyboardClient_CommitCompletion_Name:
      var params = reader.decodeStruct(KeyboardClient_CommitCompletion_Params);
      this.commitCompletion(params.completion);
      return true;
    case kKeyboardClient_CommitCorrection_Name:
      var params = reader.decodeStruct(KeyboardClient_CommitCorrection_Params);
      this.commitCorrection(params.correction);
      return true;
    case kKeyboardClient_CommitText_Name:
      var params = reader.decodeStruct(KeyboardClient_CommitText_Params);
      this.commitText(params.text, params.newCursorPosition);
      return true;
    case kKeyboardClient_DeleteSurroundingText_Name:
      var params = reader.decodeStruct(KeyboardClient_DeleteSurroundingText_Params);
      this.deleteSurroundingText(params.beforeLength, params.afterLength);
      return true;
    case kKeyboardClient_SetComposingRegion_Name:
      var params = reader.decodeStruct(KeyboardClient_SetComposingRegion_Params);
      this.setComposingRegion(params.start, params.end);
      return true;
    case kKeyboardClient_SetComposingText_Name:
      var params = reader.decodeStruct(KeyboardClient_SetComposingText_Params);
      this.setComposingText(params.text, params.newCursorPosition);
      return true;
    case kKeyboardClient_SetSelection_Name:
      var params = reader.decodeStruct(KeyboardClient_SetSelection_Params);
      this.setSelection(params.start, params.end);
      return true;
    case kKeyboardClient_Submit_Name:
      var params = reader.decodeStruct(KeyboardClient_Submit_Params);
      this.submit(params.action);
      return true;
    default:
      return false;
    }
  };

  KeyboardClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateKeyboardClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kKeyboardClient_CommitCompletion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_CommitCompletion_Params;
      break;
      case kKeyboardClient_CommitCorrection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_CommitCorrection_Params;
      break;
      case kKeyboardClient_CommitText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_CommitText_Params;
      break;
      case kKeyboardClient_DeleteSurroundingText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_DeleteSurroundingText_Params;
      break;
      case kKeyboardClient_SetComposingRegion_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_SetComposingRegion_Params;
      break;
      case kKeyboardClient_SetComposingText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_SetComposingText_Params;
      break;
      case kKeyboardClient_SetSelection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_SetSelection_Params;
      break;
      case kKeyboardClient_Submit_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardClient_Submit_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateKeyboardClientResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var KeyboardClient = {
    name: null,
    proxyClass: KeyboardClientProxy,
    stubClass: KeyboardClientStub,
    validateRequest: validateKeyboardClientRequest,
    validateResponse: null,
  };
  KeyboardClientStub.prototype.validator = validateKeyboardClientRequest;
  KeyboardClientProxy.prototype.validator = null;

  var kKeyboardService_Show_Name = 0;
  var kKeyboardService_ShowByRequest_Name = 1;
  var kKeyboardService_Hide_Name = 2;
  var kKeyboardService_SetText_Name = 3;
  var kKeyboardService_SetSelection_Name = 4;

  function KeyboardServiceProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  KeyboardServiceProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  KeyboardServiceProxy.prototype.show = function(client, type) {
    var params = new KeyboardService_Show_Params();
    params.client = core.isHandle(client) ? client : connection.bindImpl(client, KeyboardClient);
    params.type = type;
    var builder = new codec.MessageBuilder(
        kKeyboardService_Show_Name,
        codec.align(KeyboardService_Show_Params.encodedSize));
    builder.encodeStruct(KeyboardService_Show_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardServiceProxy.prototype.showByRequest = function() {
    var params = new KeyboardService_ShowByRequest_Params();
    var builder = new codec.MessageBuilder(
        kKeyboardService_ShowByRequest_Name,
        codec.align(KeyboardService_ShowByRequest_Params.encodedSize));
    builder.encodeStruct(KeyboardService_ShowByRequest_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardServiceProxy.prototype.hide = function() {
    var params = new KeyboardService_Hide_Params();
    var builder = new codec.MessageBuilder(
        kKeyboardService_Hide_Name,
        codec.align(KeyboardService_Hide_Params.encodedSize));
    builder.encodeStruct(KeyboardService_Hide_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardServiceProxy.prototype.setText = function(text) {
    var params = new KeyboardService_SetText_Params();
    params.text = text;
    var builder = new codec.MessageBuilder(
        kKeyboardService_SetText_Name,
        codec.align(KeyboardService_SetText_Params.encodedSize));
    builder.encodeStruct(KeyboardService_SetText_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  KeyboardServiceProxy.prototype.setSelection = function(start, end) {
    var params = new KeyboardService_SetSelection_Params();
    params.start = start;
    params.end = end;
    var builder = new codec.MessageBuilder(
        kKeyboardService_SetSelection_Name,
        codec.align(KeyboardService_SetSelection_Params.encodedSize));
    builder.encodeStruct(KeyboardService_SetSelection_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function KeyboardServiceStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  KeyboardServiceStub.prototype = Object.create(bindings.StubBase.prototype);
  KeyboardServiceStub.prototype.show = function(client, type) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.show && bindings.StubBindings(this).delegate.show(connection.bindHandleToProxy(client, KeyboardClient), type);
  }
  KeyboardServiceStub.prototype.showByRequest = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.showByRequest && bindings.StubBindings(this).delegate.showByRequest();
  }
  KeyboardServiceStub.prototype.hide = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.hide && bindings.StubBindings(this).delegate.hide();
  }
  KeyboardServiceStub.prototype.setText = function(text) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setText && bindings.StubBindings(this).delegate.setText(text);
  }
  KeyboardServiceStub.prototype.setSelection = function(start, end) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setSelection && bindings.StubBindings(this).delegate.setSelection(start, end);
  }

  KeyboardServiceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kKeyboardService_Show_Name:
      var params = reader.decodeStruct(KeyboardService_Show_Params);
      this.show(params.client, params.type);
      return true;
    case kKeyboardService_ShowByRequest_Name:
      var params = reader.decodeStruct(KeyboardService_ShowByRequest_Params);
      this.showByRequest();
      return true;
    case kKeyboardService_Hide_Name:
      var params = reader.decodeStruct(KeyboardService_Hide_Params);
      this.hide();
      return true;
    case kKeyboardService_SetText_Name:
      var params = reader.decodeStruct(KeyboardService_SetText_Params);
      this.setText(params.text);
      return true;
    case kKeyboardService_SetSelection_Name:
      var params = reader.decodeStruct(KeyboardService_SetSelection_Params);
      this.setSelection(params.start, params.end);
      return true;
    default:
      return false;
    }
  };

  KeyboardServiceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateKeyboardServiceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kKeyboardService_Show_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardService_Show_Params;
      break;
      case kKeyboardService_ShowByRequest_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardService_ShowByRequest_Params;
      break;
      case kKeyboardService_Hide_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardService_Hide_Params;
      break;
      case kKeyboardService_SetText_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardService_SetText_Params;
      break;
      case kKeyboardService_SetSelection_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardService_SetSelection_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateKeyboardServiceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var KeyboardService = {
    name: 'keyboard::KeyboardService',
    proxyClass: KeyboardServiceProxy,
    stubClass: KeyboardServiceStub,
    validateRequest: validateKeyboardServiceRequest,
    validateResponse: null,
  };
  KeyboardServiceStub.prototype.validator = validateKeyboardServiceRequest;
  KeyboardServiceProxy.prototype.validator = null;

  var kKeyboardServiceFactory_CreateKeyboardService_Name = 0;

  function KeyboardServiceFactoryProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  KeyboardServiceFactoryProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  KeyboardServiceFactoryProxy.prototype.createKeyboardService = function(keyEventDispatcher, serviceRequest) {
    var params = new KeyboardServiceFactory_CreateKeyboardService_Params();
    params.keyEventDispatcher = core.isHandle(keyEventDispatcher) ? keyEventDispatcher : connection.bindProxy(keyEventDispatcher, native_viewport_event_dispatcher$.NativeViewportEventDispatcher);
    params.serviceRequest = core.isHandle(serviceRequest) ? serviceRequest : connection.bindProxy(serviceRequest, KeyboardService);
    var builder = new codec.MessageBuilder(
        kKeyboardServiceFactory_CreateKeyboardService_Name,
        codec.align(KeyboardServiceFactory_CreateKeyboardService_Params.encodedSize));
    builder.encodeStruct(KeyboardServiceFactory_CreateKeyboardService_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function KeyboardServiceFactoryStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  KeyboardServiceFactoryStub.prototype = Object.create(bindings.StubBase.prototype);
  KeyboardServiceFactoryStub.prototype.createKeyboardService = function(keyEventDispatcher, serviceRequest) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.createKeyboardService && bindings.StubBindings(this).delegate.createKeyboardService(connection.bindHandleToStub(keyEventDispatcher, native_viewport_event_dispatcher$.NativeViewportEventDispatcher), connection.bindHandleToStub(serviceRequest, KeyboardService));
  }

  KeyboardServiceFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kKeyboardServiceFactory_CreateKeyboardService_Name:
      var params = reader.decodeStruct(KeyboardServiceFactory_CreateKeyboardService_Params);
      this.createKeyboardService(params.keyEventDispatcher, params.serviceRequest);
      return true;
    default:
      return false;
    }
  };

  KeyboardServiceFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateKeyboardServiceFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kKeyboardServiceFactory_CreateKeyboardService_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = KeyboardServiceFactory_CreateKeyboardService_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateKeyboardServiceFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var KeyboardServiceFactory = {
    name: 'keyboard::KeyboardServiceFactory',
    proxyClass: KeyboardServiceFactoryProxy,
    stubClass: KeyboardServiceFactoryStub,
    validateRequest: validateKeyboardServiceFactoryRequest,
    validateResponse: null,
  };
  KeyboardServiceFactoryStub.prototype.validator = validateKeyboardServiceFactoryRequest;
  KeyboardServiceFactoryProxy.prototype.validator = null;


  var exports = {};
  exports.SubmitAction = SubmitAction;
  exports.KeyboardType = KeyboardType;
  exports.CompletionData = CompletionData;
  exports.CorrectionData = CorrectionData;
  exports.KeyboardClient = KeyboardClient;
  exports.KeyboardService = KeyboardService;
  exports.KeyboardServiceFactory = KeyboardServiceFactory;


  return exports;
});
