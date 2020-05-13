# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dome_interfaces:srv/Camera.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Camera_Request(type):
    """Metaclass of message 'Camera_Request'."""

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
            module = import_type_support('dome_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dome_interfaces.srv.Camera_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera_Request(metaclass=Metaclass_Camera_Request):
    """Message class 'Camera_Request'."""

    __slots__ = [
        '_camera_action',
    ]

    _fields_and_field_types = {
        'camera_action': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.camera_action = kwargs.get('camera_action', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.camera_action != other.camera_action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def camera_action(self):
        """Message field 'camera_action'."""
        return self._camera_action

    @camera_action.setter
    def camera_action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'camera_action' field must be of type 'str'"
        self._camera_action = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Camera_Response(type):
    """Metaclass of message 'Camera_Response'."""

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
            module = import_type_support('dome_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dome_interfaces.srv.Camera_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera_Response(metaclass=Metaclass_Camera_Response):
    """Message class 'Camera_Response'."""

    __slots__ = [
        '_camera_response',
    ]

    _fields_and_field_types = {
        'camera_response': 'string[10]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 10),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.camera_response = kwargs.get(
            'camera_response',
            [str() for x in range(10)]
        )

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.camera_response != other.camera_response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def camera_response(self):
        """Message field 'camera_response'."""
        return self._camera_response

    @camera_response.setter
    def camera_response(self, value):
        if __debug__:
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
                 len(value) == 10 and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'camera_response' field must be a set or sequence with length 10 and each value of type 'str'"
        self._camera_response = value


class Metaclass_Camera(type):
    """Metaclass of service 'Camera'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dome_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dome_interfaces.srv.Camera')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__camera

            from dome_interfaces.srv import _camera
            if _camera.Metaclass_Camera_Request._TYPE_SUPPORT is None:
                _camera.Metaclass_Camera_Request.__import_type_support__()
            if _camera.Metaclass_Camera_Response._TYPE_SUPPORT is None:
                _camera.Metaclass_Camera_Response.__import_type_support__()


class Camera(metaclass=Metaclass_Camera):
    from dome_interfaces.srv._camera import Camera_Request as Request
    from dome_interfaces.srv._camera import Camera_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
