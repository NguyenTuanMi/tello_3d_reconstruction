# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tello_msgs:srv/TelloAction.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TelloAction_Request(type):
    """Metaclass of message 'TelloAction_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tello_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tello_msgs.srv.TelloAction_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tello_action__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tello_action__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tello_action__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tello_action__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tello_action__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TelloAction_Request(metaclass=Metaclass_TelloAction_Request):
    """Message class 'TelloAction_Request'."""

    __slots__ = [
        '_cmd',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'cmd': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd = kwargs.get('cmd', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.cmd != other.cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'cmd' field must be of type 'str'"
        self._cmd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TelloAction_Response(type):
    """Metaclass of message 'TelloAction_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OK': 1,
        'ERROR_NOT_CONNECTED': 2,
        'ERROR_BUSY': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tello_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tello_msgs.srv.TelloAction_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tello_action__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tello_action__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tello_action__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tello_action__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tello_action__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OK': cls.__constants['OK'],
            'ERROR_NOT_CONNECTED': cls.__constants['ERROR_NOT_CONNECTED'],
            'ERROR_BUSY': cls.__constants['ERROR_BUSY'],
        }

    @property
    def OK(self):
        """Message constant 'OK'."""
        return Metaclass_TelloAction_Response.__constants['OK']

    @property
    def ERROR_NOT_CONNECTED(self):
        """Message constant 'ERROR_NOT_CONNECTED'."""
        return Metaclass_TelloAction_Response.__constants['ERROR_NOT_CONNECTED']

    @property
    def ERROR_BUSY(self):
        """Message constant 'ERROR_BUSY'."""
        return Metaclass_TelloAction_Response.__constants['ERROR_BUSY']


class TelloAction_Response(metaclass=Metaclass_TelloAction_Response):
    """
    Message class 'TelloAction_Response'.

    Constants:
      OK
      ERROR_NOT_CONNECTED
      ERROR_BUSY
    """

    __slots__ = [
        '_rc',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'rc': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rc = kwargs.get('rc', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.rc != other.rc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rc(self):
        """Message field 'rc'."""
        return self._rc

    @rc.setter
    def rc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rc' field must be an unsigned integer in [0, 255]"
        self._rc = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_TelloAction_Event(type):
    """Metaclass of message 'TelloAction_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tello_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tello_msgs.srv.TelloAction_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tello_action__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tello_action__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tello_action__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tello_action__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tello_action__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TelloAction_Event(metaclass=Metaclass_TelloAction_Event):
    """Message class 'TelloAction_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<tello_msgs/TelloAction_Request, 1>',
        'response': 'sequence<tello_msgs/TelloAction_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['tello_msgs', 'srv'], 'TelloAction_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['tello_msgs', 'srv'], 'TelloAction_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from tello_msgs.srv import TelloAction_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, TelloAction_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'TelloAction_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from tello_msgs.srv import TelloAction_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, TelloAction_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'TelloAction_Response'"
        self._response = value


class Metaclass_TelloAction(type):
    """Metaclass of service 'TelloAction'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tello_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tello_msgs.srv.TelloAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tello_action

            from tello_msgs.srv import _tello_action
            if _tello_action.Metaclass_TelloAction_Request._TYPE_SUPPORT is None:
                _tello_action.Metaclass_TelloAction_Request.__import_type_support__()
            if _tello_action.Metaclass_TelloAction_Response._TYPE_SUPPORT is None:
                _tello_action.Metaclass_TelloAction_Response.__import_type_support__()
            if _tello_action.Metaclass_TelloAction_Event._TYPE_SUPPORT is None:
                _tello_action.Metaclass_TelloAction_Event.__import_type_support__()


class TelloAction(metaclass=Metaclass_TelloAction):
    from tello_msgs.srv._tello_action import TelloAction_Request as Request
    from tello_msgs.srv._tello_action import TelloAction_Response as Response
    from tello_msgs.srv._tello_action import TelloAction_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
