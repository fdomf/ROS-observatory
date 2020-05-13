# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dome_interfaces:srv/Dome.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Dome_Request(type):
    """Metaclass of message 'Dome_Request'."""

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
                'dome_interfaces.srv.Dome_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dome__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dome__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dome__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dome__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dome__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dome_Request(metaclass=Metaclass_Dome_Request):
    """Message class 'Dome_Request'."""

    __slots__ = [
        '_dome_action',
    ]

    _fields_and_field_types = {
        'dome_action': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dome_action = kwargs.get('dome_action', str())

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
        if self.dome_action != other.dome_action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def dome_action(self):
        """Message field 'dome_action'."""
        return self._dome_action

    @dome_action.setter
    def dome_action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dome_action' field must be of type 'str'"
        self._dome_action = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Dome_Response(type):
    """Metaclass of message 'Dome_Response'."""

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
                'dome_interfaces.srv.Dome_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__dome__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__dome__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__dome__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__dome__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__dome__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Dome_Response(metaclass=Metaclass_Dome_Response):
    """Message class 'Dome_Response'."""

    __slots__ = [
        '_dome_response',
    ]

    _fields_and_field_types = {
        'dome_response': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.dome_response = kwargs.get('dome_response', str())

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
        if self.dome_response != other.dome_response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def dome_response(self):
        """Message field 'dome_response'."""
        return self._dome_response

    @dome_response.setter
    def dome_response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'dome_response' field must be of type 'str'"
        self._dome_response = value


class Metaclass_Dome(type):
    """Metaclass of service 'Dome'."""

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
                'dome_interfaces.srv.Dome')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__dome

            from dome_interfaces.srv import _dome
            if _dome.Metaclass_Dome_Request._TYPE_SUPPORT is None:
                _dome.Metaclass_Dome_Request.__import_type_support__()
            if _dome.Metaclass_Dome_Response._TYPE_SUPPORT is None:
                _dome.Metaclass_Dome_Response.__import_type_support__()


class Dome(metaclass=Metaclass_Dome):
    from dome_interfaces.srv._dome import Dome_Request as Request
    from dome_interfaces.srv._dome import Dome_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
