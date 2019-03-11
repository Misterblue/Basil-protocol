# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: SpaceServer.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import BasilTypes_pb2 as BasilTypes__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='SpaceServer.proto',
  package='SpaceServer',
  syntax='proto3',
  serialized_options=_b('\252\002\'org.herbal3d.basil.protocol.SpaceServer'),
  serialized_pb=_b('\n\x11SpaceServer.proto\x12\x0bSpaceServer\x1a\x10\x42\x61silTypes.proto\"=\n\rCameraViewReq\x12,\n\x04\x61uth\x18\x01 \x01(\x0b\x32\x1e.BasilType.AccessAuthorization\">\n\x0e\x43\x61meraViewResp\x12,\n\texception\x18\x01 \x01(\x0b\x32\x19.BasilType.BasilException\"\xac\x01\n\x0eOpenSessionReq\x12,\n\x04\x61uth\x18\x01 \x01(\x0b\x32\x1e.BasilType.AccessAuthorization\x12;\n\x08\x66\x65\x61tures\x18\x02 \x03(\x0b\x32).SpaceServer.OpenSessionReq.FeaturesEntry\x1a/\n\rFeaturesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t:\x02\x38\x01\"\xb4\x01\n\x0fOpenSessionResp\x12,\n\texception\x18\x01 \x01(\x0b\x32\x19.BasilType.BasilException\x12@\n\nproperties\x18\x02 \x03(\x0b\x32,.SpaceServer.OpenSessionResp.PropertiesEntry\x1a\x31\n\x0fPropertiesEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t:\x02\x38\x01\"O\n\x0f\x43loseSessionReq\x12,\n\x04\x61uth\x18\x01 \x01(\x0b\x32\x1e.BasilType.AccessAuthorization\x12\x0e\n\x06reason\x18\x02 \x01(\t\"@\n\x10\x43loseSessionResp\x12,\n\texception\x18\x01 \x01(\x0b\x32\x19.BasilType.BasilException2\xa4\x01\n\x0bSpaceServer\x12H\n\x0bOpenSession\x12\x1b.SpaceServer.OpenSessionReq\x1a\x1c.SpaceServer.OpenSessionResp\x12K\n\x0c\x43loseSession\x12\x1c.SpaceServer.CloseSessionReq\x1a\x1d.SpaceServer.CloseSessionRespB*\xaa\x02\'org.herbal3d.basil.protocol.SpaceServerb\x06proto3')
  ,
  dependencies=[BasilTypes__pb2.DESCRIPTOR,])




_CAMERAVIEWREQ = _descriptor.Descriptor(
  name='CameraViewReq',
  full_name='SpaceServer.CameraViewReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='auth', full_name='SpaceServer.CameraViewReq.auth', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=52,
  serialized_end=113,
)


_CAMERAVIEWRESP = _descriptor.Descriptor(
  name='CameraViewResp',
  full_name='SpaceServer.CameraViewResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='exception', full_name='SpaceServer.CameraViewResp.exception', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=115,
  serialized_end=177,
)


_OPENSESSIONREQ_FEATURESENTRY = _descriptor.Descriptor(
  name='FeaturesEntry',
  full_name='SpaceServer.OpenSessionReq.FeaturesEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='SpaceServer.OpenSessionReq.FeaturesEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='SpaceServer.OpenSessionReq.FeaturesEntry.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=305,
  serialized_end=352,
)

_OPENSESSIONREQ = _descriptor.Descriptor(
  name='OpenSessionReq',
  full_name='SpaceServer.OpenSessionReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='auth', full_name='SpaceServer.OpenSessionReq.auth', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='features', full_name='SpaceServer.OpenSessionReq.features', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_OPENSESSIONREQ_FEATURESENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=180,
  serialized_end=352,
)


_OPENSESSIONRESP_PROPERTIESENTRY = _descriptor.Descriptor(
  name='PropertiesEntry',
  full_name='SpaceServer.OpenSessionResp.PropertiesEntry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='key', full_name='SpaceServer.OpenSessionResp.PropertiesEntry.key', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='value', full_name='SpaceServer.OpenSessionResp.PropertiesEntry.value', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=_b('8\001'),
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=486,
  serialized_end=535,
)

_OPENSESSIONRESP = _descriptor.Descriptor(
  name='OpenSessionResp',
  full_name='SpaceServer.OpenSessionResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='exception', full_name='SpaceServer.OpenSessionResp.exception', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='properties', full_name='SpaceServer.OpenSessionResp.properties', index=1,
      number=2, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[_OPENSESSIONRESP_PROPERTIESENTRY, ],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=355,
  serialized_end=535,
)


_CLOSESESSIONREQ = _descriptor.Descriptor(
  name='CloseSessionReq',
  full_name='SpaceServer.CloseSessionReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='auth', full_name='SpaceServer.CloseSessionReq.auth', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='reason', full_name='SpaceServer.CloseSessionReq.reason', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=537,
  serialized_end=616,
)


_CLOSESESSIONRESP = _descriptor.Descriptor(
  name='CloseSessionResp',
  full_name='SpaceServer.CloseSessionResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='exception', full_name='SpaceServer.CloseSessionResp.exception', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=618,
  serialized_end=682,
)

