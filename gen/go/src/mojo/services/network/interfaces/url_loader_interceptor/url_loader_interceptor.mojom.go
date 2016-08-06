// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/network/interfaces/url_loader_interceptor.mojom
//

package url_loader_interceptor

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	url_response "mojo/public/interfaces/network/url_response"
	url_request "mojo/public/interfaces/network/url_request"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type UrlLoaderInterceptorFactory interface {
	Create(inInterceptor UrlLoaderInterceptor_Request) (err error)
}




type UrlLoaderInterceptorFactory_Request bindings.InterfaceRequest



type UrlLoaderInterceptorFactory_Pointer bindings.InterfacePointer


type UrlLoaderInterceptorFactory_ServiceFactory struct{
	Delegate UrlLoaderInterceptorFactory_Factory
}

type UrlLoaderInterceptorFactory_Factory interface {
	Create(request UrlLoaderInterceptorFactory_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *UrlLoaderInterceptorFactory_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &UrlLoaderInterceptorFactory_ServiceDescription{}
}

func (f *UrlLoaderInterceptorFactory_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := UrlLoaderInterceptorFactory_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForUrlLoaderInterceptorFactory creates a message pipe for use with the
// UrlLoaderInterceptorFactory interface with a UrlLoaderInterceptorFactory_Request on one end and a UrlLoaderInterceptorFactory_Pointer on the other.
func CreateMessagePipeForUrlLoaderInterceptorFactory() (UrlLoaderInterceptorFactory_Request, UrlLoaderInterceptorFactory_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return UrlLoaderInterceptorFactory_Request(r), UrlLoaderInterceptorFactory_Pointer(p)
}

const uRLLoaderInterceptorFactory_Create_Name uint32 = 0

type UrlLoaderInterceptorFactory_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewUrlLoaderInterceptorFactoryProxy(p UrlLoaderInterceptorFactory_Pointer, waiter bindings.AsyncWaiter) *UrlLoaderInterceptorFactory_Proxy {
	return &UrlLoaderInterceptorFactory_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *UrlLoaderInterceptorFactory_Proxy) Close_Proxy() {
	p.router.Close()
}

type uRLLoaderInterceptorFactory_Create_Params struct {
	inInterceptor UrlLoaderInterceptor_Request
}


func (s *uRLLoaderInterceptorFactory_Create_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteHandle(s.inInterceptor.PassMessagePipe()); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLLoaderInterceptorFactory_Create_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLLoaderInterceptorFactory_Create_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptorFactory_Create_Params_Versions), func(i int) bool {
		return uRLLoaderInterceptorFactory_Create_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptorFactory_Create_Params_Versions) {
		if uRLLoaderInterceptorFactory_Create_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptorFactory_Create_Params_Versions[index].Size
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
			s.inInterceptor = UrlLoaderInterceptor_Request{handleOwner}
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlLoaderInterceptorFactory_Proxy) Create(inInterceptor UrlLoaderInterceptor_Request) (err error) {
	payload := &uRLLoaderInterceptorFactory_Create_Params{
		inInterceptor,
	}
	header := bindings.MessageHeader{
		Type: uRLLoaderInterceptorFactory_Create_Name,
		Flags: bindings.MessageNoFlag,
	}
	var message *bindings.Message
	if message, err = bindings.EncodeMessage(header, payload); err != nil {
		err = fmt.Errorf("can't encode request: %v", err.Error())
		p.Close_Proxy()
		return
	}
	if err = p.router.Accept(message); err != nil {
		p.Close_Proxy()
		return
	}
	return
}

type uRLLoaderInterceptorFactory_Stub struct {
	connector *bindings.Connector
	impl UrlLoaderInterceptorFactory
}

func NewUrlLoaderInterceptorFactoryStub(r UrlLoaderInterceptorFactory_Request, impl UrlLoaderInterceptorFactory, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &uRLLoaderInterceptorFactory_Stub{connector, impl})
}


func (f *UrlLoaderInterceptorFactory_Request) ServiceDescription() service_describer.ServiceDescription {
	return &UrlLoaderInterceptorFactory_ServiceDescription{}
}


type UrlLoaderInterceptorFactory_ServiceDescription struct{}

func (sd *UrlLoaderInterceptorFactory_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *UrlLoaderInterceptorFactory_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *UrlLoaderInterceptorFactory_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*UrlLoaderInterceptorFactory_ServiceDescription)(nil)


func (s *uRLLoaderInterceptorFactory_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case uRLLoaderInterceptorFactory_Create_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLLoaderInterceptorFactory_Create_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.Create(request.inInterceptor)
		if err != nil {
			return
		}
	default:
		return &bindings.ValidationError{
			bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("unknown method %v", message.Header.Type),
		}
	}
	return
}

type UrlLoaderInterceptor interface {
	InterceptRequest(inRequest url_request.UrlRequest) (outResponse UrlLoaderInterceptorResponse, err error)
	InterceptFollowRedirect() (outResponse *UrlLoaderInterceptorResponse, err error)
	InterceptResponse(inResponse url_response.UrlResponse) (outResponse *UrlLoaderInterceptorResponse, err error)
}




