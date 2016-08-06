// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by:
//     mojo/public/tools/bindings/mojom_bindings_generator.py
// For:
//     mojo/services/geometry/interfaces/geometry.mojom
//

package geometry

import (
	sort "sort"
	fmt "fmt"
	bindings "mojo/public/go/bindings"
)


type Point struct {
	X int32
	Y int32
}


func (s *Point) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteInt32(s.X); err != nil {
		return err
	}
	if err := encoder.WriteInt32(s.Y); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var point_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *Point) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(point_Versions), func(i int) bool {
		return point_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(point_Versions) {
		if point_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := point_Versions[index].Size
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
		s.X = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.Y = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type PointF struct {
	X float32
	Y float32
}


func (s *PointF) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteFloat32(s.X); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.Y); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var pointF_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *PointF) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(pointF_Versions), func(i int) bool {
		return pointF_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(pointF_Versions) {
		if pointF_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := pointF_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.X = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.Y = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type Size struct {
	Width int32
	Height int32
}


func (s *Size) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WriteInt32(s.Width); err != nil {
		return err
	}
	if err := encoder.WriteInt32(s.Height); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var size_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *Size) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(size_Versions), func(i int) bool {
		return size_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(size_Versions) {
		if size_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := size_Versions[index].Size
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
		s.Width = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.Height = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type Rect struct {
	X int32
	Y int32
	Width int32
	Height int32
}


func (s *Rect) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WriteInt32(s.X); err != nil {
		return err
	}
	if err := encoder.WriteInt32(s.Y); err != nil {
		return err
	}
	if err := encoder.WriteInt32(s.Width); err != nil {
		return err
	}
	if err := encoder.WriteInt32(s.Height); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var rect_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *Rect) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(rect_Versions), func(i int) bool {
		return rect_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(rect_Versions) {
		if rect_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := rect_Versions[index].Size
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
		s.X = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.Y = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.Width = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadInt32()
		if err != nil {
			return err
		}
		s.Height = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type RectF struct {
	X float32
	Y float32
	Width float32
	Height float32
}


func (s *RectF) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(16, 0)
	if err := encoder.WriteFloat32(s.X); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.Y); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.Width); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.Height); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var rectF_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{24, 0},
}

func (s *RectF) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(rectF_Versions), func(i int) bool {
		return rectF_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(rectF_Versions) {
		if rectF_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := rectF_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.X = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.Y = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.Width = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.Height = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type RRectF struct {
	X float32
	Y float32
	Width float32
	Height float32
	TopLeftRadiusX float32
	TopLeftRadiusY float32
	TopRightRadiusX float32
	TopRightRadiusY float32
	BottomLeftRadiusX float32
	BottomLeftRadiusY float32
	BottomRightRadiusX float32
	BottomRightRadiusY float32
}


func (s *RRectF) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(48, 0)
	if err := encoder.WriteFloat32(s.X); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.Y); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.Width); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.Height); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.TopLeftRadiusX); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.TopLeftRadiusY); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.TopRightRadiusX); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.TopRightRadiusY); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.BottomLeftRadiusX); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.BottomLeftRadiusY); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.BottomRightRadiusX); err != nil {
		return err
	}
	if err := encoder.WriteFloat32(s.BottomRightRadiusY); err != nil {
		return err
	}
	if err := encoder.Finish(); err != nil {
		return err
	}
	return nil
}

var rRectF_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{56, 0},
}

func (s *RRectF) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(rRectF_Versions), func(i int) bool {
		return rRectF_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(rRectF_Versions) {
		if rRectF_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := rRectF_Versions[index].Size
		if expectedSize != header.Size {
			return &bindings.ValidationError{bindings.UnexpectedStructHeader,
				fmt.Sprintf("invalid struct header size: should be %d, but was %d", expectedSize, header.Size),
			}
		}
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.X = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.Y = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.Width = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.Height = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.TopLeftRadiusX = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.TopLeftRadiusY = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.TopRightRadiusX = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.TopRightRadiusY = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.BottomLeftRadiusX = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.BottomLeftRadiusY = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.BottomRightRadiusX = value0
	}
	if header.ElementsOrVersion >= 0 {
		value0, err := decoder.ReadFloat32()
		if err != nil {
			return err
		}
		s.BottomRightRadiusY = value0
	}
	if err := decoder.Finish(); err != nil {
		return err
	}
	return nil
}

type Transform struct {
	Matrix [16]float32
}


func (s *Transform) Encode(encoder *bindings.Encoder) error {
	encoder.StartStruct(8, 0)
	if err := encoder.WritePointer(); err != nil {
		return err
	}
	encoder.StartArray(uint32(len(s.Matrix)), 32)
	for _, elem0 := range s.Matrix {
		if err := encoder.WriteFloat32(elem0); err != nil {
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

var transform_Versions []bindings.DataHeader = []bindings.DataHeader{
	bindings.DataHeader{16, 0},
}

func (s *Transform) Decode(decoder *bindings.Decoder) error {
	header, err := decoder.StartStruct()
	if err != nil {
		return err
	}
	index := sort.Search(len(transform_Versions), func(i int) bool {
		return transform_Versions[i].ElementsOrVersion >= header.ElementsOrVersion
	})
	if index < len(transform_Versions) {
		if transform_Versions[index].ElementsOrVersion > header.ElementsOrVersion {
			index--
		}
		expectedSize := transform_Versions[index].Size
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
			len0, err := decoder.StartArray(32)
			if err != nil {
				return err
			}
			if len0 != 16 {
				return &bindings.ValidationError{bindings.UnexpectedArrayHeader,
					fmt.Sprintf("invalid array length: expected %d, got %d", 16, len0),
				}
			}
			for i0 := uint32(0); i0 < len0; i0++ {
				value1, err := decoder.ReadFloat32()
				if err != nil {
					return err
				}
				s.Matrix[i0] = value1
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

