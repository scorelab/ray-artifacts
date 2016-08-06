# Copyright 2014 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

import mojo_bindings.descriptor as _descriptor
import mojo_bindings.reflection as _reflection
import mojo_bindings.interface_reflection as _interface_reflection


class EchoService(object):
  __metaclass__ = _interface_reflection.MojoInterfaceType
  DESCRIPTOR = {
    'fully_qualified_name': 'mojo::EchoService',
    'version': 0,
    'methods': [
      {
        'name': 'EchoString',
        'ordinal': 0,
        'parameters': {
          'fields': [
            _descriptor.SingleFieldGroup('value', _descriptor.TYPE_NULLABLE_STRING, 0, 0),
          ],
        },
        'responses': {
          'fields': [
            _descriptor.SingleFieldGroup('value', _descriptor.TYPE_NULLABLE_STRING, 0, 0),
          ],
        },
      },
      {
        'name': 'Quit',
        'ordinal': 1,
        'parameters': {
        },
      },
    ],
  }
