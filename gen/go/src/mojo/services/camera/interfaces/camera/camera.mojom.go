// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/camera/interfaces/camera.mojom
//

package camera

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type CameraRollService interface {
	Update() (err error)
	GetCount() (outNumPhotos uint32, err error)
	GetPhoto(inIndex uint32) (outPhoto *Photo, err error)
}



var cameraRollService_Name = "mojo::CameraRollService"

type CameraRollService_Request bindings.InterfaceRequest

func (r *CameraRollService_Request) Name() string {
	return cameraRollService_Name
}


type CameraRollService_Pointer bindings.InterfacePointer

func (p *CameraRollService_Pointer) Name() string {
	return cameraRollService_Name
}

type CameraRollService_ServiceFactory struct{
	Delegate CameraRollService_Factory
}

type CameraRollService_Factory interface {
	Create(request CameraRollService_Request)
}

func (f *CameraRollService_ServiceFactory) Name() string {
	return cameraRollService_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *CameraRollService_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &CameraRollService_ServiceDescription{}
}

func (f *CameraRollService_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := CameraRollService_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForCameraRollService creates a message pipe for use with the
// CameraRollService interface with a CameraRollService_Request on one end and a CameraRollService_Pointer on the other.
func CreateMessagePipeForCameraRollService() (CameraRollService_Request, CameraRollService_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return CameraRollService_Request(r), CameraRollService_Pointer(p)
}

const cameraRollService_Update_Name uint32 = 0
const cameraRollService_GetCount_Name uint32 = 1
const cameraRollService_GetPhoto_Name uint32 = 2

type CameraRollService_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewCameraRollServiceProxy(p CameraRollService_Pointer, waiter bindings.AsyncWaiter) *CameraRollService_Proxy {
	return &CameraRollService_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *CameraRollService_Proxy) Close_Proxy() {
	p.router.Close()
}

type cameraRollService_Update_Params struct {
}


func (s *cameraRollService_Update_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var cameraRollService_Update_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *cameraRollService_Update_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(cameraRollService_Update_Params_Versions), func(i int) bool {
		return cameraRollService_Update_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(cameraRollService_Update_Params_Versions) {
		if cameraRollService_Update_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := cameraRollService_Update_Params_Versions[index].Size
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

func (p *CameraRollService_Proxy) Update() (err error) {
	payload := &cameraRollService_Update_Params{
	}
	header := bindings.MessageHeader{
		Type: cameraRollService_Update_Name,
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

type cameraRollService_GetCount_Params struct {
}


func (s *cameraRollService_GetCount_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var cameraRollService_GetCount_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *cameraRollService_GetCount_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(cameraRollService_GetCount_Params_Versions), func(i int) bool {
		return cameraRollService_GetCount_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(cameraRollService_GetCount_Params_Versions) {
		if cameraRollService_GetCount_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := cameraRollService_GetCount_Params_Versions[index].Size
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

type cameraRollService_GetCount_ResponseParams struct {
	outNumPhotos uint32
}


func (s *cameraRollService_GetCount_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteUint32(s.outNumPhotos); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var cameraRollService_GetCount_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *cameraRollService_GetCount_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(cameraRollService_GetCount_ResponseParams_Versions), func(i int) bool {
		return cameraRollService_GetCount_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(cameraRollService_GetCount_ResponseParams_Versions) {
		if cameraRollService_GetCount_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := cameraRollService_GetCount_ResponseParams_Versions[index].Size
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
		s.outNumPhotos = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *CameraRollService_Proxy) GetCount() (outNumPhotos uint32, err error) {
	payload := &cameraRollService_GetCount_Params{
	}
	header := bindings.MessageHeader{
		Type: cameraRollService_GetCount_Name,
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
	if got, want := readResult.Message.Header.Type, cameraRollService_GetCount_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response cameraRollService_GetCount_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outNumPhotos = response.outNumPhotos
	return
}

type cameraRollService_GetPhoto_Params struct {
	inIndex uint32
}


func (s *cameraRollService_GetPhoto_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteUint32(s.inIndex); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var cameraRollService_GetPhoto_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *cameraRollService_GetPhoto_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(cameraRollService_GetPhoto_Params_Versions), func(i int) bool {
		return cameraRollService_GetPhoto_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(cameraRollService_GetPhoto_Params_Versions) {
		if cameraRollService_GetPhoto_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := cameraRollService_GetPhoto_Params_Versions[index].Size
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
		s.inIndex = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type cameraRollService_GetPhoto_ResponseParams struct {
	outPhoto *Photo
}


func (s *cameraRollService_GetPhoto_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if s.outPhoto == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		if err := (*s.outPhoto).Encode(encoder); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var cameraRollService_GetPhoto_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *cameraRollService_GetPhoto_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(cameraRollService_GetPhoto_ResponseParams_Versions), func(i int) bool {
		return cameraRollService_GetPhoto_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(cameraRollService_GetPhoto_ResponseParams_Versions) {
		if cameraRollService_GetPhoto_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := cameraRollService_GetPhoto_ResponseParams_Versions[index].Size
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
			s.outPhoto = nil
		} else {
			s.outPhoto = new(Photo)
			if err := (*s.outPhoto).Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *CameraRollService_Proxy) GetPhoto(inIndex uint32) (outPhoto *Photo, err error) {
	payload := &cameraRollService_GetPhoto_Params{
		inIndex,
	}
	header := bindings.MessageHeader{
		Type: cameraRollService_GetPhoto_Name,
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
	if got, want := readResult.Message.Header.Type, cameraRollService_GetPhoto_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response cameraRollService_GetPhoto_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outPhoto = response.outPhoto
	return
}

type cameraRollService_Stub struct {
	connector *bindings.Connector
	impl CameraRollService
}

func NewCameraRollServiceStub(r CameraRollService_Request, impl CameraRollService, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &cameraRollService_Stub{connector, impl})
}


func (f *CameraRollService_Request) ServiceDescription() service_describer.ServiceDescription {
	return &CameraRollService_ServiceDescription{}
}


type CameraRollService_ServiceDescription struct{}

func (sd *CameraRollService_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *CameraRollService_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *CameraRollService_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*CameraRollService_ServiceDescription)(nil)


func (s *cameraRollService_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case cameraRollService_Update_Name:
		if message.Header.Flags != bindings.MessageNoFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request cameraRollService_Update_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		err = s.impl.Update()
		if err != nil {
			return
		}
	case cameraRollService_GetCount_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request cameraRollService_GetCount_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response cameraRollService_GetCount_ResponseParams
		response.outNumPhotos, err = s.impl.GetCount()
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: cameraRollService_GetCount_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case cameraRollService_GetPhoto_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request cameraRollService_GetPhoto_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response cameraRollService_GetPhoto_ResponseParams
		response.outPhoto, err = s.impl.GetPhoto(request.inIndex)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: cameraRollService_GetPhoto_Name,
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

type CameraService interface {
	GetLatestFrame() (outContent *system.ConsumerHandle, err error)
}



var cameraService_Name = "mojo::CameraService"

type CameraService_Request bindings.InterfaceRequest

func (r *CameraService_Request) Name() string {
	return cameraService_Name
}


type CameraService_Pointer bindings.InterfacePointer

func (p *CameraService_Pointer) Name() string {
	return cameraService_Name
}

type CameraService_ServiceFactory struct{
	Delegate CameraService_Factory
}

type CameraService_Factory interface {
	Create(request CameraService_Request)
}

func (f *CameraService_ServiceFactory) Name() string {
	return cameraService_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *CameraService_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &CameraService_ServiceDescription{}
}

func (f *CameraService_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := CameraService_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForCameraService creates a message pipe for use with the
// CameraService interface with a CameraService_Request on one end and a CameraService_Pointer on the other.
func CreateMessagePipeForCameraService() (CameraService_Request, CameraService_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return CameraService_Request(r), CameraService_Pointer(p)
}

const cameraService_GetLatestFrame_Name uint32 = 0

type CameraService_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewCameraServiceProxy(p CameraService_Pointer, waiter bindings.AsyncWaiter) *CameraService_Proxy {
	return &CameraService_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *CameraService_Proxy) Close_Proxy() {
	p.router.Close()
}

type cameraService_GetLatestFrame_Params struct {
}


func (s *cameraService_GetLatestFrame_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var cameraService_GetLatestFrame_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *cameraService_GetLatestFrame_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(cameraService_GetLatestFrame_Params_Versions), func(i int) bool {
		return cameraService_GetLatestFrame_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(cameraService_GetLatestFrame_Params_Versions) {
		if cameraService_GetLatestFrame_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := cameraService_GetLatestFrame_Params_Versions[index].Size
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

type cameraService_GetLatestFrame_ResponseParams struct {
	outContent *system.ConsumerHandle
}


func (s *cameraService_GetLatestFrame_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if s.outContent == nil {
		encoder.WriteInvalidHandle()
	} else {
		if err := encoder.WriteHandle((*s.outContent)); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var cameraService_GetLatestFrame_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *cameraService_GetLatestFrame_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(cameraService_GetLatestFrame_ResponseParams_Versions), func(i int) bool {
		return cameraService_GetLatestFrame_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(cameraService_GetLatestFrame_ResponseParams_Versions) {
		if cameraService_GetLatestFrame_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := cameraService_GetLatestFrame_ResponseParams_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadConsumerHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			s.outContent = &handle0
		} else {
			s.outContent = nil
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *CameraService_Proxy) GetLatestFrame() (outContent *system.ConsumerHandle, err error) {
	payload := &cameraService_GetLatestFrame_Params{
	}
	header := bindings.MessageHeader{
		Type: cameraService_GetLatestFrame_Name,
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
	if got, want := readResult.Message.Header.Type, cameraService_GetLatestFrame_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response cameraService_GetLatestFrame_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outContent = response.outContent
	return
}

type cameraService_Stub struct {
	connector *bindings.Connector
	impl CameraService
}

func NewCameraServiceStub(r CameraService_Request, impl CameraService, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &cameraService_Stub{connector, impl})
}


func (f *CameraService_Request) ServiceDescription() service_describer.ServiceDescription {
	return &CameraService_ServiceDescription{}
}


type CameraService_ServiceDescription struct{}

func (sd *CameraService_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *CameraService_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *CameraService_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*CameraService_ServiceDescription)(nil)


func (s *cameraService_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case cameraService_GetLatestFrame_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request cameraService_GetLatestFrame_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response cameraService_GetLatestFrame_ResponseParams
		response.outContent, err = s.impl.GetLatestFrame()
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: cameraService_GetLatestFrame_Name,
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

type Photo struct {
	UniqueId string
	Content system.ConsumerHandle
}


func (s *Photo) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.UniqueId); err != nil {
		return err
	}
	if err := encoder.WriteHandle(s.Content); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var photo_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *Photo) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(photo_Versions), func(i int) bool {
		return photo_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(photo_Versions) {
		if photo_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := photo_Versions[index].Size
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
			s.UniqueId = value0
		}
	}
	if header.ElementsOrVersion >= 0 {
		handle0, err := decoder.ReadConsumerHandle()
		if err != nil {
			return err
		}
		if handle0.IsValid() {
			s.Content = handle0
		} else {
			return &bindings.ValidationError{bindings.UnexpectedInvalidHandle, "unexpected invalid handle"}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}
