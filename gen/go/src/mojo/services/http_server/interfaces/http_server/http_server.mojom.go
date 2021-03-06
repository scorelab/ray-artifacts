// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/http_server/interfaces/http_server.mojom
//

package http_server

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
	http_response "mojo/services/http_server/interfaces/http_response"
	http_request "mojo/services/http_server/interfaces/http_request"
)


type HttpServer interface {
	SetHandler(inPattern string, inHandler HttpHandler_Pointer) (outSuccess bool, err error)
	GetPort() (outPort uint16, err error)
}




type HttpServer_Request bindings.InterfaceRequest



type HttpServer_Pointer bindings.InterfacePointer


type HttpServer_ServiceFactory struct{
	Delegate HttpServer_Factory
}

type HttpServer_Factory interface {
	Create(request HttpServer_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *HttpServer_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &HttpServer_ServiceDescription{}
}

func (f *HttpServer_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := HttpServer_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForHttpServer creates a message pipe for use with the
// HttpServer interface with a HttpServer_Request on one end and a HttpServer_Pointer on the other.
func CreateMessagePipeForHttpServer() (HttpServer_Request, HttpServer_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return HttpServer_Request(r), HttpServer_Pointer(p)
}

const httpServer_SetHandler_Name uint32 = 0
const httpServer_GetPort_Name uint32 = 1

type HttpServer_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewHttpServerProxy(p HttpServer_Pointer, waiter bindings.AsyncWaiter) *HttpServer_Proxy {
	return &HttpServer_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *HttpServer_Proxy) Close_Proxy() {
	p.router.Close()
}

type httpServer_SetHandler_Params struct {
	inPattern string
	inHandler HttpHandler_Pointer
}


func (s *httpServer_SetHandler_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.inPattern); err != nil {
		return err
	}
	if err := encoder.WriteInterface(s.inHandler.PassMessagePipe()); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpServer_SetHandler_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *httpServer_SetHandler_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpServer_SetHandler_Params_Versions), func(i int) bool {
		return httpServer_SetHandler_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpServer_SetHandler_Params_Versions) {
		if httpServer_SetHandler_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpServer_SetHandler_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
		} else {
			value0, err := decoder.ReadString()
			if err != nil {
				return err
			}
			s.inPattern = value0
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadInterface()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.inHandler = HttpHandler_Pointer{handleOwner}
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type httpServer_SetHandler_ResponseParams struct {
	outSuccess bool
}


func (s *httpServer_SetHandler_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteBool(s.outSuccess); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpServer_SetHandler_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpServer_SetHandler_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpServer_SetHandler_ResponseParams_Versions), func(i int) bool {
		return httpServer_SetHandler_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpServer_SetHandler_ResponseParams_Versions) {
		if httpServer_SetHandler_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpServer_SetHandler_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadBool()
		if err != nil {
			return err
		}
		s.outSuccess = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HttpServer_Proxy) SetHandler(inPattern string, inHandler HttpHandler_Pointer) (outSuccess bool, err error) {
	payload := &httpServer_SetHandler_Params{
		inPattern,
		inHandler,
	}
	header := bindings.MessageHeader{
		Type: httpServer_SetHandler_Name,
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
	if got, want := readResult.Message.Header.Type, httpServer_SetHandler_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response httpServer_SetHandler_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outSuccess = response.outSuccess
	return
}

type httpServer_GetPort_Params struct {
}


func (s *httpServer_GetPort_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpServer_GetPort_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *httpServer_GetPort_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpServer_GetPort_Params_Versions), func(i int) bool {
		return httpServer_GetPort_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpServer_GetPort_Params_Versions) {
		if httpServer_GetPort_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpServer_GetPort_Params_Versions[index].Size
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

type httpServer_GetPort_ResponseParams struct {
	outPort uint16
}


func (s *httpServer_GetPort_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteUint16(s.outPort); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpServer_GetPort_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpServer_GetPort_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpServer_GetPort_ResponseParams_Versions), func(i int) bool {
		return httpServer_GetPort_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpServer_GetPort_ResponseParams_Versions) {
		if httpServer_GetPort_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpServer_GetPort_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint16()
		if err != nil {
			return err
		}
		s.outPort = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HttpServer_Proxy) GetPort() (outPort uint16, err error) {
	payload := &httpServer_GetPort_Params{
	}
	header := bindings.MessageHeader{
		Type: httpServer_GetPort_Name,
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
	if got, want := readResult.Message.Header.Type, httpServer_GetPort_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response httpServer_GetPort_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outPort = response.outPort
	return
}

type httpServer_Stub struct {
	connector *bindings.Connector
	impl HttpServer
}

func NewHttpServerStub(r HttpServer_Request, impl HttpServer, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &httpServer_Stub{connector, impl})
}


func (f *HttpServer_Request) ServiceDescription() service_describer.ServiceDescription {
	return &HttpServer_ServiceDescription{}
}


type HttpServer_ServiceDescription struct{}

func (sd *HttpServer_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *HttpServer_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *HttpServer_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*HttpServer_ServiceDescription)(nil)


func (s *httpServer_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case httpServer_SetHandler_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request httpServer_SetHandler_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response httpServer_SetHandler_ResponseParams
		response.outSuccess, err = s.impl.SetHandler(request.inPattern, request.inHandler)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: httpServer_SetHandler_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case httpServer_GetPort_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request httpServer_GetPort_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response httpServer_GetPort_ResponseParams
		response.outPort, err = s.impl.GetPort()
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: httpServer_GetPort_Name,
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

type HttpHandler interface {
	HandleRequest(inRequest http_request.HttpRequest) (outResponse http_response.HttpResponse, err error)
}




type HttpHandler_Request bindings.InterfaceRequest



type HttpHandler_Pointer bindings.InterfacePointer


type HttpHandler_ServiceFactory struct{
	Delegate HttpHandler_Factory
}

type HttpHandler_Factory interface {
	Create(request HttpHandler_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *HttpHandler_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &HttpHandler_ServiceDescription{}
}

func (f *HttpHandler_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := HttpHandler_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForHttpHandler creates a message pipe for use with the
// HttpHandler interface with a HttpHandler_Request on one end and a HttpHandler_Pointer on the other.
func CreateMessagePipeForHttpHandler() (HttpHandler_Request, HttpHandler_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return HttpHandler_Request(r), HttpHandler_Pointer(p)
}

const httpHandler_HandleRequest_Name uint32 = 0

type HttpHandler_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewHttpHandlerProxy(p HttpHandler_Pointer, waiter bindings.AsyncWaiter) *HttpHandler_Proxy {
	return &HttpHandler_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *HttpHandler_Proxy) Close_Proxy() {
	p.router.Close()
}

type httpHandler_HandleRequest_Params struct {
	inRequest http_request.HttpRequest
}


func (s *httpHandler_HandleRequest_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inRequest.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpHandler_HandleRequest_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpHandler_HandleRequest_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpHandler_HandleRequest_Params_Versions), func(i int) bool {
		return httpHandler_HandleRequest_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpHandler_HandleRequest_Params_Versions) {
		if httpHandler_HandleRequest_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpHandler_HandleRequest_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
		} else {
			if err := s.inRequest.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type httpHandler_HandleRequest_ResponseParams struct {
	outResponse http_response.HttpResponse
}


func (s *httpHandler_HandleRequest_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.outResponse.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpHandler_HandleRequest_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpHandler_HandleRequest_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpHandler_HandleRequest_ResponseParams_Versions), func(i int) bool {
		return httpHandler_HandleRequest_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpHandler_HandleRequest_ResponseParams_Versions) {
		if httpHandler_HandleRequest_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpHandler_HandleRequest_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
		} else {
			if err := s.outResponse.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HttpHandler_Proxy) HandleRequest(inRequest http_request.HttpRequest) (outResponse http_response.HttpResponse, err error) {
	payload := &httpHandler_HandleRequest_Params{
		inRequest,
	}
	header := bindings.MessageHeader{
		Type: httpHandler_HandleRequest_Name,
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
	if got, want := readResult.Message.Header.Type, httpHandler_HandleRequest_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response httpHandler_HandleRequest_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResponse = response.outResponse
	return
}

type httpHandler_Stub struct {
	connector *bindings.Connector
	impl HttpHandler
}

func NewHttpHandlerStub(r HttpHandler_Request, impl HttpHandler, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &httpHandler_Stub{connector, impl})
}


func (f *HttpHandler_Request) ServiceDescription() service_describer.ServiceDescription {
	return &HttpHandler_ServiceDescription{}
}


type HttpHandler_ServiceDescription struct{}

func (sd *HttpHandler_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *HttpHandler_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *HttpHandler_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*HttpHandler_ServiceDescription)(nil)


func (s *httpHandler_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case httpHandler_HandleRequest_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request httpHandler_HandleRequest_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response httpHandler_HandleRequest_ResponseParams
		response.outResponse, err = s.impl.HandleRequest(request.inRequest)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: httpHandler_HandleRequest_Name,
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

