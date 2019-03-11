# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: AliveCheck.proto

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
  name='AliveCheck.proto',
  package='AliveCheck',
  syntax='proto3',
  serialized_options=_b('\252\002&org.herbal3d.basil.protocol.AliveCheck'),
  serialized_pb=_b('\n\x10\x41liveCheck.proto\x12\nAliveCheck\x1a\x10\x42\x61silTypes.proto\"`\n\rAliveCheckReq\x12,\n\x04\x61uth\x18\x01 \x01(\x0b\x32\x1e.BasilType.AccessAuthorization\x12\x0c\n\x04time\x18\x02 \x01(\x04\x12\x13\n\x0bsequenceNum\x18\x03 \x01(\x05\"f\n\x0e\x41liveCheckResp\x12\x0c\n\x04time\x18\x01 \x01(\x04\x12\x13\n\x0bsequenceNum\x18\x02 \x01(\x05\x12\x14\n\x0ctimeReceived\x18\x03 \x01(\x04\x12\x1b\n\x13sequenceNumReceived\x18\x04 \x01(\x05\x42)\xaa\x02&org.herbal3d.basil.protocol.AliveCheckb\x06proto3')
  ,
  dependencies=[BasilTypes__pb2.DESCRIPTOR,])




_ALIVECHECKREQ = _descriptor.Descriptor(
  name='AliveCheckReq',
  full_name='AliveCheck.AliveCheckReq',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='auth', full_name='AliveCheck.AliveCheckReq.auth', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='time', full_name='AliveCheck.AliveCheckReq.time', index=1,
      number=2, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequenceNum', full_name='AliveCheck.AliveCheckReq.sequenceNum', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=50,
  serialized_end=146,
)


_ALIVECHECKRESP = _descriptor.Descriptor(
  name='AliveCheckResp',
  full_name='AliveCheck.AliveCheckResp',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='AliveCheck.AliveCheckResp.time', index=0,
      number=1, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequenceNum', full_name='AliveCheck.AliveCheckResp.sequenceNum', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='timeReceived', full_name='AliveCheck.AliveCheckResp.timeReceived', index=2,
      number=3, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sequenceNumReceived', full_name='AliveCheck.AliveCheckResp.sequenceNumReceived', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
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
  serialized_start=148,
  serialized_end=250,
)

_ALIVECHECKREQ.fields_by_name['auth'].message_type = BasilTypes__pb2._ACCESSAUTHORIZATION
DESCRIPTOR.message_types_by_name['AliveCheckReq'] = _ALIVECHECKREQ
DESCRIPTOR.message_types_by_name['AliveCheckResp'] = _ALIVECHECKRESP
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

AliveCheckReq = _reflection.GeneratedProtocolMessageType('AliveCheckReq', (_message.Message,), {
  'DESCRIPTOR' : _ALIVECHECKREQ,
  '__module__' : 'AliveCheck_pb2'
  # @@protoc_insertion_point(class_scope:AliveCheck.AliveCheckReq)
  })
_sym_db.RegisterMessage(AliveCheckReq)

AliveCheckResp = _reflection.GeneratedProtocolMessageType('AliveCheckResp', (_message.Message,), {
  'DESCRIPTOR' : _ALIVECHECKRESP,
  '__module__' : 'AliveCheck_pb2'
  # @@protoc_insertion_point(class_scope:AliveCheck.AliveCheckResp)
  })
_sym_db.RegisterMessage(AliveCheckResp)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)
