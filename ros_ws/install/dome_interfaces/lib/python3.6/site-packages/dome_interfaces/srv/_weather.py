# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dome_interfaces:srv/Weather.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Weather_Request(type):
    """Metaclass of message 'Weather_Request'."""

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
                'dome_interfaces.srv.Weather_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__weather__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__weather__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__weather__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__weather__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__weather__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Weather_Request(metaclass=Metaclass_Weather_Request):
    """Message class 'Weather_Request'."""

    __slots__ = [
        '_weather_action',
    ]

    _fields_and_field_types = {
        'weather_action': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.weather_action = kwargs.get('weather_action', str())

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
        if self.weather_action != other.weather_action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def weather_action(self):
        """Message field 'weather_action'."""
        return self._weather_action

    @weather_action.setter
    def weather_action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'weather_action' field must be of type 'str'"
        self._weather_action = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Weather_Response(type):
    """Metaclass of message 'Weather_Response'."""

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
                'dome_interfaces.srv.Weather_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__weather__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__weather__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__weather__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__weather__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__weather__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Weather_Response(metaclass=Metaclass_Weather_Response):
    """Message class 'Weather_Response'."""

    __slots__ = [
        '_data_response',
    ]

    _fields_and_field_types = {
        'data_response': 'string[10]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.UnboundedString(), 10),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.data_response = kwargs.get(
            'data_response',
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
        if self.data_response != other.data_response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def data_response(self):
        """Message field 'data_response'."""
        return self._data_response

    @data_response.setter
    def data_response(self, value):
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
                "The 'data_response' field must be a set or sequence with length 10 and each value of type 'str'"
        self._data_response = value


class Metaclass_Weather(type):
    """Metaclass of service 'Weather'."""

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
                'dome_interfaces.srv.Weather')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__weather

            from dome_interfaces.srv import _weather
            if _weather.Metaclass_Weather_Request._TYPE_SUPPORT is None:
                _weather.Metaclass_Weather_Request.__import_type_support__()
            if _weather.Metaclass_Weather_Response._TYPE_SUPPORT is None:
                _weather.Metaclass_Weather_Response.__import_type_support__()


class Weather(metaclass=Metaclass_Weather):
    from dome_interfaces.srv._weather import Weather_Request as Request
    from dome_interfaces.srv._weather import Weather_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
