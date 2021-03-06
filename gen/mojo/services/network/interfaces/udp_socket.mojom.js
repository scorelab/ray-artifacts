// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/network/interfaces/udp_socket.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/public/interfaces/network/network_error.mojom",
    "mojo/services/network/interfaces/net_address.mojom",
], function(bindings, codec, connection, core, validator, network_error$, net_address$) {

  function UDPSocket_AllowAddressReuse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_AllowAddressReuse_Params.prototype.initDefaults_ = function() {
  };
  UDPSocket_AllowAddressReuse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_AllowAddressReuse_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_AllowAddressReuse_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_AllowAddressReuse_Params.encodedSize = codec.kStructHeaderSize + 0;

  UDPSocket_AllowAddressReuse_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_AllowAddressReuse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  UDPSocket_AllowAddressReuse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_AllowAddressReuse_Params.encodedSize);
    encoder.writeUint32(0);
  };

  function UDPSocket_AllowAddressReuse_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_AllowAddressReuse_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  UDPSocket_AllowAddressReuse_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_AllowAddressReuse_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_AllowAddressReuse_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_AllowAddressReuse_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_AllowAddressReuse_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_AllowAddressReuse_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_AllowAddressReuse_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(network_error$.NetworkError);
    return val;
  };

  UDPSocket_AllowAddressReuse_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_AllowAddressReuse_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.result);
  };

  function UDPSocket_Bind_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Bind_Params.prototype.initDefaults_ = function() {
    this.addr = null;
  };
  UDPSocket_Bind_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_Bind_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_Bind_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Bind_Params.addr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, net_address$.NetAddress, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Bind_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_Bind_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Bind_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.addr = decoder.decodeStructPointer(net_address$.NetAddress);
    return val;
  };

  UDPSocket_Bind_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Bind_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(net_address$.NetAddress, val.addr);
  };

  function UDPSocket_Bind_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Bind_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.bound_addr = null;
    this.receiver = null;
  };
  UDPSocket_Bind_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_Bind_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_Bind_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Bind_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Bind_ResponseParams.bound_addr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, net_address$.NetAddress, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Bind_ResponseParams.receiver
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Bind_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  UDPSocket_Bind_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Bind_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(network_error$.NetworkError);
    val.bound_addr = decoder.decodeStructPointer(net_address$.NetAddress);
    val.receiver = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_Bind_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Bind_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.result);
    encoder.encodeStructPointer(net_address$.NetAddress, val.bound_addr);
    encoder.encodeStruct(codec.Handle, val.receiver);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function UDPSocket_Connect_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Connect_Params.prototype.initDefaults_ = function() {
    this.remote_addr = null;
  };
  UDPSocket_Connect_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_Connect_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_Connect_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Connect_Params.remote_addr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, net_address$.NetAddress, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Connect_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_Connect_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Connect_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.remote_addr = decoder.decodeStructPointer(net_address$.NetAddress);
    return val;
  };

  UDPSocket_Connect_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Connect_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(net_address$.NetAddress, val.remote_addr);
  };

  function UDPSocket_Connect_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_Connect_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
    this.local_addr = null;
    this.receiver = null;
  };
  UDPSocket_Connect_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_Connect_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_Connect_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Connect_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Connect_ResponseParams.local_addr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, net_address$.NetAddress, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_Connect_ResponseParams.receiver
    err = messageValidator.validateHandle(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_Connect_ResponseParams.encodedSize = codec.kStructHeaderSize + 24;

  UDPSocket_Connect_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_Connect_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(network_error$.NetworkError);
    val.local_addr = decoder.decodeStructPointer(net_address$.NetAddress);
    val.receiver = decoder.decodeStruct(codec.Handle);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_Connect_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_Connect_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.result);
    encoder.encodeStructPointer(net_address$.NetAddress, val.local_addr);
    encoder.encodeStruct(codec.Handle, val.receiver);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function UDPSocket_SetSendBufferSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SetSendBufferSize_Params.prototype.initDefaults_ = function() {
    this.size = 0;
  };
  UDPSocket_SetSendBufferSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_SetSendBufferSize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_SetSendBufferSize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UDPSocket_SetSendBufferSize_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SetSendBufferSize_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SetSendBufferSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_SetSendBufferSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SetSendBufferSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.size);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function UDPSocket_SetSendBufferSize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SetSendBufferSize_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  UDPSocket_SetSendBufferSize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_SetSendBufferSize_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_SetSendBufferSize_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_SetSendBufferSize_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_SetSendBufferSize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SetSendBufferSize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SetSendBufferSize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(network_error$.NetworkError);
    return val;
  };

  UDPSocket_SetSendBufferSize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SetSendBufferSize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.result);
  };

  function UDPSocket_SetReceiveBufferSize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SetReceiveBufferSize_Params.prototype.initDefaults_ = function() {
    this.size = 0;
  };
  UDPSocket_SetReceiveBufferSize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_SetReceiveBufferSize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_SetReceiveBufferSize_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UDPSocket_SetReceiveBufferSize_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SetReceiveBufferSize_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SetReceiveBufferSize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.size = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_SetReceiveBufferSize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SetReceiveBufferSize_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.size);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function UDPSocket_SetReceiveBufferSize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SetReceiveBufferSize_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  UDPSocket_SetReceiveBufferSize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_SetReceiveBufferSize_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_SetReceiveBufferSize_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_SetReceiveBufferSize_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_SetReceiveBufferSize_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SetReceiveBufferSize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SetReceiveBufferSize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(network_error$.NetworkError);
    return val;
  };

  UDPSocket_SetReceiveBufferSize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SetReceiveBufferSize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.result);
  };

  function UDPSocket_NegotiateMaxPendingSendRequests_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_NegotiateMaxPendingSendRequests_Params.prototype.initDefaults_ = function() {
    this.requested_size = 0;
  };
  UDPSocket_NegotiateMaxPendingSendRequests_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_NegotiateMaxPendingSendRequests_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_NegotiateMaxPendingSendRequests_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UDPSocket_NegotiateMaxPendingSendRequests_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_NegotiateMaxPendingSendRequests_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_NegotiateMaxPendingSendRequests_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requested_size = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_NegotiateMaxPendingSendRequests_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_NegotiateMaxPendingSendRequests_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.requested_size);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.prototype.initDefaults_ = function() {
    this.actual_size = 0;
  };
  UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.actual_size = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.actual_size);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function UDPSocket_ReceiveMore_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_ReceiveMore_Params.prototype.initDefaults_ = function() {
    this.datagram_number = 0;
  };
  UDPSocket_ReceiveMore_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_ReceiveMore_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_ReceiveMore_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UDPSocket_ReceiveMore_Params.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_ReceiveMore_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_ReceiveMore_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.datagram_number = decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  UDPSocket_ReceiveMore_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_ReceiveMore_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.datagram_number);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };

  function UDPSocket_SendTo_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SendTo_Params.prototype.initDefaults_ = function() {
    this.dest_addr = null;
    this.data = null;
  };
  UDPSocket_SendTo_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_SendTo_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_SendTo_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_SendTo_Params.dest_addr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, net_address$.NetAddress, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_SendTo_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_SendTo_Params.encodedSize = codec.kStructHeaderSize + 16;

  UDPSocket_SendTo_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SendTo_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dest_addr = decoder.decodeStructPointer(net_address$.NetAddress);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  UDPSocket_SendTo_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SendTo_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(net_address$.NetAddress, val.dest_addr);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };

  function UDPSocket_SendTo_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocket_SendTo_ResponseParams.prototype.initDefaults_ = function() {
    this.result = null;
  };
  UDPSocket_SendTo_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocket_SendTo_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocket_SendTo_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocket_SendTo_ResponseParams.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocket_SendTo_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  UDPSocket_SendTo_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new UDPSocket_SendTo_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(network_error$.NetworkError);
    return val;
  };

  UDPSocket_SendTo_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocket_SendTo_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.result);
  };

  function UDPSocketReceiver_OnReceived_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UDPSocketReceiver_OnReceived_Params.prototype.initDefaults_ = function() {
    this.result = null;
    this.src_addr = null;
    this.data = null;
  };
  UDPSocketReceiver_OnReceived_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UDPSocketReceiver_OnReceived_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, UDPSocketReceiver_OnReceived_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocketReceiver_OnReceived_Params.result
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, network_error$.NetworkError, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocketReceiver_OnReceived_Params.src_addr
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, net_address$.NetAddress, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate UDPSocketReceiver_OnReceived_Params.data
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 1, codec.Uint8, true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UDPSocketReceiver_OnReceived_Params.encodedSize = codec.kStructHeaderSize + 24;

  UDPSocketReceiver_OnReceived_Params.decode = function(decoder) {
    var packed;
    var val = new UDPSocketReceiver_OnReceived_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.result = decoder.decodeStructPointer(network_error$.NetworkError);
    val.src_addr = decoder.decodeStructPointer(net_address$.NetAddress);
    val.data = decoder.decodeArrayPointer(codec.Uint8);
    return val;
  };

  UDPSocketReceiver_OnReceived_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UDPSocketReceiver_OnReceived_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(network_error$.NetworkError, val.result);
    encoder.encodeStructPointer(net_address$.NetAddress, val.src_addr);
    encoder.encodeArrayPointer(codec.Uint8, val.data);
  };

  var kUDPSocket_AllowAddressReuse_Name = 0;
  var kUDPSocket_Bind_Name = 1;
  var kUDPSocket_Connect_Name = 2;
  var kUDPSocket_SetSendBufferSize_Name = 3;
  var kUDPSocket_SetReceiveBufferSize_Name = 4;
  var kUDPSocket_NegotiateMaxPendingSendRequests_Name = 5;
  var kUDPSocket_ReceiveMore_Name = 6;
  var kUDPSocket_SendTo_Name = 7;

  function UDPSocketProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  UDPSocketProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  UDPSocketProxy.prototype.allowAddressReuse = function() {
    var params = new UDPSocket_AllowAddressReuse_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUDPSocket_AllowAddressReuse_Name,
          codec.align(UDPSocket_AllowAddressReuse_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_AllowAddressReuse_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_AllowAddressReuse_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketProxy.prototype.bind = function(addr) {
    var params = new UDPSocket_Bind_Params();
    params.addr = addr;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUDPSocket_Bind_Name,
          codec.align(UDPSocket_Bind_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_Bind_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_Bind_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketProxy.prototype.connect = function(remote_addr) {
    var params = new UDPSocket_Connect_Params();
    params.remote_addr = remote_addr;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUDPSocket_Connect_Name,
          codec.align(UDPSocket_Connect_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_Connect_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_Connect_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketProxy.prototype.setSendBufferSize = function(size) {
    var params = new UDPSocket_SetSendBufferSize_Params();
    params.size = size;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUDPSocket_SetSendBufferSize_Name,
          codec.align(UDPSocket_SetSendBufferSize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_SetSendBufferSize_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_SetSendBufferSize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketProxy.prototype.setReceiveBufferSize = function(size) {
    var params = new UDPSocket_SetReceiveBufferSize_Params();
    params.size = size;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUDPSocket_SetReceiveBufferSize_Name,
          codec.align(UDPSocket_SetReceiveBufferSize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_SetReceiveBufferSize_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_SetReceiveBufferSize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketProxy.prototype.negotiateMaxPendingSendRequests = function(requested_size) {
    var params = new UDPSocket_NegotiateMaxPendingSendRequests_Params();
    params.requested_size = requested_size;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUDPSocket_NegotiateMaxPendingSendRequests_Name,
          codec.align(UDPSocket_NegotiateMaxPendingSendRequests_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_NegotiateMaxPendingSendRequests_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  UDPSocketProxy.prototype.receiveMore = function(datagram_number) {
    var params = new UDPSocket_ReceiveMore_Params();
    params.datagram_number = datagram_number;
    var builder = new codec.MessageBuilder(
        kUDPSocket_ReceiveMore_Name,
        codec.align(UDPSocket_ReceiveMore_Params.encodedSize));
    builder.encodeStruct(UDPSocket_ReceiveMore_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  UDPSocketProxy.prototype.sendTo = function(dest_addr, data) {
    var params = new UDPSocket_SendTo_Params();
    params.dest_addr = dest_addr;
    params.data = data;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kUDPSocket_SendTo_Name,
          codec.align(UDPSocket_SendTo_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(UDPSocket_SendTo_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(UDPSocket_SendTo_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function UDPSocketStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  UDPSocketStub.prototype = Object.create(bindings.StubBase.prototype);
  UDPSocketStub.prototype.allowAddressReuse = function() {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.allowAddressReuse && bindings.StubBindings(this).delegate.allowAddressReuse();
  }
  UDPSocketStub.prototype.bind = function(addr) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.bind && bindings.StubBindings(this).delegate.bind(addr);
  }
  UDPSocketStub.prototype.connect = function(remote_addr) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.connect && bindings.StubBindings(this).delegate.connect(remote_addr);
  }
  UDPSocketStub.prototype.setSendBufferSize = function(size) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setSendBufferSize && bindings.StubBindings(this).delegate.setSendBufferSize(size);
  }
  UDPSocketStub.prototype.setReceiveBufferSize = function(size) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.setReceiveBufferSize && bindings.StubBindings(this).delegate.setReceiveBufferSize(size);
  }
  UDPSocketStub.prototype.negotiateMaxPendingSendRequests = function(requested_size) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.negotiateMaxPendingSendRequests && bindings.StubBindings(this).delegate.negotiateMaxPendingSendRequests(requested_size);
  }
  UDPSocketStub.prototype.receiveMore = function(datagram_number) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.receiveMore && bindings.StubBindings(this).delegate.receiveMore(datagram_number);
  }
  UDPSocketStub.prototype.sendTo = function(dest_addr, data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.sendTo && bindings.StubBindings(this).delegate.sendTo(dest_addr, data);
  }

  UDPSocketStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUDPSocket_ReceiveMore_Name:
      var params = reader.decodeStruct(UDPSocket_ReceiveMore_Params);
      this.receiveMore(params.datagram_number);
      return true;
    default:
      return false;
    }
  };

  UDPSocketStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUDPSocket_AllowAddressReuse_Name:
      var params = reader.decodeStruct(UDPSocket_AllowAddressReuse_Params);
      return this.allowAddressReuse().then(function(response) {
        var responseParams =
            new UDPSocket_AllowAddressReuse_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUDPSocket_AllowAddressReuse_Name,
            codec.align(UDPSocket_AllowAddressReuse_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_AllowAddressReuse_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUDPSocket_Bind_Name:
      var params = reader.decodeStruct(UDPSocket_Bind_Params);
      return this.bind(params.addr).then(function(response) {
        var responseParams =
            new UDPSocket_Bind_ResponseParams();
        responseParams.result = response.result;
        responseParams.bound_addr = response.bound_addr;
        responseParams.receiver = response.receiver;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUDPSocket_Bind_Name,
            codec.align(UDPSocket_Bind_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_Bind_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUDPSocket_Connect_Name:
      var params = reader.decodeStruct(UDPSocket_Connect_Params);
      return this.connect(params.remote_addr).then(function(response) {
        var responseParams =
            new UDPSocket_Connect_ResponseParams();
        responseParams.result = response.result;
        responseParams.local_addr = response.local_addr;
        responseParams.receiver = response.receiver;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUDPSocket_Connect_Name,
            codec.align(UDPSocket_Connect_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_Connect_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUDPSocket_SetSendBufferSize_Name:
      var params = reader.decodeStruct(UDPSocket_SetSendBufferSize_Params);
      return this.setSendBufferSize(params.size).then(function(response) {
        var responseParams =
            new UDPSocket_SetSendBufferSize_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUDPSocket_SetSendBufferSize_Name,
            codec.align(UDPSocket_SetSendBufferSize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_SetSendBufferSize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUDPSocket_SetReceiveBufferSize_Name:
      var params = reader.decodeStruct(UDPSocket_SetReceiveBufferSize_Params);
      return this.setReceiveBufferSize(params.size).then(function(response) {
        var responseParams =
            new UDPSocket_SetReceiveBufferSize_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUDPSocket_SetReceiveBufferSize_Name,
            codec.align(UDPSocket_SetReceiveBufferSize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_SetReceiveBufferSize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUDPSocket_NegotiateMaxPendingSendRequests_Name:
      var params = reader.decodeStruct(UDPSocket_NegotiateMaxPendingSendRequests_Params);
      return this.negotiateMaxPendingSendRequests(params.requested_size).then(function(response) {
        var responseParams =
            new UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams();
        responseParams.actual_size = response.actual_size;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUDPSocket_NegotiateMaxPendingSendRequests_Name,
            codec.align(UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kUDPSocket_SendTo_Name:
      var params = reader.decodeStruct(UDPSocket_SendTo_Params);
      return this.sendTo(params.dest_addr, params.data).then(function(response) {
        var responseParams =
            new UDPSocket_SendTo_ResponseParams();
        responseParams.result = response.result;
        var builder = new codec.MessageWithRequestIDBuilder(
            kUDPSocket_SendTo_Name,
            codec.align(UDPSocket_SendTo_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(UDPSocket_SendTo_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateUDPSocketRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUDPSocket_AllowAddressReuse_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_AllowAddressReuse_Params;
      break;
      case kUDPSocket_Bind_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_Bind_Params;
      break;
      case kUDPSocket_Connect_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_Connect_Params;
      break;
      case kUDPSocket_SetSendBufferSize_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_SetSendBufferSize_Params;
      break;
      case kUDPSocket_SetReceiveBufferSize_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_SetReceiveBufferSize_Params;
      break;
      case kUDPSocket_NegotiateMaxPendingSendRequests_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_NegotiateMaxPendingSendRequests_Params;
      break;
      case kUDPSocket_ReceiveMore_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UDPSocket_ReceiveMore_Params;
      break;
      case kUDPSocket_SendTo_Name:
        if (message.expectsResponse())
          paramsClass = UDPSocket_SendTo_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUDPSocketResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kUDPSocket_AllowAddressReuse_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_AllowAddressReuse_ResponseParams;
        break;
      case kUDPSocket_Bind_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_Bind_ResponseParams;
        break;
      case kUDPSocket_Connect_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_Connect_ResponseParams;
        break;
      case kUDPSocket_SetSendBufferSize_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_SetSendBufferSize_ResponseParams;
        break;
      case kUDPSocket_SetReceiveBufferSize_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_SetReceiveBufferSize_ResponseParams;
        break;
      case kUDPSocket_NegotiateMaxPendingSendRequests_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams;
        break;
      case kUDPSocket_SendTo_Name:
        if (message.isResponse())
          paramsClass = UDPSocket_SendTo_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var UDPSocket = {
    name: null,
    proxyClass: UDPSocketProxy,
    stubClass: UDPSocketStub,
    validateRequest: validateUDPSocketRequest,
    validateResponse: validateUDPSocketResponse,
  };
  UDPSocketStub.prototype.validator = validateUDPSocketRequest;
  UDPSocketProxy.prototype.validator = validateUDPSocketResponse;

  var kUDPSocketReceiver_OnReceived_Name = 0;

  function UDPSocketReceiverProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  UDPSocketReceiverProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  UDPSocketReceiverProxy.prototype.onReceived = function(result, src_addr, data) {
    var params = new UDPSocketReceiver_OnReceived_Params();
    params.result = result;
    params.src_addr = src_addr;
    params.data = data;
    var builder = new codec.MessageBuilder(
        kUDPSocketReceiver_OnReceived_Name,
        codec.align(UDPSocketReceiver_OnReceived_Params.encodedSize));
    builder.encodeStruct(UDPSocketReceiver_OnReceived_Params, params);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function UDPSocketReceiverStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  UDPSocketReceiverStub.prototype = Object.create(bindings.StubBase.prototype);
  UDPSocketReceiverStub.prototype.onReceived = function(result, src_addr, data) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.onReceived && bindings.StubBindings(this).delegate.onReceived(result, src_addr, data);
  }

  UDPSocketReceiverStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kUDPSocketReceiver_OnReceived_Name:
      var params = reader.decodeStruct(UDPSocketReceiver_OnReceived_Params);
      this.onReceived(params.result, params.src_addr, params.data);
      return true;
    default:
      return false;
    }
  };

  UDPSocketReceiverStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateUDPSocketReceiverRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kUDPSocketReceiver_OnReceived_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = UDPSocketReceiver_OnReceived_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateUDPSocketReceiverResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var UDPSocketReceiver = {
    name: null,
    proxyClass: UDPSocketReceiverProxy,
    stubClass: UDPSocketReceiverStub,
    validateRequest: validateUDPSocketReceiverRequest,
    validateResponse: null,
  };
  UDPSocketReceiverStub.prototype.validator = validateUDPSocketReceiverRequest;
  UDPSocketReceiverProxy.prototype.validator = null;


  var exports = {};
  exports.UDPSocket = UDPSocket;
  exports.UDPSocketReceiver = UDPSocketReceiver;


  return exports;
});
