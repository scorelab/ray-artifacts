// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/network/interfaces/tcp_bound_socket.mojom
//

package tcp_bound_socket

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	network_error "mojo/public/interfaces/network/network_error"
	fmt "fmt"
	tcp_server_socket "mojo/services/network/interfaces/tcp_server_socket"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
	net_address "mojo/services/network/interfaces/net_address"
	tcp_connected_socket "mojo/services/network/interfaces/tcp_connected_socket"
)


type TcpBoundSocket interface {
	StartListening(inServer tcp_server_socket.TcpServerSocket_Request) (outResult network_error.NetworkError, err error)
	Connect(inRemoteAddress net_address.NetAddress, inSendStream system.ConsumerHandle, inReceiveStream system.ProducerHandle, inClientSocket tcp_connected_socket.TcpConnectedSocket_Request) (outResult network_error.NetworkError, err error)
}




type TcpBoundSocket_Request bindings.InterfaceRequest



type TcpBoundSocket_Pointer bindings.InterfacePointer


type TcpBoundSocket_ServiceFactory struct{
	Delegate TcpBoundSocket_Factory
}

type TcpBoundSocket_Factory interface {
	Create(request TcpBoundSocket_Request)
}


// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *TcpBoundSocket_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &TcpBoundSocket_ServiceDescription{}
}

