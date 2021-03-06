// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/surfaces/interfaces/display.mojom
//

package display

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	surfaces "mojo/services/surfaces/interfaces/surfaces"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
	context_provider "mojo/services/gpu/interfaces/context_provider"
)


type Display interface {
	SubmitFrame(inFrame surfaces.Frame) (err error)
}




type Display_Request bindings.InterfaceRequest



type Display_Pointer bindings.InterfacePointer


type Display_ServiceFactory struct{
	Delegate Display_Factory
}

type Display_Factory interface {
	Create(request Display_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *Display_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &Display_ServiceDescription{}
}

func (f *Display_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := Display_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForDisplay creates a message pipe for use with the
// Display interface with a Display_Request on one end and a Display_Pointer on the other.
func CreateMessagePipeForDisplay() (Display_Request, Display_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return Display_Request(r), Display_Pointer(p)
}

const display_SubmitFrame_Name uint32 = 0

type Display_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewDisplayProxy(p Display_Pointer, waiter bindings.AsyncWaiter) *Display_Proxy {
	return &Display_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *Display_Proxy) Close_Proxy() {
	p.router.Close()
}

type display_SubmitFrame_Params struct {
	inFrame surfaces.Frame
}


func (s *display_SubmitFrame_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inFrame.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var display_SubmitFrame_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *display_SubmitFrame_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(display_SubmitFrame_Params_Versions), func(i int) bool {
		return display_SubmitFrame_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(display_SubmitFrame_Params_Versions) {
		if display_SubmitFrame_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := display_SubmitFrame_Params_Versions[index].Size
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
			if err := s.inFrame.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type display_SubmitFrame_ResponseParams struct {
}


func (s *display_SubmitFrame_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var display_SubmitFrame_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *display_SubmitFrame_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(display_SubmitFrame_ResponseParams_Versions), func(i int) bool {
		return display_SubmitFrame_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(display_SubmitFrame_ResponseParams_Versions) {
		if display_SubmitFrame_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := display_SubmitFrame_ResponseParams_Versions[index].Size
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

func (p *Display_Proxy) SubmitFrame(inFrame surfaces.Frame) (err error) {
	payload := &display_SubmitFrame_Params{
		inFrame,
	}
	header := bindings.MessageHeader{
		Type: display_SubmitFrame_Name,
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
	if got, want := readResult.Message.Header.Type, display_SubmitFrame_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response display_SubmitFrame_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	return
}

type display_Stub struct {
	connector *bindings.Connector
	impl Display
}

func NewDisplayStub(r Display_Request, impl Display, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &display_Stub{connector, impl})
}


func (f *Display_Request) ServiceDescription() service_describer.ServiceDescription {
	return &Display_ServiceDescription{}
}


type Display_ServiceDescription struct{}

func (sd *Display_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *Display_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *Display_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*Display_ServiceDescription)(nil)


func (s *display_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case display_SubmitFrame_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request display_SubmitFrame_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response display_SubmitFrame_ResponseParams
		err = s.impl.SubmitFrame(request.inFrame)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: display_SubmitFrame_Name,
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

type DisplayFactory interface {
	Create(inContextProvider context_provider.ContextProvider_Pointer, inReturner *surfaces.ResourceReturner_Pointer, inDisplayRequest Display_Request) (err error)
}



var displayFactory_Name = "mojo::DisplayFactory"

type DisplayFactory_Request bindings.InterfaceRequest

func (r *DisplayFactory_Request) Name() string {
	return displayFactory_Name
}


type DisplayFactory_Pointer bindings.InterfacePointer

func (p *DisplayFactory_Pointer) Name() string {
	return displayFactory_Name
}

type DisplayFactory_ServiceFactory struct{
	Delegate DisplayFactory_Factory
}

type DisplayFactory_Factory interface {
	Create(request DisplayFactory_Request)
}

func (f *DisplayFactory_ServiceFactory) Name() string {
	return displayFactory_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *DisplayFactory_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &DisplayFactory_ServiceDescription{}
}

func (f *DisplayFactory_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := DisplayFactory_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForDisplayFactory creates a message pipe for use with the
// DisplayFactory interface with a DisplayFactory_Request on one end and a DisplayFactory_Pointer on the other.
func CreateMessagePipeForDisplayFactory() (DisplayFactory_Request, DisplayFactory_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return DisplayFactory_Request(r), DisplayFactory_Pointer(p)
}

const displayFactory_Create_Name uint32 = 0

type DisplayFactory_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewDisplayFactoryProxy(p DisplayFactory_Pointer, waiter bindings.AsyncWaiter) *DisplayFactory_Proxy {
	return &DisplayFactory_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *DisplayFactory_Proxy) Close_Proxy() {
	p.router.Close()
}

type displayFactory_Create_Params struct {
	inContextProvider context_provider.ContextProvider_Pointer
	inReturner *surfaces.ResourceReturner_Pointer
	inDisplayRequest Display_Request
}


func (s *displayFactory_Create_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(24, 0)
	if err := encoder.WriteInterface(s.inContextProvider.PassMessagePipe()); err != nil {
		return err
	}
	if s.inReturner == nil {
		encoder.WriteInvalidInterface()
	} else {
		if err := encoder.WriteInterface((*s.inReturner).PassMessagePipe()); err != nil {
			return err
		}
	}
	if err := encoder.WriteHandle(s.inDisplayRequest.PassMessagePipe()); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var displayFactory_Create_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{32, 0},
}

func (s *displayFactory_Create_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(displayFactory_Create_Params_Versions), func(i int) bool {
		return displayFactory_Create_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(displayFactory_Create_Params_Versions) {
		if displayFactory_Create_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := displayFactory_Create_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadInterface()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.inContextProvider = context_provider.ContextProvider_Pointer{handleOwner}
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadInterface()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.inReturner = &surfaces.ResourceReturner_Pointer{handleOwner}
		} else {
			s.inReturner = nil
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadMessagePipeHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.inDisplayRequest = Display_Request{handleOwner}
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *DisplayFactory_Proxy) Create(inContextProvider context_provider.ContextProvider_Pointer, inReturner *surfaces.ResourceReturner_Pointer, inDisplayRequest Display_Request) (err error) {
	payload := &displayFactory_Create_Params{
		inContextProvider,
		inReturner,
		inDisplayRequest,
	}
	header := bindings.MessageHeader{
		Type: displayFactory_Create_Name,
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

type displayFactory_Stub struct {
	connector *bindings.Connector
	impl DisplayFactory
}

func NewDisplayFactoryStub(r DisplayFactory_Request, impl DisplayFactory, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &displayFactory_Stub{connector, impl})
}


func (f *DisplayFactory_Request) ServiceDescription() service_describer.ServiceDescription {
	return &DisplayFactory_ServiceDescription{}
}


type DisplayFactory_ServiceDescription struct{}

func (sd *DisplayFactory_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *DisplayFactory_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *DisplayFactory_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*DisplayFactory_ServiceDescription)(nil)


func (s *displayFactory_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case displayFactory_Create_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request displayFactory_Create_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.Create(request.inContextProvider, request.inReturner, request.inDisplayRequest)
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

