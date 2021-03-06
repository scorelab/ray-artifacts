// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/public/interfaces/bindings/tests/math_calculator.mojom
//

package math_calculator

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	ioutil "io/ioutil"
	base64 "encoding/base64"
	fmt "fmt"
	bytes "bytes"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
	gzip "compress/gzip"
)

// This global variable contains a mojom_types.RuntimeTypeInfo struct
// describing the types defined in this file and all of its imports as
// well as the top-level interfaces defined in this file.
var runtimeTypeInfo__ = mojom_types.RuntimeTypeInfo{}

func getRuntimeTypeInfo() mojom_types.RuntimeTypeInfo {
  if runtimeTypeInfo__.TypeMap == nil {
    initRuntimeTypeInfo()
  }
  return runtimeTypeInfo__
}

func initRuntimeTypeInfo() {
  // serializedRuntimeTypeInfo contains the bytes of the Mojo serialization of
  // a mojom_types.RuntimeTypeInfo struct describing the Mojom types in this file.
  // The string contains the base64 encoding of the gzip-compressed bytes.
  serializedRuntimeTypeInfo := "H4sIAAAJbogC/+xXTWsiQRB1dBdG3Q/309mbsBcv2h5lTy6LsLAseFhYPMk4duKE+UrPTMD8kvw8jznmmFvSE6u1LadxBEUTpqAoptNN13t59RqNwiJqUDtQ8bqoOqp4X1f61qR9Ddj7bzjoj/70hz9cM5q2f5mOFTtm5DMD9ifnStK5pnRejnv03UPfHbT+APG7kB4feVZ4rjparNd5vueJ2t3ArcP5Ec//PMnUdykJLNdndnRNmDlrWT6jJGQWcf0LnwTx2LEtYnsRZWemRUMytr2J7Z2HJKJhFJLkxpG1vLGdnHI37hW8fAbeCsBjUfp7Sfo/DV4t6k05nd+54FfLxi+OpmL9Lc/XCb8ONVmKbsrQ86H5ayDdzlHdhlPoSIX/C2B9wtli9DLmzaTgFXFovLpiHg3Uh450gPm50/bDz1ee7yR+wsD3Qno8fjAvvRQfEzOVJfY1J1emE1PFnNSPwIusF03qR+Ufemmdt228aJAqXqrgYz8nk9R3p3Jk/9jXfHwCrByn5B75fGSdjwq816cyH4fWS/Luv1nqRbhprpdd9PL9GflpMSMvRUgVLzXo5W/sRHbgzDAv1RfipwZgEjiFqebzkW0+quAxp+qnt+j3Sla9dBV8fOP5YV0vK1PNfXUn3TRPSDePAQAA//+W5B9D6BAAAA=="

  // Deserialize RuntimeTypeInfo
  compressedBytes, err := base64.StdEncoding.DecodeString(serializedRuntimeTypeInfo)
  if err != nil {
    panic(fmt.Sprintf("Error while base64Decoding runtimeTypeInfo: %s", err.Error()))
  }
  reader, err := gzip.NewReader(bytes.NewBuffer(compressedBytes))
  if err != nil {
    panic(fmt.Sprintf("Error while decompressing runtimeTypeInfo: %s", err.Error()))
  }
  uncompressedBytes, err := ioutil.ReadAll(reader)
  if err != nil {
     panic(fmt.Sprintf("Error while decompressing runtimeTypeInfo: %s", err.Error()))
  }
  if err = reader.Close(); err != nil {
    panic(fmt.Sprintf("Error while decompressing runtimeTypeInfo: %s", err.Error()))
  }
  decoder := bindings.NewDecoder(uncompressedBytes, nil)
  runtimeTypeInfo__.Decode(decoder)

}
func GetAllMojomTypeDefinitions() map[string]mojom_types.UserDefinedType {
  return getRuntimeTypeInfo().TypeMap
}

type Calculator interface {
	Clear() (outValue float64, err error)
	Add(inValue float64) (outValue float64, err error)
	Multiply(inValue float64) (outValue float64, err error)
}


