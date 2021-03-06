// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

define("mojo/services/location/interfaces/geocoder.mojom", [
    "mojo/public/js/bindings",
    "mojo/public/js/codec",
    "mojo/public/js/connection",
    "mojo/public/js/core",
    "mojo/public/js/validator",
    "mojo/services/location/interfaces/location.mojom",
], function(bindings, codec, connection, core, validator, location$) {

  function LocationType(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  LocationType.ROOFTOP = "ROOFTOP";
  LocationType.RANGE_INTERPOLATED = "RANGE_INTERPOLATED";
  LocationType.GEOMETRIC_CENTER = "GEOMETRIC_CENTER";
  LocationType.APPROXIMATE = "APPROXIMATE";
  LocationType.prototype.initDefaults_ = function() {
  };
  LocationType.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  LocationType.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, LocationType.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  LocationType.encodedSize = codec.kStructHeaderSize + 0;

  LocationType.decode = function(decoder) {
    var packed;
    var val = new LocationType();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  LocationType.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(LocationType.encodedSize);
    encoder.writeUint32(0);
  };

  function Bounds(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Bounds.prototype.initDefaults_ = function() {
    this.northeast = null;
    this.southwest = null;
  };
  Bounds.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Bounds.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Bounds.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Bounds.northeast
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, location$.Location, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Bounds.southwest
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, location$.Location, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Bounds.encodedSize = codec.kStructHeaderSize + 16;

  Bounds.decode = function(decoder) {
    var packed;
    var val = new Bounds();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.northeast = decoder.decodeStructPointer(location$.Location);
    val.southwest = decoder.decodeStructPointer(location$.Location);
    return val;
  };

  Bounds.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Bounds.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(location$.Location, val.northeast);
    encoder.encodeStructPointer(location$.Location, val.southwest);
  };

  function ComponentRestrictions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ComponentRestrictions.prototype.initDefaults_ = function() {
    this.administrative_area = null;
    this.country = null;
    this.locality = null;
    this.postal_code = null;
    this.route = null;
  };
  ComponentRestrictions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ComponentRestrictions.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, ComponentRestrictions.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ComponentRestrictions.administrative_area
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ComponentRestrictions.country
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ComponentRestrictions.locality
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ComponentRestrictions.postal_code
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, true)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate ComponentRestrictions.route
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ComponentRestrictions.encodedSize = codec.kStructHeaderSize + 40;

  ComponentRestrictions.decode = function(decoder) {
    var packed;
    var val = new ComponentRestrictions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.administrative_area = decoder.decodeStruct(codec.NullableString);
    val.country = decoder.decodeStruct(codec.NullableString);
    val.locality = decoder.decodeStruct(codec.NullableString);
    val.postal_code = decoder.decodeStruct(codec.NullableString);
    val.route = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  ComponentRestrictions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ComponentRestrictions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.NullableString, val.administrative_area);
    encoder.encodeStruct(codec.NullableString, val.country);
    encoder.encodeStruct(codec.NullableString, val.locality);
    encoder.encodeStruct(codec.NullableString, val.postal_code);
    encoder.encodeStruct(codec.NullableString, val.route);
  };

  function Options(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Options.prototype.initDefaults_ = function() {
    this.restrictions = null;
    this.location = null;
    this.region = null;
  };
  Options.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Options.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Options.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Options.restrictions
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ComponentRestrictions, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Options.location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, location$.Location, true);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Options.region
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Options.encodedSize = codec.kStructHeaderSize + 24;

  Options.decode = function(decoder) {
    var packed;
    var val = new Options();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.restrictions = decoder.decodeStructPointer(ComponentRestrictions);
    val.location = decoder.decodeStructPointer(location$.Location);
    val.region = decoder.decodeStruct(codec.NullableString);
    return val;
  };

  Options.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Options.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ComponentRestrictions, val.restrictions);
    encoder.encodeStructPointer(location$.Location, val.location);
    encoder.encodeStruct(codec.NullableString, val.region);
  };

  function Geometry(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geometry.prototype.initDefaults_ = function() {
    this.location = null;
    this.location_type = null;
    this.viewport = null;
    this.bounds = null;
  };
  Geometry.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Geometry.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Geometry.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geometry.location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, location$.Location, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geometry.location_type
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, LocationType, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geometry.viewport
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, Bounds, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geometry.bounds
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, Bounds, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Geometry.encodedSize = codec.kStructHeaderSize + 32;

  Geometry.decode = function(decoder) {
    var packed;
    var val = new Geometry();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.location = decoder.decodeStructPointer(location$.Location);
    val.location_type = decoder.decodeStructPointer(LocationType);
    val.viewport = decoder.decodeStructPointer(Bounds);
    val.bounds = decoder.decodeStructPointer(Bounds);
    return val;
  };

  Geometry.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geometry.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(location$.Location, val.location);
    encoder.encodeStructPointer(LocationType, val.location_type);
    encoder.encodeStructPointer(Bounds, val.viewport);
    encoder.encodeStructPointer(Bounds, val.bounds);
  };

  function Result(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Result.prototype.initDefaults_ = function() {
    this.partial_match = false;
    this.geometry = null;
    this.formatted_address = null;
    this.types = null;
  };
  Result.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Result.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Result.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;


    
    // validate Result.geometry
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Geometry, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Result.formatted_address
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Result.types
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, codec.String, false, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Result.encodedSize = codec.kStructHeaderSize + 32;

  Result.decode = function(decoder) {
    var packed;
    var val = new Result();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.partial_match = decoder.decodeStruct(codec.Uint8);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.geometry = decoder.decodeStructPointer(Geometry);
    val.formatted_address = decoder.decodeStruct(codec.String);
    val.types = decoder.decodeArrayPointer(codec.String);
    return val;
  };

  Result.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Result.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint8, val.partial_match);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(Geometry, val.geometry);
    encoder.encodeStruct(codec.String, val.formatted_address);
    encoder.encodeArrayPointer(codec.String, val.types);
  };

  function Status(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Status.OK = "OK";
  Status.ZERO_RESULTS = "ZERO_RESULTS";
  Status.OVER_QUERY_LIMIT = "OVER_QUERY_LIMIT";
  Status.REQUEST_DENIED = "REQUEST_DENIED";
  Status.INVALID_REQUEST = "INVALID_REQUEST";
  Status.prototype.initDefaults_ = function() {
  };
  Status.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Status.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Status.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Status.encodedSize = codec.kStructHeaderSize + 0;

  Status.decode = function(decoder) {
    var packed;
    var val = new Status();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  Status.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Status.encodedSize);
    encoder.writeUint32(0);
  };

  function Geocoder_AddressToLocation_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geocoder_AddressToLocation_Params.prototype.initDefaults_ = function() {
    this.address = null;
    this.options = null;
  };
  Geocoder_AddressToLocation_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Geocoder_AddressToLocation_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Geocoder_AddressToLocation_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_AddressToLocation_Params.address
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_AddressToLocation_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Options, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Geocoder_AddressToLocation_Params.encodedSize = codec.kStructHeaderSize + 16;

  Geocoder_AddressToLocation_Params.decode = function(decoder) {
    var packed;
    var val = new Geocoder_AddressToLocation_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.address = decoder.decodeStruct(codec.String);
    val.options = decoder.decodeStructPointer(Options);
    return val;
  };

  Geocoder_AddressToLocation_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geocoder_AddressToLocation_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.address);
    encoder.encodeStructPointer(Options, val.options);
  };

  function Geocoder_AddressToLocation_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geocoder_AddressToLocation_ResponseParams.prototype.initDefaults_ = function() {
    this.status = null;
    this.results = null;
  };
  Geocoder_AddressToLocation_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Geocoder_AddressToLocation_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Geocoder_AddressToLocation_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_AddressToLocation_ResponseParams.status
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_AddressToLocation_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(Result), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Geocoder_AddressToLocation_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Geocoder_AddressToLocation_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Geocoder_AddressToLocation_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.String);
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(Result));
    return val;
  };

  Geocoder_AddressToLocation_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geocoder_AddressToLocation_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.status);
    encoder.encodeArrayPointer(new codec.PointerTo(Result), val.results);
  };

  function Geocoder_LocationToAddress_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geocoder_LocationToAddress_Params.prototype.initDefaults_ = function() {
    this.location = null;
    this.options = null;
  };
  Geocoder_LocationToAddress_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Geocoder_LocationToAddress_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Geocoder_LocationToAddress_Params.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_LocationToAddress_Params.location
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, location$.Location, false);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_LocationToAddress_Params.options
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, Options, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Geocoder_LocationToAddress_Params.encodedSize = codec.kStructHeaderSize + 16;

  Geocoder_LocationToAddress_Params.decode = function(decoder) {
    var packed;
    var val = new Geocoder_LocationToAddress_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.location = decoder.decodeStructPointer(location$.Location);
    val.options = decoder.decodeStructPointer(Options);
    return val;
  };

  Geocoder_LocationToAddress_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geocoder_LocationToAddress_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(location$.Location, val.location);
    encoder.encodeStructPointer(Options, val.options);
  };

  function Geocoder_LocationToAddress_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Geocoder_LocationToAddress_ResponseParams.prototype.initDefaults_ = function() {
    this.status = null;
    this.results = null;
  };
  Geocoder_LocationToAddress_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Geocoder_LocationToAddress_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, Geocoder_LocationToAddress_ResponseParams.encodedSize, 0);
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_LocationToAddress_ResponseParams.status
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    
    // validate Geocoder_LocationToAddress_ResponseParams.results
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(Result), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Geocoder_LocationToAddress_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  Geocoder_LocationToAddress_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new Geocoder_LocationToAddress_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.status = decoder.decodeStruct(codec.String);
    val.results = decoder.decodeArrayPointer(new codec.PointerTo(Result));
    return val;
  };

  Geocoder_LocationToAddress_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Geocoder_LocationToAddress_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.status);
    encoder.encodeArrayPointer(new codec.PointerTo(Result), val.results);
  };

  var kGeocoder_AddressToLocation_Name = 0;
  var kGeocoder_LocationToAddress_Name = 1;

  function GeocoderProxy(receiver) {
    bindings.ProxyBase.call(this, receiver);
  }
  GeocoderProxy.prototype = Object.create(bindings.ProxyBase.prototype);
  GeocoderProxy.prototype.addressToLocation = function(address, options) {
    var params = new Geocoder_AddressToLocation_Params();
    params.address = address;
    params.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kGeocoder_AddressToLocation_Name,
          codec.align(Geocoder_AddressToLocation_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Geocoder_AddressToLocation_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Geocoder_AddressToLocation_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  GeocoderProxy.prototype.locationToAddress = function(location, options) {
    var params = new Geocoder_LocationToAddress_Params();
    params.location = location;
    params.options = options;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageWithRequestIDBuilder(
          kGeocoder_LocationToAddress_Name,
          codec.align(Geocoder_LocationToAddress_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(Geocoder_LocationToAddress_Params, params);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(Geocoder_LocationToAddress_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function GeocoderStub(delegate) {
    bindings.StubBase.call(this, delegate);
  }
  GeocoderStub.prototype = Object.create(bindings.StubBase.prototype);
  GeocoderStub.prototype.addressToLocation = function(address, options) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.addressToLocation && bindings.StubBindings(this).delegate.addressToLocation(address, options);
  }
  GeocoderStub.prototype.locationToAddress = function(location, options) {
    return bindings.StubBindings(this).delegate && bindings.StubBindings(this).delegate.locationToAddress && bindings.StubBindings(this).delegate.locationToAddress(location, options);
  }

  GeocoderStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  GeocoderStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kGeocoder_AddressToLocation_Name:
      var params = reader.decodeStruct(Geocoder_AddressToLocation_Params);
      return this.addressToLocation(params.address, params.options).then(function(response) {
        var responseParams =
            new Geocoder_AddressToLocation_ResponseParams();
        responseParams.status = response.status;
        responseParams.results = response.results;
        var builder = new codec.MessageWithRequestIDBuilder(
            kGeocoder_AddressToLocation_Name,
            codec.align(Geocoder_AddressToLocation_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Geocoder_AddressToLocation_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    case kGeocoder_LocationToAddress_Name:
      var params = reader.decodeStruct(Geocoder_LocationToAddress_Params);
      return this.locationToAddress(params.location, params.options).then(function(response) {
        var responseParams =
            new Geocoder_LocationToAddress_ResponseParams();
        responseParams.status = response.status;
        responseParams.results = response.results;
        var builder = new codec.MessageWithRequestIDBuilder(
            kGeocoder_LocationToAddress_Name,
            codec.align(Geocoder_LocationToAddress_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(Geocoder_LocationToAddress_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
    default:
      return Promise.reject(Error("Unhandled message: " + reader.messageName));
    }
  };

  function validateGeocoderRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kGeocoder_AddressToLocation_Name:
        if (message.expectsResponse())
          paramsClass = Geocoder_AddressToLocation_Params;
      break;
      case kGeocoder_LocationToAddress_Name:
        if (message.expectsResponse())
          paramsClass = Geocoder_LocationToAddress_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateGeocoderResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kGeocoder_AddressToLocation_Name:
        if (message.isResponse())
          paramsClass = Geocoder_AddressToLocation_ResponseParams;
        break;
      case kGeocoder_LocationToAddress_Name:
        if (message.isResponse())
          paramsClass = Geocoder_LocationToAddress_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var Geocoder = {
    name: null,
    proxyClass: GeocoderProxy,
    stubClass: GeocoderStub,
    validateRequest: validateGeocoderRequest,
    validateResponse: validateGeocoderResponse,
  };
  GeocoderStub.prototype.validator = validateGeocoderRequest;
  GeocoderProxy.prototype.validator = validateGeocoderResponse;


  var exports = {};
  exports.LocationType = LocationType;
  exports.Bounds = Bounds;
  exports.ComponentRestrictions = ComponentRestrictions;
  exports.Options = Options;
  exports.Geometry = Geometry;
  exports.Result = Result;
  exports.Status = Status;
  exports.Geocoder = Geocoder;


  return exports;
});
