// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/public/interfaces/bindings/tests/versioning_test_client.mojom
//

package versioning_test_client

import (
	sort "sort"
	service_describer "mojo/public/interfaces/bindings/service_describer"
	fmt "fmt"
	mojom_types "mojo/public/interfaces/bindings/mojom_types"
	bindings "mojo/public/go/bindings"
	system "mojo/public/go/system"
)


type Department int32

const (
	Department_Sales Department = 0
	Department_Dev = Department_Sales + 1;
)


type HumanResourceDatabase interface {
	AddEmployee(inEmployee Employee) (outSuccess bool, err error)
	QueryEmployee(inId uint64, inRetrieveFingerPrint bool) (outEmployee *Employee, outFingerPrint *[]uint8, err error)
	AttachFingerPrint(inId uint64, inFingerPrint []uint8) (outSuccess bool, err error)
	ListEmployeeIds() (outIds *[]uint64, err error)
}



var humanResourceDatabase_Name = "mojo::test::versioning::HumanResourceDatabase"

type HumanResourceDatabase_Request bindings.InterfaceRequest

func (r *HumanResourceDatabase_Request) Name() string {
	return humanResourceDatabase_Name
}


type HumanResourceDatabase_Pointer bindings.InterfacePointer

func (p *HumanResourceDatabase_Pointer) Name() string {
	return humanResourceDatabase_Name
}

type HumanResourceDatabase_ServiceFactory struct{
	Delegate HumanResourceDatabase_Factory
}

type HumanResourceDatabase_Factory interface {
	Create(request HumanResourceDatabase_Request)
}

func (f *HumanResourceDatabase_ServiceFactory) Name() string {
	return humanResourceDatabase_Name
}

// TODO(rudominer) This should only be defined for top-level interfaces.
func (f *HumanResourceDatabase_ServiceFactory) ServiceDescription() service_describer.ServiceDescription {
	return &HumanResourceDatabase_ServiceDescription{}
}

func (f *HumanResourceDatabase_ServiceFactory) Create(messagePipe system.MessagePipeHandle) {
	request := HumanResourceDatabase_Request{bindings.NewMessagePipeHandleOwner(messagePipe)}
	f.Delegate.Create(request)
}

// CreateMessagePipeForHumanResourceDatabase creates a message pipe for use with the
// HumanResourceDatabase interface with a HumanResourceDatabase_Request on one end and a HumanResourceDatabase_Pointer on the other.
func CreateMessagePipeForHumanResourceDatabase() (HumanResourceDatabase_Request, HumanResourceDatabase_Pointer) {
        r, p := bindings.CreateMessagePipeForMojoInterface()
        return HumanResourceDatabase_Request(r), HumanResourceDatabase_Pointer(p)
}

const humanResourceDatabase_AddEmployee_Name uint32 = 0
const humanResourceDatabase_QueryEmployee_Name uint32 = 1
const humanResourceDatabase_AttachFingerPrint_Name uint32 = 2
const humanResourceDatabase_ListEmployeeIds_Name uint32 = 3

type HumanResourceDatabase_Proxy struct {
	router *bindings.Router
	ids bindings.Counter
}

func NewHumanResourceDatabaseProxy(p HumanResourceDatabase_Pointer, waiter bindings.AsyncWaiter) *HumanResourceDatabase_Proxy {
	return &HumanResourceDatabase_Proxy{
		bindings.NewRouter(p.PassMessagePipe(), waiter),
		bindings.NewCounter(),
	}
}

func (p *HumanResourceDatabase_Proxy) Close_Proxy() {
	p.router.Close()
}

type humanResourceDatabase_AddEmployee_Params struct {
	inEmployee Employee
}


