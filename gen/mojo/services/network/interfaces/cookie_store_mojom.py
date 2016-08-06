# Copyright 2014 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

import mojo_bindings.descriptor as _descriptor
import mojo_bindings.reflection as _reflection
import mojo_bindings.interface_reflection as _interface_reflection


class CookieStore(object):
  __metaclass__ = _interface_reflection.MojoInterfaceType
  DESCRIPTOR = {
    'fully_qualified_name': None,
    'version': 0,
    'methods': [
      {
        'name': 'Get',
        'ordinal': 0,
        'parameters': {
          'fields': [
            _descriptor.SingleFieldGroup('url', _descriptor.TYPE_STRING, 0, 0),
          ],
        },
        'responses': {
          'fields': [
            _descriptor.SingleFieldGroup('cookies', _descriptor.TYPE_STRING, 0, 0),
          ],
        },
      },
      {
        'name': 'Set',
        'ordinal': 1,
        'parameters': {
          'fields': [
            _descriptor.SingleFieldGroup('url', _descriptor.TYPE_STRING, 0, 0),
            _descriptor.SingleFieldGroup('cookie', _descriptor.TYPE_STRING, 1, 0),
          ],
        },
        'responses': {
          'fields': [
            _descriptor.BooleanGroup([_descriptor.FieldDescriptor('success', _descriptor.TYPE_BOOL, 0, 0)]),
          ],
        },
      },
    ],
  }
