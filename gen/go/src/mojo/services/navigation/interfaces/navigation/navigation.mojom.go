// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/navigation/interfaces/navigation.mojom
//

package navigation

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	url_request "mojo/public/interfaces/network/url_request"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type Target int32

const (
	Target_Default Target = 0
	Target_SourceNode = Target_Default + 1;
	Target_NewNode = Target_SourceNode + 1;
)


type NavigatorHost interface {
	RequestNavigate(inTarget Target, inRequest url_request.UrlRequest) (err error)
	RequestNavigateHistory(inDelta int32) (err error)
	DidNavigateLocally(inUrl string) (err error)
}



var navigatorHost_Name = "mojo::NavigatorHost"

type NavigatorHost_Request bindings.InterfaceRequest

func (r *NavigatorHost_Request) Name() string {
	return navigatorHost_Name
}


type NavigatorHost_Pointer bindings.InterfacePointer

func (p *NavigatorHost_Pointer) Name() string {
	return navigatorHost_Name
}

type NavigatorHost_ServiceFactory struct{
	Delegate NavigatorHost_Factory
}

type NavigatorHost_Factory interface {
	Create(request NavigatorHost_Request)
}

func (f *NavigatorHost_ServiceFactory) Name() string {
	return navigatorHost_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *NavigatorHost_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &NavigatorHost_ServiceDescription{}
}

func (f *NavigatorHost_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := NavigatorHost_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForNavigatorHost creates a message pipe for use with the
// NavigatorHost interface with a NavigatorHost_Request on one end and a NavigatorHost_Pointer on the other.
func CreateMessagePipeForNavigatorHost() (NavigatorHost_Request, NavigatorHost_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return NavigatorHost_Request(r), NavigatorHost_Pointer(p)
}

const navigatorHost_RequestNavigate_Name uint32 = 0
const navigatorHost_RequestNavigateHistory_Name uint32 = 1
const navigatorHost_DidNavigateLocally_Name uint32 = 2

type NavigatorHost_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewNavigatorHostProxy(p NavigatorHost_Pointer, waiter bindings.AsyncWaiter) *NavigatorHost_Proxy {
	return &NavigatorHost_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *NavigatorHost_Proxy) Close_Proxy() {
	p.router.Close()
}

type navigatorHost_RequestNavigate_Params struct {
	inTarget Target
	inRequest url_request.UrlRequest
}


func (s *navigatorHost_RequestNavigate_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WriteInt32(int32(s.inTarget)); err != nil {
		return err
	}
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

var navigatorHost_RequestNavigate_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *navigatorHost_RequestNavigate_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(navigatorHost_RequestNavigate_Params_Versions), func(i int) bool {
		return navigatorHost_RequestNavigate_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(navigatorHost_RequestNavigate_Params_Versions) {
		if navigatorHost_RequestNavigate_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := navigatorHost_RequestNavigate_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.inTarget = Target(value0)
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

func (p *NavigatorHost_Proxy) RequestNavigate(inTarget Target, inRequest url_request.UrlRequest) (err error) {
	payload := &navigatorHost_RequestNavigate_Params{
		inTarget,
		inRequest,
	}
	header := bindings.MessageHeader{
		Type: navigatorHost_RequestNavigate_Name,
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

type navigatorHost_RequestNavigateHistory_Params struct {
	inDelta int32
}


func (s *navigatorHost_RequestNavigateHistory_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteInt32(s.inDelta); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var navigatorHost_RequestNavigateHistory_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *navigatorHost_RequestNavigateHistory_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(navigatorHost_RequestNavigateHistory_Params_Versions), func(i int) bool {
		return navigatorHost_RequestNavigateHistory_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(navigatorHost_RequestNavigateHistory_Params_Versions) {
		if navigatorHost_RequestNavigateHistory_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := navigatorHost_RequestNavigateHistory_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.inDelta = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *NavigatorHost_Proxy) RequestNavigateHistory(inDelta int32) (err error) {
	payload := &navigatorHost_RequestNavigateHistory_Params{
		inDelta,
	}
	header := bindings.MessageHeader{
		Type: navigatorHost_RequestNavigateHistory_Name,
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

type navigatorHost_DidNavigateLocally_Params struct {
	inUrl string
}


func (s *navigatorHost_DidNavigateLocally_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.inUrl); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var navigatorHost_DidNavigateLocally_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *navigatorHost_DidNavigateLocally_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(navigatorHost_DidNavigateLocally_Params_Versions), func(i int) bool {
		return navigatorHost_DidNavigateLocally_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(navigatorHost_DidNavigateLocally_Params_Versions) {
		if navigatorHost_DidNavigateLocally_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := navigatorHost_DidNavigateLocally_Params_Versions[index].Size
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
			s.inUrl = value0
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *NavigatorHost_Proxy) DidNavigateLocally(inUrl string) (err error) {
	payload := &navigatorHost_DidNavigateLocally_Params{
		inUrl,
	}
	header := bindings.MessageHeader{
		Type: navigatorHost_DidNavigateLocally_Name,
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

type navigatorHost_Stub struct {
	connector *bindings.Connector
	impl NavigatorHost
}

func NewNavigatorHostStub(r NavigatorHost_Request, impl NavigatorHost, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &navigatorHost_Stub{connector, impl})
}


func (f *NavigatorHost_Request) ServiceDescription() service_describer.ServiceDescription {
	return &NavigatorHost_ServiceDescription{}
}


type NavigatorHost_ServiceDescription struct{}

func (sd *NavigatorHost_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *NavigatorHost_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *NavigatorHost_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*NavigatorHost_ServiceDescription)(nil)


func (s *navigatorHost_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case navigatorHost_RequestNavigate_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request navigatorHost_RequestNavigate_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.RequestNavigate(request.inTarget, request.inRequest)
		if err != nil {
			return
		}
	case navigatorHost_RequestNavigateHistory_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request navigatorHost_RequestNavigateHistory_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.RequestNavigateHistory(request.inDelta)
		if err != nil {
			return
		}
	case navigatorHost_DidNavigateLocally_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request navigatorHost_DidNavigateLocally_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.DidNavigateLocally(request.inUrl)
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