func (f *TcpBoundSocket_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := TcpBoundSocket_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForTcpBoundSocket creates a message pipe for use with the
// TcpBoundSocket interface with a TcpBoundSocket_Request on one end and a TcpBoundSocket_Pointer on the other.
func CreateMessagePipeForTcpBoundSocket() (TcpBoundSocket_Request, TcpBoundSocket_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return TcpBoundSocket_Request(r), TcpBoundSocket_Pointer(p)
}

const tCPBoundSocket_StartListening_Name uint32 = 0
const tCPBoundSocket_Connect_Name uint32 = 1

type TcpBoundSocket_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewTcpBoundSocketProxy(p TcpBoundSocket_Pointer, waiter bindings.AsyncWaiter) *TcpBoundSocket_Proxy {
	return &TcpBoundSocket_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *TcpBoundSocket_Proxy) Close_Proxy() {
	p.router.Close()
}

type tCPBoundSocket_StartListening_Params struct {
	inServer tcp_server_socket.TcpServerSocket_Request
}


func (s *tCPBoundSocket_StartListening_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteHandle(s.inServer.PassMessagePipe()); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var tCPBoundSocket_StartListening_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *tCPBoundSocket_StartListening_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(tCPBoundSocket_StartListening_Params_Versions), func(i int) bool {
		return tCPBoundSocket_StartListening_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(tCPBoundSocket_StartListening_Params_Versions) {
		if tCPBoundSocket_StartListening_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := tCPBoundSocket_StartListening_Params_Versions[index].Size
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
			s.inServer = tcp_server_socket.TcpServerSocket_Request{handleOwner}
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type tCPBoundSocket_StartListening_ResponseParams struct {
	outResult network_error.NetworkError
}


func (s *tCPBoundSocket_StartListening_ResponseParams) Encode(encoder *bindings.Encoder) error {
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

var tCPBoundSocket_StartListening_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *tCPBoundSocket_StartListening_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(tCPBoundSocket_StartListening_ResponseParams_Versions), func(i int) bool {
		return tCPBoundSocket_StartListening_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(tCPBoundSocket_StartListening_ResponseParams_Versions) {
		if tCPBoundSocket_StartListening_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := tCPBoundSocket_StartListening_ResponseParams_Versions[index].Size
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

func (p *TcpBoundSocket_Proxy) StartListening(inServer tcp_server_socket.TcpServerSocket_Request) (outResult network_error.NetworkError, err error) {
	payload := &tCPBoundSocket_StartListening_Params{
		inServer,
	}
	header := bindings.MessageHeader{
		Type: tCPBoundSocket_StartListening_Name,
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
	if got, want := readResult.Message.Header.Type, tCPBoundSocket_StartListening_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response tCPBoundSocket_StartListening_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResult = response.outResult
	return
}

type tCPBoundSocket_Connect_Params struct {
	inRemoteAddress net_address.NetAddress
	inSendStream system.ConsumerHandle
	inReceiveStream system.ProducerHandle
	inClientSocket tcp_connected_socket.TcpConnectedSocket_Request
}


func (s *tCPBoundSocket_Connect_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(24, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inRemoteAddress.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.WriteHandle(s.inSendStream); err != nil {
		return err
	}
	if err := encoder.WriteHandle(s.inReceiveStream); err != nil {
		return err
	}
	if err := encoder.WriteHandle(s.inClientSocket.PassMessagePipe()); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var tCPBoundSocket_Connect_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{32, 0},
}

func (s *tCPBoundSocket_Connect_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(tCPBoundSocket_Connect_Params_Versions), func(i int) bool {
		return tCPBoundSocket_Connect_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(tCPBoundSocket_Connect_Params_Versions) {
		if tCPBoundSocket_Connect_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := tCPBoundSocket_Connect_Params_Versions[index].Size
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
			if err := s.inRemoteAddress.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadConsumerHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			s.inSendStream = handle0
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadProducerHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			s.inReceiveStream = handle0
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadMessagePipeHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			handleOwner := bindings.NewMessagePipeHandleOwner(handle0)
			s.inClientSocket = tcp_connected_socket.TcpConnectedSocket_Request{handleOwner}
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type tCPBoundSocket_Connect_ResponseParams struct {
	outResult network_error.NetworkError
}


func (s *tCPBoundSocket_Connect_ResponseParams) Encode(encoder *bindings.Encoder) error {
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

var tCPBoundSocket_Connect_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *tCPBoundSocket_Connect_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(tCPBoundSocket_Connect_ResponseParams_Versions), func(i int) bool {
		return tCPBoundSocket_Connect_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(tCPBoundSocket_Connect_ResponseParams_Versions) {
		if tCPBoundSocket_Connect_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := tCPBoundSocket_Connect_ResponseParams_Versions[index].Size
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

func (p *TcpBoundSocket_Proxy) Connect(inRemoteAddress net_address.NetAddress, inSendStream system.ConsumerHandle, inReceiveStream system.ProducerHandle, inClientSocket tcp_connected_socket.TcpConnectedSocket_Request) (outResult network_error.NetworkError, err error) {
	payload := &tCPBoundSocket_Connect_Params{
		inRemoteAddress,
		inSendStream,
		inReceiveStream,
		inClientSocket,
	}
	header := bindings.MessageHeader{
		Type: tCPBoundSocket_Connect_Name,
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
	if got, want := readResult.Message.Header.Type, tCPBoundSocket_Connect_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response tCPBoundSocket_Connect_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outResult = response.outResult
	return
}

type tCPBoundSocket_Stub struct {
	connector *bindings.Connector
	impl TcpBoundSocket
}

func NewTcpBoundSocketStub(r TcpBoundSocket_Request, impl TcpBoundSocket, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &tCPBoundSocket_Stub{connector, impl})
}


func (f *TcpBoundSocket_Request) ServiceDescription() service_describer.ServiceDescription {
	return &TcpBoundSocket_ServiceDescription{}
}


type TcpBoundSocket_ServiceDescription struct{}

func (sd *TcpBoundSocket_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *TcpBoundSocket_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *TcpBoundSocket_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*TcpBoundSocket_ServiceDescription)(nil)


func (s *tCPBoundSocket_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case tCPBoundSocket_StartListening_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request tCPBoundSocket_StartListening_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response tCPBoundSocket_StartListening_ResponseParams
		response.outResult, err = s.impl.StartListening(request.inServer)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: tCPBoundSocket_StartListening_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case tCPBoundSocket_Connect_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request tCPBoundSocket_Connect_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response tCPBoundSocket_Connect_ResponseParams
		response.outResult, err = s.impl.Connect(request.inRemoteAddress, request.inSendStream, request.inReceiveStream, request.inClientSocket)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: tCPBoundSocket_Connect_Name,
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