func (s *humanResourceDatabase_AddEmployee_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := s.inEmployee.Encode(encoder); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_AddEmployee_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *humanResourceDatabase_AddEmployee_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_AddEmployee_Params_Versions), func(i int) bool {
		return humanResourceDatabase_AddEmployee_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_AddEmployee_Params_Versions) {
		if humanResourceDatabase_AddEmployee_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_AddEmployee_Params_Versions[index].Size
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
			if err := s.inEmployee.Decode(decoder); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type humanResourceDatabase_AddEmployee_ResponseParams struct {
	outSuccess bool
}


func (s *humanResourceDatabase_AddEmployee_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteBool(s.outSuccess); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_AddEmployee_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *humanResourceDatabase_AddEmployee_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_AddEmployee_ResponseParams_Versions), func(i int) bool {
		return humanResourceDatabase_AddEmployee_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_AddEmployee_ResponseParams_Versions) {
		if humanResourceDatabase_AddEmployee_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_AddEmployee_ResponseParams_Versions[index].Size
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

func (p *HumanResourceDatabase_Proxy) AddEmployee(inEmployee Employee) (outSuccess bool, err error) {
	payload := &humanResourceDatabase_AddEmployee_Params{
		inEmployee,
	}
	header := bindings.MessageHeader{
		Type: humanResourceDatabase_AddEmployee_Name,
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
	if got, want := readResult.Message.Header.Type, humanResourceDatabase_AddEmployee_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response humanResourceDatabase_AddEmployee_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outSuccess = response.outSuccess
	return
}

type humanResourceDatabase_QueryEmployee_Params struct {
	inId uint64
	inRetrieveFingerPrint bool
}


func (s *humanResourceDatabase_QueryEmployee_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 1)
	if err := encoder.WriteUint64(s.inId); err != nil {
		return err
	}
	if err := encoder.WriteBool(s.inRetrieveFingerPrint); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_QueryEmployee_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
	bindings.DataHeader{24, 1},
}

func (s *humanResourceDatabase_QueryEmployee_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_QueryEmployee_Params_Versions), func(i int) bool {
		return humanResourceDatabase_QueryEmployee_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_QueryEmployee_Params_Versions) {
		if humanResourceDatabase_QueryEmployee_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_QueryEmployee_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint64()
		if err != nil {
			return err
		}
		s.inId = value0
	}
	if header.ElementsOrVersion >= 1 {
		value0, err := decoder.ReadBool()
		if err != nil {
			return err
		}
		s.inRetrieveFingerPrint = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type humanResourceDatabase_QueryEmployee_ResponseParams struct {
	outEmployee *Employee
	outFingerPrint *[]uint8
}


func (s *humanResourceDatabase_QueryEmployee_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 1)
	if s.outEmployee == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		if err := (*s.outEmployee).Encode(encoder); err != nil {
			return err
		}
	}
	if s.outFingerPrint == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outFingerPrint))), 8)
		for _, elem0 := range (*s.outFingerPrint) {
			if err := encoder.WriteUint8(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_QueryEmployee_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
	bindings.DataHeader{24, 1},
}

func (s *humanResourceDatabase_QueryEmployee_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_QueryEmployee_ResponseParams_Versions), func(i int) bool {
		return humanResourceDatabase_QueryEmployee_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_QueryEmployee_ResponseParams_Versions) {
		if humanResourceDatabase_QueryEmployee_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_QueryEmployee_ResponseParams_Versions[index].Size
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
			s.outEmployee = nil
		} else {
			s.outEmployee = new(Employee)
			if err := (*s.outEmployee).Decode(decoder); err != nil {
				return err
			}
		}
	}
	if header.ElementsOrVersion >= 1 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			s.outFingerPrint = nil
		} else {
			s.outFingerPrint = new([]uint8)
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			(*s.outFingerPrint) = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				(*s.outFingerPrint)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HumanResourceDatabase_Proxy) QueryEmployee(inId uint64, inRetrieveFingerPrint bool) (outEmployee *Employee, outFingerPrint *[]uint8, err error) {
	payload := &humanResourceDatabase_QueryEmployee_Params{
		inId,
		inRetrieveFingerPrint,
	}
	header := bindings.MessageHeader{
		Type: humanResourceDatabase_QueryEmployee_Name,
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
	if got, want := readResult.Message.Header.Type, humanResourceDatabase_QueryEmployee_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response humanResourceDatabase_QueryEmployee_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outEmployee = response.outEmployee
	outFingerPrint = response.outFingerPrint
	return
}

type humanResourceDatabase_AttachFingerPrint_Params struct {
	inId uint64
	inFingerPrint []uint8
}


func (s *humanResourceDatabase_AttachFingerPrint_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WriteUint64(s.inId); err != nil {
		return err
	}
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	encoder.StartArray(uint32(len(s.inFingerPrint)), 8)
	for _, elem0 := range s.inFingerPrint {
		if err := encoder.WriteUint8(elem0); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_AttachFingerPrint_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *humanResourceDatabase_AttachFingerPrint_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_AttachFingerPrint_Params_Versions), func(i int) bool {
		return humanResourceDatabase_AttachFingerPrint_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_AttachFingerPrint_Params_Versions) {
		if humanResourceDatabase_AttachFingerPrint_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_AttachFingerPrint_Params_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint64()
		if err != nil {
			return err
		}
		s.inId = value0
	}
	if header.ElementsOrVersion >= 0 {
		pointer0, err := decoder.ReadPointer()
		if err != nil {
			return err
		}
		if pointer0 == 0 {
			return &bindings.ValidationError{bindings.UnexpectedNullPointer, "unexpected null pointer"}
		} else {
			len0, err := decoder.StartArray(8)
			if err != nil {
				return err
			}
			s.inFingerPrint = make([]uint8, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint8()
				if err != nil {
					return err
				}
				s.inFingerPrint[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type humanResourceDatabase_AttachFingerPrint_ResponseParams struct {
	outSuccess bool
}


func (s *humanResourceDatabase_AttachFingerPrint_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteBool(s.outSuccess); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_AttachFingerPrint_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *humanResourceDatabase_AttachFingerPrint_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_AttachFingerPrint_ResponseParams_Versions), func(i int) bool {
		return humanResourceDatabase_AttachFingerPrint_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_AttachFingerPrint_ResponseParams_Versions) {
		if humanResourceDatabase_AttachFingerPrint_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_AttachFingerPrint_ResponseParams_Versions[index].Size
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

func (p *HumanResourceDatabase_Proxy) AttachFingerPrint(inId uint64, inFingerPrint []uint8) (outSuccess bool, err error) {
	payload := &humanResourceDatabase_AttachFingerPrint_Params{
		inId,
		inFingerPrint,
	}
	header := bindings.MessageHeader{
		Type: humanResourceDatabase_AttachFingerPrint_Name,
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
	if got, want := readResult.Message.Header.Type, humanResourceDatabase_AttachFingerPrint_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response humanResourceDatabase_AttachFingerPrint_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outSuccess = response.outSuccess
	return
}

type humanResourceDatabase_ListEmployeeIds_Params struct {
}


func (s *humanResourceDatabase_ListEmployeeIds_Params) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(0, 0)
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_ListEmployeeIds_Params_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{8, 0},
}

func (s *humanResourceDatabase_ListEmployeeIds_Params) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_ListEmployeeIds_Params_Versions), func(i int) bool {
		return humanResourceDatabase_ListEmployeeIds_Params_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_ListEmployeeIds_Params_Versions) {
		if humanResourceDatabase_ListEmployeeIds_Params_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_ListEmployeeIds_Params_Versions[index].Size
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

type humanResourceDatabase_ListEmployeeIds_ResponseParams struct {
	outIds *[]uint64
}


func (s *humanResourceDatabase_ListEmployeeIds_ResponseParams) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if s.outIds == nil {
		encoder.WriteNullPointer()
	} else {
		if err := encoder.WritePointer(); err != nil {
			return err
		}
		encoder.StartArray(uint32(len((*s.outIds))), 64)
		for _, elem0 := range (*s.outIds) {
			if err := encoder.WriteUint64(elem0); err != nil {
				return err
			}
		}
		if err := encoder.Finish(); err != nil {
			return err
		}
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var humanResourceDatabase_ListEmployeeIds_ResponseParams_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *humanResourceDatabase_ListEmployeeIds_ResponseParams) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(humanResourceDatabase_ListEmployeeIds_ResponseParams_Versions), func(i int) bool {
		return humanResourceDatabase_ListEmployeeIds_ResponseParams_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(humanResourceDatabase_ListEmployeeIds_ResponseParams_Versions) {
		if humanResourceDatabase_ListEmployeeIds_ResponseParams_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := humanResourceDatabase_ListEmployeeIds_ResponseParams_Versions[index].Size
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
			s.outIds = nil
		} else {
			s.outIds = new([]uint64)
			len0, err := decoder.StartArray(64)
			if err != nil {
				return err
			}
			(*s.outIds) = make([]uint64, len0)
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadUint64()
				if err != nil {
					return err
				}
				(*s.outIds)[i0] = value1
			}
			if err := decoder.Finish(); err != nil {
				return err
			}
		}
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

func (p *HumanResourceDatabase_Proxy) ListEmployeeIds() (outIds *[]uint64, err error) {
	payload := &humanResourceDatabase_ListEmployeeIds_Params{
	}
	header := bindings.MessageHeader{
		Type: humanResourceDatabase_ListEmployeeIds_Name,
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
	if got, want := readResult.Message.Header.Type, humanResourceDatabase_ListEmployeeIds_Name; got != want {
		err = &bindings.ValidationError{bindings.MessageHeaderUnknownMethod,
			fmt.Sprintf("invalid method in response: expected %v, got %v", want, got),
		}
		return
	}
	var response humanResourceDatabase_ListEmployeeIds_ResponseParams
	if err = readResult.Message.DecodePayload(&response); err != nil {
		p.Close_Proxy()
		return
	}
	outIds = response.outIds
	return
}

type humanResourceDatabase_Stub struct {
	connector *bindings.Connector
	impl HumanResourceDatabase
}

func NewHumanResourceDatabaseStub(r HumanResourceDatabase_Request, impl HumanResourceDatabase, waiter bindings.AsyncWaiter) *bindings.Stub {
	connector := bindings.NewConnector(r.PassMessagePipe(), waiter)
	return bindings.NewStub(connector, &humanResourceDatabase_Stub{connector, impl})
}


func (f *HumanResourceDatabase_Request) ServiceDescription() service_describer.ServiceDescription {
	return &HumanResourceDatabase_ServiceDescription{}
}


type HumanResourceDatabase_ServiceDescription struct{}

func (sd *HumanResourceDatabase_ServiceDescription) GetTopLevelInterface() (outMojomInterface mojom_types.MojomInterface, err error) {
	err = fmt.Errorf("GetTopLevelInterface not implemented")
	return
}

func (sd *HumanResourceDatabase_ServiceDescription) GetTypeDefinition(inTypeKey string) (outType mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetTypeDefinition not implemented")
	return
}

func (sd *HumanResourceDatabase_ServiceDescription) GetAllTypeDefinitions() (outDefinitions *map[string]mojom_types.UserDefinedType, err error) {
	err = fmt.Errorf("GetAllTypeDefinitions not implemented")
	return
}
var _ service_describer.ServiceDescription = (*HumanResourceDatabase_ServiceDescription)(nil)


func (s *humanResourceDatabase_Stub) Accept(message *bindings.Message) (err error) {
	switch message.Header.Type {
	case humanResourceDatabase_AddEmployee_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request humanResourceDatabase_AddEmployee_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response humanResourceDatabase_AddEmployee_ResponseParams
		response.outSuccess, err = s.impl.AddEmployee(request.inEmployee)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: humanResourceDatabase_AddEmployee_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case humanResourceDatabase_QueryEmployee_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request humanResourceDatabase_QueryEmployee_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response humanResourceDatabase_QueryEmployee_ResponseParams
		response.outEmployee, 		response.outFingerPrint, err = s.impl.QueryEmployee(request.inId, request.inRetrieveFingerPrint)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: humanResourceDatabase_QueryEmployee_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case humanResourceDatabase_AttachFingerPrint_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request humanResourceDatabase_AttachFingerPrint_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response humanResourceDatabase_AttachFingerPrint_ResponseParams
		response.outSuccess, err = s.impl.AttachFingerPrint(request.inId, request.inFingerPrint)
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: humanResourceDatabase_AttachFingerPrint_Name,
			Flags: bindings.MessageIsResponseFlag,
			RequestId: message.Header.RequestId,
		}
		message, err = bindings.EncodeMessage(header, &response)
		if err != nil {
			return err
		}
		return s.connector.WriteMessage(message)
	case humanResourceDatabase_ListEmployeeIds_Name:
		if message.Header.Flags != bindings.MessageExpectsResponseFlag {
			return &bindings.ValidationError{bindings.MessageHeaderInvalidFlags,
				fmt.Sprintf("invalid message header flag: %v", message.Header.Flags),
			}
		}
		var request humanResourceDatabase_ListEmployeeIds_Params
		if err := message.DecodePayload(&request); err != nil {
			return err
		}
		var response humanResourceDatabase_ListEmployeeIds_ResponseParams
		response.outIds, err = s.impl.ListEmployeeIds()
		if err != nil {
			return
		}
		header := bindings.MessageHeader{
			Type: humanResourceDatabase_ListEmployeeIds_Name,
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

type Employee struct {
	EmployeeId uint64
	Name string
	Department Department
}


func (s *Employee) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(24, 0)
	if err := encoder.WriteUint64(s.EmployeeId); err != nil {
		return err
	}
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	if err := encoder.WriteString(s.Name); err != nil {
		return err
	}
	if err := encoder.WriteInt32(int32(s.Department)); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var employee_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{32, 0},
}

func (s *Employee) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(employee_Versions), func(i int) bool {
		return employee_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(employee_Versions) {
		if employee_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := employee_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadUint64()
		if err != nil {
			return err
		}
		s.EmployeeId = value0
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
			s.Name = value0
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.Department = Department(value0)
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