// CalculatorMojomType returns the UserDefinedType that describes the Mojom
// type of Calculator. To obtain the UserDefinedType for Mojom types recursively
// contained in the returned UserDefinedType, look in the map returned
// by the function GetAllMojomTypeDefinitions().
func CalculatorMojomType() mojom_types.UserDefinedType {
	return GetAllMojomTypeDefinitions()["TYPE_KEY:math.Calculator"]
}




type Calculator_Request bindings.InterfaceRequest


// MojomType returns the UserDefinedType that describes the Mojom
// type of this object. To obtain the UserDefinedType for Mojom types recursively
// contained in the returned UserDefinedType, look in the map returned
// by the function AllMojomTypes().
func (*Calculator_Request) MojomType() mojom_types.UserDefinedType {
	return CalculatorMojomType()
}

// AllMojomTypes returns a map that contains the UserDefinedType for
// all Mojom types in the complete type graph of the Mojom type of this object.
func (*Calculator_Request) AllMojomTypes() map[string]mojom_types.UserDefinedType {
	return GetAllMojomTypeDefinitions()
}


type Calculator_Pointer bindings.InterfacePointer


type Calculator_ServiceFactory struct{
	Delegate Calculator_Factory
}

type Calculator_Factory interface {
	Create(request Calculator_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *Calculator_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &Calculator_ServiceDescription{}
}

func (f *Calculator_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := Calculator_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForCalculator creates a message pipe for use with the
// Calculator interface with a Calculator_Request on one end and a Calculator_Pointer on the other.
func CreateMessagePipeForCalculator() (Calculator_Request, Calculator_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return Calculator_Request(r), Calculator_Pointer(p)
}

const calculator_Clear_Name uint32 = 0
const calculator_Add_Name uint32 = 1
const calculator_Multiply_Name uint32 = 2

type Calculator_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewCalculatorProxy(p Calculator_Pointer, waiter bindings.AsyncWaiter) *Calculator_Proxy {
	return &Calculator_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *Calculator_Proxy) Close_Proxy() {
	p.router.Close()
}

type calculator_Clear_Params struct {
}


func (s *calculator_Clear_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var calculator_Clear_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *calculator_Clear_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(calculator_Clear_Params_Versions), func(i int) bool {
		return calculator_Clear_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(calculator_Clear_Params_Versions) {
		if calculator_Clear_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := calculator_Clear_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type calculator_Clear_ResponseParams struct {
	outValue float64
}


func (s *calculator_Clear_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteFloat64(s.outValue); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var calculator_Clear_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *calculator_Clear_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(calculator_Clear_ResponseParams_Versions), func(i int) bool {
		return calculator_Clear_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(calculator_Clear_ResponseParams_Versions) {
		if calculator_Clear_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := calculator_Clear_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat64()
		if err != nil {
			return err
		}
		s.outValue = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *Calculator_Proxy) Clear() (outValue float64, err error) {
	payload := &calculator_Clear_Params{
	}
	header := bindings.MessageHeader{
		Type: calculator_Clear_Name,
		Flags: bindings.MessageExpectsResponseFlag,
		RequestId: p.ids.Count(),
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	readResult := <-p.router.AcceptWithResponse(message)
	if err = readResult.Error; err != nil {
		p.Close_Proxy()
		return
	}
	if readResult.Message.Header.Flags != bindings.MessageIsResponseFlag {
		err = &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
			fmt.Sprintf("invalid message header flag: %v", readResult.Message.Header.Flags),
		}
		return
	}
	if got, want := readResult.Message.Header.Type, calculator_Clear_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response calculator_Clear_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outValue = response.outValue
	return
}

type calculator_Add_Params struct {
	inValue float64
}


func (s *calculator_Add_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteFloat64(s.inValue); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var calculator_Add_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *calculator_Add_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(calculator_Add_Params_Versions), func(i int) bool {
		return calculator_Add_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(calculator_Add_Params_Versions) {
		if calculator_Add_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := calculator_Add_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat64()
		if err != nil {
			return err
		}
		s.inValue = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type calculator_Add_ResponseParams struct {
	outValue float64
}


func (s *calculator_Add_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteFloat64(s.outValue); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var calculator_Add_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *calculator_Add_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(calculator_Add_ResponseParams_Versions), func(i int) bool {
		return calculator_Add_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(calculator_Add_ResponseParams_Versions) {
		if calculator_Add_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := calculator_Add_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat64()
		if err != nil {
			return err
		}
		s.outValue = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *Calculator_Proxy) Add(inValue float64) (outValue float64, err error) {
	payload := &calculator_Add_Params{
		inValue,
	}
	header := bindings.MessageHeader{
		Type: calculator_Add_Name,
		Flags: bindings.MessageExpectsResponseFlag,
		RequestId: p.ids.Count(),
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	readResult := <-p.router.AcceptWithResponse(message)
	if err = readResult.Error; err != nil {
		p.Close_Proxy()
		return
	}
	if readResult.Message.Header.Flags != bindings.MessageIsResponseFlag {
		err = &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
			fmt.Sprintf("invalid message header flag: %v", readResult.Message.Header.Flags),
		}
		return
	}
	if got, want := readResult.Message.Header.Type, calculator_Add_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response calculator_Add_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outValue = response.outValue
	return
}

type calculator_Multiply_Params struct {
	inValue float64
}


func (s *calculator_Multiply_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteFloat64(s.inValue); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var calculator_Multiply_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *calculator_Multiply_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(calculator_Multiply_Params_Versions), func(i int) bool {
		return calculator_Multiply_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(calculator_Multiply_Params_Versions) {
		if calculator_Multiply_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := calculator_Multiply_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat64()
		if err != nil {
			return err
		}
		s.inValue = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type calculator_Multiply_ResponseParams struct {
	outValue float64
}


func (s *calculator_Multiply_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteFloat64(s.outValue); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var calculator_Multiply_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *calculator_Multiply_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(calculator_Multiply_ResponseParams_Versions), func(i int) bool {
		return calculator_Multiply_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(calculator_Multiply_ResponseParams_Versions) {
		if calculator_Multiply_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := calculator_Multiply_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat64()
		if err != nil {
			return err
		}
		s.outValue = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *Calculator_Proxy) Multiply(inValue float64) (outValue float64, err error) {
	payload := &calculator_Multiply_Params{
		inValue,
	}
	header := bindings.MessageHeader{
		Type: calculator_Multiply_Name,
		Flags: bindings.MessageExpectsResponseFlag,
		RequestId: p.ids.Count(),
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	readResult := <-p.router.AcceptWithResponse(message)
	if err = readResult.Error; err != nil {
		p.Close_Proxy()
		return
	}
	if readResult.Message.Header.Flags != bindings.MessageIsResponseFlag {
		err = &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
			fmt.Sprintf("invalid message header flag: %v", readResult.Message.Header.Flags),
		}
		return
	}
	if got, want := readResult.Message.Header.Type, calculator_Multiply_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response calculator_Multiply_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outValue = response.outValue
	return
}

type calculator_Stub struct {
	connector *bindings.Connector
	impl Calculator
}

func NewCalculatorStub(r Calculator_Request, impl Calculator, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &calculator_Stub{connector, impl})
}


func (f *Calculator_Request) ServiceDescription() service_describer.ServiceDescription {
	return &Calculator_ServiceDescription{}
}


type Calculator_ServiceDescription struct{}

func (sd *Calculator_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *Calculator_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *Calculator_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*Calculator_ServiceDescription)(nil)


func (s *calculator_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case calculator_Clear_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request calculator_Clear_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response calculator_Clear_ResponseParams
		response.outValue, err = s.impl.Clear()
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: calculator_Clear_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case calculator_Add_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request calculator_Add_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response calculator_Add_ResponseParams
		response.outValue, err = s.impl.Add(request.inValue)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: calculator_Add_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case calculator_Multiply_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request calculator_Multiply_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response calculator_Multiply_ResponseParams
		response.outValue, err = s.impl.Multiply(request.inValue)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: calculator_Multiply_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	default:
		return &bindings.ValidationError{
			bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("unknown method %v", message.Header.Type),
		}
	}
	return
}

