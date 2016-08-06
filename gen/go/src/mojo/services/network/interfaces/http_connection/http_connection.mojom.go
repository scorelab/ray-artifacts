// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/network/interfaces/http_connection.mojom
//

package http_connection

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	http_message "mojo/services/network/interfaces/http_message"
	network_error "mojo/public/interfaces/network/network_error"
	fmt "fmt"
	web_socket "mojo/services/network/interfaces/web_socket"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type HttpConnection interface {
	SetSendBufferSize(inSize uint32) (outResult network_error.NetworkError, err error)
	SetReceiveBufferSize(inSize uint32) (outResult network_error.NetworkError, err error)
}




type HttpConnection_Request bindings.InterfaceRequest



type HttpConnection_Pointer bindings.InterfacePointer


type HttpConnection_ServiceFactory struct{
	Delegate HttpConnection_Factory
}

type HttpConnection_Factory interface {
	Create(request HttpConnection_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *HttpConnection_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &HttpConnection_ServiceDescription{}
}

func (f *HttpConnection_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := HttpConnection_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForHttpConnection creates a message pipe for use with the
// HttpConnection interface with a HttpConnection_Request on one end and a HttpConnection_Pointer on the other.
func CreateMessagePipeForHttpConnection() (HttpConnection_Request, HttpConnection_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return HttpConnection_Request(r), HttpConnection_Pointer(p)
}

const httpConnection_SetSendBufferSize_Name uint32 = 0
const httpConnection_SetReceiveBufferSize_Name uint32 = 1

type HttpConnection_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewHttpConnectionProxy(p HttpConnection_Pointer, waiter bindings.AsyncWaiter) *HttpConnection_Proxy {
	return &HttpConnection_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *HttpConnection_Proxy) Close_Proxy() {
	p.router.Close()
}

type httpConnection_SetSendBufferSize_Params struct {
	inSize uint32
}


func (s *httpConnection_SetSendBufferSize_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteUint32(s.inSize); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpConnection_SetSendBufferSize_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpConnection_SetSendBufferSize_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnection_SetSendBufferSize_Params_Versions), func(i int) bool {
		return httpConnection_SetSendBufferSize_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnection_SetSendBufferSize_Params_Versions) {
		if httpConnection_SetSendBufferSize_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnection_SetSendBufferSize_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint32()
		if err != nil {
			return err
		}
		s.inSize = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type httpConnection_SetSendBufferSize_ResponseParams struct {
	outResult network_error.NetworkError
}


func (s *httpConnection_SetSendBufferSize_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.outResult.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpConnection_SetSendBufferSize_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpConnection_SetSendBufferSize_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnection_SetSendBufferSize_ResponseParams_Versions), func(i int) bool {
		return httpConnection_SetSendBufferSize_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnection_SetSendBufferSize_ResponseParams_Versions) {
		if httpConnection_SetSendBufferSize_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnection_SetSendBufferSize_ResponseParams_Versions[index].Size
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
			if err := s.outResult.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HttpConnection_Proxy) SetSendBufferSize(inSize uint32) (outResult network_error.NetworkError, err error) {
	payload := &httpConnection_SetSendBufferSize_Params{
		inSize,
	}
	header := bindings.MessageHeader{
		Type: httpConnection_SetSendBufferSize_Name,
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
	if got, want := readResult.Message.Header.Type, httpConnection_SetSendBufferSize_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response httpConnection_SetSendBufferSize_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResult = response.outResult
	return
}

type httpConnection_SetReceiveBufferSize_Params struct {
	inSize uint32
}


func (s *httpConnection_SetReceiveBufferSize_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteUint32(s.inSize); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpConnection_SetReceiveBufferSize_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpConnection_SetReceiveBufferSize_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnection_SetReceiveBufferSize_Params_Versions), func(i int) bool {
		return httpConnection_SetReceiveBufferSize_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnection_SetReceiveBufferSize_Params_Versions) {
		if httpConnection_SetReceiveBufferSize_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnection_SetReceiveBufferSize_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint32()
		if err != nil {
			return err
		}
		s.inSize = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type httpConnection_SetReceiveBufferSize_ResponseParams struct {
	outResult network_error.NetworkError
}


func (s *httpConnection_SetReceiveBufferSize_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.outResult.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpConnection_SetReceiveBufferSize_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpConnection_SetReceiveBufferSize_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnection_SetReceiveBufferSize_ResponseParams_Versions), func(i int) bool {
		return httpConnection_SetReceiveBufferSize_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnection_SetReceiveBufferSize_ResponseParams_Versions) {
		if httpConnection_SetReceiveBufferSize_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnection_SetReceiveBufferSize_ResponseParams_Versions[index].Size
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
			if err := s.outResult.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HttpConnection_Proxy) SetReceiveBufferSize(inSize uint32) (outResult network_error.NetworkError, err error) {
	payload := &httpConnection_SetReceiveBufferSize_Params{
		inSize,
	}
	header := bindings.MessageHeader{
		Type: httpConnection_SetReceiveBufferSize_Name,
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
	if got, want := readResult.Message.Header.Type, httpConnection_SetReceiveBufferSize_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response httpConnection_SetReceiveBufferSize_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResult = response.outResult
	return
}

type httpConnection_Stub struct {
	connector *bindings.Connector
	impl HttpConnection
}

func NewHttpConnectionStub(r HttpConnection_Request, impl HttpConnection, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &httpConnection_Stub{connector, impl})
}


func (f *HttpConnection_Request) ServiceDescription() service_describer.ServiceDescription {
	return &HttpConnection_ServiceDescription{}
}


type HttpConnection_ServiceDescription struct{}

func (sd *HttpConnection_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *HttpConnection_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *HttpConnection_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*HttpConnection_ServiceDescription)(nil)


func (s *httpConnection_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case httpConnection_SetSendBufferSize_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request httpConnection_SetSendBufferSize_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response httpConnection_SetSendBufferSize_ResponseParams
		response.outResult, err = s.impl.SetSendBufferSize(request.inSize)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: httpConnection_SetSendBufferSize_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case httpConnection_SetReceiveBufferSize_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request httpConnection_SetReceiveBufferSize_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response httpConnection_SetReceiveBufferSize_ResponseParams
		response.outResult, err = s.impl.SetReceiveBufferSize(request.inSize)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: httpConnection_SetReceiveBufferSize_Name,
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

type HttpConnectionDelegate interface {
	OnReceivedRequest(inRequest http_message.HttpRequest) (outResponse http_message.HttpResponse, err error)
	OnReceivedWebSocketRequest(inRequest http_message.HttpRequest) (outWebSocket *web_socket.WebSocket_Request, outSendStream *system.ConsumerHandle, outClient *web_socket.WebSocketClient_Pointer, err error)
}




type HttpConnectionDelegate_Request bindings.InterfaceRequest



type HttpConnectionDelegate_Pointer bindings.InterfacePointer


type HttpConnectionDelegate_ServiceFactory struct{
	Delegate HttpConnectionDelegate_Factory
}

type HttpConnectionDelegate_Factory interface {
	Create(request HttpConnectionDelegate_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *HttpConnectionDelegate_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &HttpConnectionDelegate_ServiceDescription{}
}

func (f *HttpConnectionDelegate_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := HttpConnectionDelegate_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForHttpConnectionDelegate creates a message pipe for use with the
// HttpConnectionDelegate interface with a HttpConnectionDelegate_Request on one end and a HttpConnectionDelegate_Pointer on the other.
func CreateMessagePipeForHttpConnectionDelegate() (HttpConnectionDelegate_Request, HttpConnectionDelegate_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return HttpConnectionDelegate_Request(r), HttpConnectionDelegate_Pointer(p)
}

const httpConnectionDelegate_OnReceivedRequest_Name uint32 = 0
const httpConnectionDelegate_OnReceivedWebSocketRequest_Name uint32 = 1

type HttpConnectionDelegate_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewHttpConnectionDelegateProxy(p HttpConnectionDelegate_Pointer, waiter bindings.AsyncWaiter) *HttpConnectionDelegate_Proxy {
	return &HttpConnectionDelegate_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *HttpConnectionDelegate_Proxy) Close_Proxy() {
	p.router.Close()
}

type httpConnectionDelegate_OnReceivedRequest_Params struct {
	inRequest http_message.HttpRequest
}


func (s *httpConnectionDelegate_OnReceivedRequest_Params) Encode(encoder *bindings.Encoder) error {
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

var httpConnectionDelegate_OnReceivedRequest_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpConnectionDelegate_OnReceivedRequest_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnectionDelegate_OnReceivedRequest_Params_Versions), func(i int) bool {
		return httpConnectionDelegate_OnReceivedRequest_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnectionDelegate_OnReceivedRequest_Params_Versions) {
		if httpConnectionDelegate_OnReceivedRequest_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnectionDelegate_OnReceivedRequest_Params_Versions[index].Size
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

type httpConnectionDelegate_OnReceivedRequest_ResponseParams struct {
	outResponse http_message.HttpResponse
}


func (s *httpConnectionDelegate_OnReceivedRequest_ResponseParams) Encode(encoder *bindings.Encoder) error {
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

var httpConnectionDelegate_OnReceivedRequest_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpConnectionDelegate_OnReceivedRequest_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnectionDelegate_OnReceivedRequest_ResponseParams_Versions), func(i int) bool {
		return httpConnectionDelegate_OnReceivedRequest_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnectionDelegate_OnReceivedRequest_ResponseParams_Versions) {
		if httpConnectionDelegate_OnReceivedRequest_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnectionDelegate_OnReceivedRequest_ResponseParams_Versions[index].Size
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

func (p *HttpConnectionDelegate_Proxy) OnReceivedRequest(inRequest http_message.HttpRequest) (outResponse http_message.HttpResponse, err error) {
	payload := &httpConnectionDelegate_OnReceivedRequest_Params{
		inRequest,
	}
	header := bindings.MessageHeader{
		Type: httpConnectionDelegate_OnReceivedRequest_Name,
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
	if got, want := readResult.Message.Header.Type, httpConnectionDelegate_OnReceivedRequest_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response httpConnectionDelegate_OnReceivedRequest_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResponse = response.outResponse
	return
}

type httpConnectionDelegate_OnReceivedWebSocketRequest_Params struct {
	inRequest http_message.HttpRequest
}


func (s *httpConnectionDelegate_OnReceivedWebSocketRequest_Params) Encode(encoder *bindings.Encoder) error {
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

var httpConnectionDelegate_OnReceivedWebSocketRequest_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *httpConnectionDelegate_OnReceivedWebSocketRequest_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnectionDelegate_OnReceivedWebSocketRequest_Params_Versions), func(i int) bool {
		return httpConnectionDelegate_OnReceivedWebSocketRequest_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnectionDelegate_OnReceivedWebSocketRequest_Params_Versions) {
		if httpConnectionDelegate_OnReceivedWebSocketRequest_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnectionDelegate_OnReceivedWebSocketRequest_Params_Versions[index].Size
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

type httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams struct {
	outWebSocket *web_socket.WebSocket_Request
	outSendStream *system.ConsumerHandle
	outClient *web_socket.WebSocketClient_Pointer
}


func (s *httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if s.outWebSocket == nil {
		encoder.WriteInvalidHandle()
	} else {
		if err := encoder.WriteHandle((*s.outWebSocket).PassMessagePipe()); err != nil {
			return err
		}
	}
	if s.outSendStream == nil {
		encoder.WriteInvalidHandle()
	} else {
		if err := encoder.WriteHandle((*s.outSendStream)); err != nil {
			return err
		}
	}
	if s.outClient == nil {
		encoder.WriteInvalidInterface()
	} else {
		if err := encoder.WriteInterface((*s.outClient).PassMessagePipe()); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Versions), func(i int) bool {
		return httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Versions) {
		if httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadMessagePipeHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.outWebSocket = &web_socket.WebSocket_Request{handleOwner}
		} else {
			s.outWebSocket = nil
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadConsumerHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			s.outSendStream = &handle0
		} else {
			s.outSendStream = nil
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadInterface()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.outClient = &web_socket.WebSocketClient_Pointer{handleOwner}
		} else {
			s.outClient = nil
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HttpConnectionDelegate_Proxy) OnReceivedWebSocketRequest(inRequest http_message.HttpRequest) (outWebSocket *web_socket.WebSocket_Request, outSendStream *system.ConsumerHandle, outClient *web_socket.WebSocketClient_Pointer, err error) {
	payload := &httpConnectionDelegate_OnReceivedWebSocketRequest_Params{
		inRequest,
	}
	header := bindings.MessageHeader{
		Type: httpConnectionDelegate_OnReceivedWebSocketRequest_Name,
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
	if got, want := readResult.Message.Header.Type, httpConnectionDelegate_OnReceivedWebSocketRequest_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outWebSocket = response.outWebSocket
	outSendStream = response.outSendStream
	outClient = response.outClient
	return
}

type httpConnectionDelegate_Stub struct {
	connector *bindings.Connector
	impl HttpConnectionDelegate
}

func NewHttpConnectionDelegateStub(r HttpConnectionDelegate_Request, impl HttpConnectionDelegate, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &httpConnectionDelegate_Stub{connector, impl})
}


func (f *HttpConnectionDelegate_Request) ServiceDescription() service_describer.ServiceDescription {
	return &HttpConnectionDelegate_ServiceDescription{}
}


type HttpConnectionDelegate_ServiceDescription struct{}

func (sd *HttpConnectionDelegate_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *HttpConnectionDelegate_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *HttpConnectionDelegate_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*HttpConnectionDelegate_ServiceDescription)(nil)


func (s *httpConnectionDelegate_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case httpConnectionDelegate_OnReceivedRequest_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request httpConnectionDelegate_OnReceivedRequest_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response httpConnectionDelegate_OnReceivedRequest_ResponseParams
		response.outResponse, err = s.impl.OnReceivedRequest(request.inRequest)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: httpConnectionDelegate_OnReceivedRequest_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case httpConnectionDelegate_OnReceivedWebSocketRequest_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request httpConnectionDelegate_OnReceivedWebSocketRequest_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response httpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams
		response.outWebSocket, 		response.outSendStream, 		response.outClient, err = s.impl.OnReceivedWebSocketRequest(request.inRequest)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: httpConnectionDelegate_OnReceivedWebSocketRequest_Name,
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