_CAMERAVIEWREQ.fields_by_name['auth'].message_type = BasilTypes__pb2._ACCESSAUTHORIZATION
_CAMERAVIEWRESP.fields_by_name['exception'].message_type = BasilTypes__pb2._BASILEXCEPTION
_OPENSESSIONREQ_FEATURESENTRY.containing_type = _OPENSESSIONREQ
_OPENSESSIONREQ.fields_by_name['auth'].message_type = BasilTypes__pb2._ACCESSAUTHORIZATION
_OPENSESSIONREQ.fields_by_name['features'].message_type = _OPENSESSIONREQ_FEATURESENTRY
_OPENSESSIONRESP_PROPERTIESENTRY.containing_type = _OPENSESSIONRESP
_OPENSESSIONRESP.fields_by_name['exception'].message_type = BasilTypes__pb2._BASILEXCEPTION
_OPENSESSIONRESP.fields_by_name['properties'].message_type = _OPENSESSIONRESP_PROPERTIESENTRY
_CLOSESESSIONREQ.fields_by_name['auth'].message_type = BasilTypes__pb2._ACCESSAUTHORIZATION
_CLOSESESSIONRESP.fields_by_name['exception'].message_type = BasilTypes__pb2._BASILEXCEPTION
DESCRIPTOR.message_types_by_name['CameraViewReq'] = _CAMERAVIEWREQ
DESCRIPTOR.message_types_by_name['CameraViewResp'] = _CAMERAVIEWRESP
DESCRIPTOR.message_types_by_name['OpenSessionReq'] = _OPENSESSIONREQ
DESCRIPTOR.message_types_by_name['OpenSessionResp'] = _OPENSESSIONRESP
DESCRIPTOR.message_types_by_name['CloseSessionReq'] = _CLOSESESSIONREQ
DESCRIPTOR.message_types_by_name['CloseSessionResp'] = _CLOSESESSIONRESP
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

CameraViewReq = _reflection.GeneratedProtocolMessageType('CameraViewReq', (_message.Message,), {
  'DESCRIPTOR' : _CAMERAVIEWREQ,
  '__module__' : 'SpaceServer_pb2'
  # @@protoc_insertion_point(class_scope:SpaceServer.CameraViewReq)
  })
_sym_db.RegisterMessage(CameraViewReq)

CameraViewResp = _reflection.GeneratedProtocolMessageType('CameraViewResp', (_message.Message,), {
  'DESCRIPTOR' : _CAMERAVIEWRESP,
  '__module__' : 'SpaceServer_pb2'
  # @@protoc_insertion_point(class_scope:SpaceServer.CameraViewResp)
  })
_sym_db.RegisterMessage(CameraViewResp)

OpenSessionReq = _reflection.GeneratedProtocolMessageType('OpenSessionReq', (_message.Message,), {

  'FeaturesEntry' : _reflection.GeneratedProtocolMessageType('FeaturesEntry', (_message.Message,), {
    'DESCRIPTOR' : _OPENSESSIONREQ_FEATURESENTRY,
    '__module__' : 'SpaceServer_pb2'
    # @@protoc_insertion_point(class_scope:SpaceServer.OpenSessionReq.FeaturesEntry)
    })
  ,
  'DESCRIPTOR' : _OPENSESSIONREQ,
  '__module__' : 'SpaceServer_pb2'
  # @@protoc_insertion_point(class_scope:SpaceServer.OpenSessionReq)
  })
_sym_db.RegisterMessage(OpenSessionReq)
_sym_db.RegisterMessage(OpenSessionReq.FeaturesEntry)

OpenSessionResp = _reflection.GeneratedProtocolMessageType('OpenSessionResp', (_message.Message,), {

  'PropertiesEntry' : _reflection.GeneratedProtocolMessageType('PropertiesEntry', (_message.Message,), {
    'DESCRIPTOR' : _OPENSESSIONRESP_PROPERTIESENTRY,
    '__module__' : 'SpaceServer_pb2'
    # @@protoc_insertion_point(class_scope:SpaceServer.OpenSessionResp.PropertiesEntry)
    })
  ,
  'DESCRIPTOR' : _OPENSESSIONRESP,
  '__module__' : 'SpaceServer_pb2'
  # @@protoc_insertion_point(class_scope:SpaceServer.OpenSessionResp)
  })
_sym_db.RegisterMessage(OpenSessionResp)
_sym_db.RegisterMessage(OpenSessionResp.PropertiesEntry)

CloseSessionReq = _reflection.GeneratedProtocolMessageType('CloseSessionReq', (_message.Message,), {
  'DESCRIPTOR' : _CLOSESESSIONREQ,
  '__module__' : 'SpaceServer_pb2'
  # @@protoc_insertion_point(class_scope:SpaceServer.CloseSessionReq)
  })
_sym_db.RegisterMessage(CloseSessionReq)

CloseSessionResp = _reflection.GeneratedProtocolMessageType('CloseSessionResp', (_message.Message,), {
  'DESCRIPTOR' : _CLOSESESSIONRESP,
  '__module__' : 'SpaceServer_pb2'
  # @@protoc_insertion_point(class_scope:SpaceServer.CloseSessionResp)
  })
_sym_db.RegisterMessage(CloseSessionResp)


DESCRIPTOR._options = None
_OPENSESSIONREQ_FEATURESENTRY._options = None
_OPENSESSIONRESP_PROPERTIESENTRY._options = None

_SPACESERVER = _descriptor.ServiceDescriptor(
  name='SpaceServer',
  full_name='SpaceServer.SpaceServer',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=685,
  serialized_end=849,
  methods=[
  _descriptor.MethodDescriptor(
    name='OpenSession',
    full_name='SpaceServer.SpaceServer.OpenSession',
    index=0,
    containing_service=None,
    input_type=_OPENSESSIONREQ,
    output_type=_OPENSESSIONRESP,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='CloseSession',
    full_name='SpaceServer.SpaceServer.CloseSession',
    index=1,
    containing_service=None,
    input_type=_CLOSESESSIONREQ,
    output_type=_CLOSESESSIONRESP,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_SPACESERVER)

DESCRIPTOR.services_by_name['SpaceServer'] = _SPACESERVER

# @@protoc_insertion_point(module_scope)