type UrlLoaderInterceptor_Request bindings.InterfaceRequest



type UrlLoaderInterceptor_Pointer bindings.InterfacePointer


type UrlLoaderInterceptor_ServiceFactory struct{
	Delegate UrlLoaderInterceptor_Factory
}

type UrlLoaderInterceptor_Factory interface {
	Create(request UrlLoaderInterceptor_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *UrlLoaderInterceptor_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &UrlLoaderInterceptor_ServiceDescription{}
}

func (f *UrlLoaderInterceptor_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := UrlLoaderInterceptor_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForUrlLoaderInterceptor creates a message pipe for use with the
// UrlLoaderInterceptor interface with a UrlLoaderInterceptor_Request on one end and a UrlLoaderInterceptor_Pointer on the other.
func CreateMessagePipeForUrlLoaderInterceptor() (UrlLoaderInterceptor_Request, UrlLoaderInterceptor_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return UrlLoaderInterceptor_Request(r), UrlLoaderInterceptor_Pointer(p)
}

const uRLLoaderInterceptor_InterceptRequest_Name uint32 = 0
const uRLLoaderInterceptor_InterceptFollowRedirect_Name uint32 = 1
const uRLLoaderInterceptor_InterceptResponse_Name uint32 = 2

type UrlLoaderInterceptor_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewUrlLoaderInterceptorProxy(p UrlLoaderInterceptor_Pointer, waiter bindings.AsyncWaiter) *UrlLoaderInterceptor_Proxy {
	return &UrlLoaderInterceptor_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *UrlLoaderInterceptor_Proxy) Close_Proxy() {
	p.router.Close()
}

type uRLLoaderInterceptor_InterceptRequest_Params struct {
	inRequest url_request.UrlRequest
}


func (s *uRLLoaderInterceptor_InterceptRequest_Params) Encode(encoder *bindings.Encoder) error {
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

var uRLLoaderInterceptor_InterceptRequest_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLLoaderInterceptor_InterceptRequest_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptor_InterceptRequest_Params_Versions), func(i int) bool {
		return uRLLoaderInterceptor_InterceptRequest_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptor_InterceptRequest_Params_Versions) {
		if uRLLoaderInterceptor_InterceptRequest_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptor_InterceptRequest_Params_Versions[index].Size
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

type uRLLoaderInterceptor_InterceptRequest_ResponseParams struct {
	outResponse UrlLoaderInterceptorResponse
}


func (s *uRLLoaderInterceptor_InterceptRequest_ResponseParams) Encode(encoder *bindings.Encoder) error {
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

var uRLLoaderInterceptor_InterceptRequest_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLLoaderInterceptor_InterceptRequest_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptor_InterceptRequest_ResponseParams_Versions), func(i int) bool {
		return uRLLoaderInterceptor_InterceptRequest_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptor_InterceptRequest_ResponseParams_Versions) {
		if uRLLoaderInterceptor_InterceptRequest_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptor_InterceptRequest_ResponseParams_Versions[index].Size
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

func (p *UrlLoaderInterceptor_Proxy) InterceptRequest(inRequest url_request.UrlRequest) (outResponse UrlLoaderInterceptorResponse, err error) {
	payload := &uRLLoaderInterceptor_InterceptRequest_Params{
		inRequest,
	}
	header := bindings.MessageHeader{
		Type: uRLLoaderInterceptor_InterceptRequest_Name,
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
	if got, want := readResult.Message.Header.Type, uRLLoaderInterceptor_InterceptRequest_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response uRLLoaderInterceptor_InterceptRequest_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResponse = response.outResponse
	return
}

type uRLLoaderInterceptor_InterceptFollowRedirect_Params struct {
}


func (s *uRLLoaderInterceptor_InterceptFollowRedirect_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLLoaderInterceptor_InterceptFollowRedirect_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *uRLLoaderInterceptor_InterceptFollowRedirect_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptor_InterceptFollowRedirect_Params_Versions), func(i int) bool {
		return uRLLoaderInterceptor_InterceptFollowRedirect_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptor_InterceptFollowRedirect_Params_Versions) {
		if uRLLoaderInterceptor_InterceptFollowRedirect_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptor_InterceptFollowRedirect_Params_Versions[index].Size
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

type uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams struct {
	outResponse *UrlLoaderInterceptorResponse
}


func (s *uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if s.outResponse == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		if err := (*s.outResponse).Encode(encoder); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Versions), func(i int) bool {
		return uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Versions) {
		if uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams_Versions[index].Size
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
			s.outResponse = nil
		} else {
			s.outResponse = new(UrlLoaderInterceptorResponse)
			if err := (*s.outResponse).Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlLoaderInterceptor_Proxy) InterceptFollowRedirect() (outResponse *UrlLoaderInterceptorResponse, err error) {
	payload := &uRLLoaderInterceptor_InterceptFollowRedirect_Params{
	}
	header := bindings.MessageHeader{
		Type: uRLLoaderInterceptor_InterceptFollowRedirect_Name,
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
	if got, want := readResult.Message.Header.Type, uRLLoaderInterceptor_InterceptFollowRedirect_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResponse = response.outResponse
	return
}

type uRLLoaderInterceptor_InterceptResponse_Params struct {
	inResponse url_response.UrlResponse
}


func (s *uRLLoaderInterceptor_InterceptResponse_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inResponse.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLLoaderInterceptor_InterceptResponse_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLLoaderInterceptor_InterceptResponse_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptor_InterceptResponse_Params_Versions), func(i int) bool {
		return uRLLoaderInterceptor_InterceptResponse_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptor_InterceptResponse_Params_Versions) {
		if uRLLoaderInterceptor_InterceptResponse_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptor_InterceptResponse_Params_Versions[index].Size
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
			if err := s.inResponse.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type uRLLoaderInterceptor_InterceptResponse_ResponseParams struct {
	outResponse *UrlLoaderInterceptorResponse
}


func (s *uRLLoaderInterceptor_InterceptResponse_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if s.outResponse == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		if err := (*s.outResponse).Encode(encoder); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLLoaderInterceptor_InterceptResponse_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *uRLLoaderInterceptor_InterceptResponse_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptor_InterceptResponse_ResponseParams_Versions), func(i int) bool {
		return uRLLoaderInterceptor_InterceptResponse_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptor_InterceptResponse_ResponseParams_Versions) {
		if uRLLoaderInterceptor_InterceptResponse_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptor_InterceptResponse_ResponseParams_Versions[index].Size
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
			s.outResponse = nil
		} else {
			s.outResponse = new(UrlLoaderInterceptorResponse)
			if err := (*s.outResponse).Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *UrlLoaderInterceptor_Proxy) InterceptResponse(inResponse url_response.UrlResponse) (outResponse *UrlLoaderInterceptorResponse, err error) {
	payload := &uRLLoaderInterceptor_InterceptResponse_Params{
		inResponse,
	}
	header := bindings.MessageHeader{
		Type: uRLLoaderInterceptor_InterceptResponse_Name,
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
	if got, want := readResult.Message.Header.Type, uRLLoaderInterceptor_InterceptResponse_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response uRLLoaderInterceptor_InterceptResponse_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResponse = response.outResponse
	return
}

type uRLLoaderInterceptor_Stub struct {
	connector *bindings.Connector
	impl UrlLoaderInterceptor
}

func NewUrlLoaderInterceptorStub(r UrlLoaderInterceptor_Request, impl UrlLoaderInterceptor, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &uRLLoaderInterceptor_Stub{connector, impl})
}


func (f *UrlLoaderInterceptor_Request) ServiceDescription() service_describer.ServiceDescription {
	return &UrlLoaderInterceptor_ServiceDescription{}
}


type UrlLoaderInterceptor_ServiceDescription struct{}

func (sd *UrlLoaderInterceptor_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *UrlLoaderInterceptor_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *UrlLoaderInterceptor_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*UrlLoaderInterceptor_ServiceDescription)(nil)


func (s *uRLLoaderInterceptor_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case uRLLoaderInterceptor_InterceptRequest_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLLoaderInterceptor_InterceptRequest_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response uRLLoaderInterceptor_InterceptRequest_ResponseParams
		response.outResponse, err = s.impl.InterceptRequest(request.inRequest)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: uRLLoaderInterceptor_InterceptRequest_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case uRLLoaderInterceptor_InterceptFollowRedirect_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLLoaderInterceptor_InterceptFollowRedirect_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response uRLLoaderInterceptor_InterceptFollowRedirect_ResponseParams
		response.outResponse, err = s.impl.InterceptFollowRedirect()
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: uRLLoaderInterceptor_InterceptFollowRedirect_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case uRLLoaderInterceptor_InterceptResponse_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request uRLLoaderInterceptor_InterceptResponse_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response uRLLoaderInterceptor_InterceptResponse_ResponseParams
		response.outResponse, err = s.impl.InterceptResponse(request.inResponse)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: uRLLoaderInterceptor_InterceptResponse_Name,
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

type UrlLoaderInterceptorResponse struct {
	Request *url_request.UrlRequest
	Response *url_response.UrlResponse
}


func (s *UrlLoaderInterceptorResponse) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if s.Request == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		if err := (*s.Request).Encode(encoder); err != nil {
			return err
		}
	}
	if s.Response == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		if err := (*s.Response).Encode(encoder); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var uRLLoaderInterceptorResponse_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *UrlLoaderInterceptorResponse) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(uRLLoaderInterceptorResponse_Versions), func(i int) bool {
		return uRLLoaderInterceptorResponse_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(uRLLoaderInterceptorResponse_Versions) {
		if uRLLoaderInterceptorResponse_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := uRLLoaderInterceptorResponse_Versions[index].Size
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
			s.Request = nil
		} else {
			s.Request = new(url_request.UrlRequest)
			if err := (*s.Request).Decode(decoder); err != nil {
				return err
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			s.Response = nil
		} else {
			s.Response = new(url_response.UrlResponse)
			if err := (*s.Response).Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

