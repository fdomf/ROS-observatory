# generated from rosidl_generator_py/resource/_idl.py.em
# with input from observatory_interfaces:srv/Telescope.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Telescope_Request(type):
    """Metaclass of message 'Telescope_Request'."""

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
            module = import_type_support('observatory_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'observatory_interfaces.srv.Telescope_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__telescope__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__telescope__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__telescope__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__telescope__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__telescope__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Telescope_Request(metaclass=Metaclass_Telescope_Request):
    """Message class 'Telescope_Request'."""

    __slots__ = [
        '_telescope_action',
        '_alt',
        '_az',
    ]

    _fields_and_field_types = {
        'telescope_action': 'string',
        'alt': 'double',
        'az': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.telescope_action = kwargs.get('telescope_action', str())
        self.alt = kwargs.get('alt', float())
        self.az = kwargs.get('az', float())

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
        if self.telescope_action != other.telescope_action:
            return False
        if self.alt != other.alt:
            return False
        if self.az != other.az:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def telescope_action(self):
        """Message field 'telescope_action'."""
        return self._telescope_action

    @telescope_action.setter
    def telescope_action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'telescope_action' field must be of type 'str'"
        self._telescope_action = value

    @property
    def alt(self):
        """Message field 'alt'."""
        return self._alt

    @alt.setter
    def alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt' field must be of type 'float'"
        self._alt = value

    @property
    def az(self):
        """Message field 'az'."""
        return self._az

    @az.setter
    def az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az' field must be of type 'float'"
        self._az = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Telescope_Response(type):
    """Metaclass of message 'Telescope_Response'."""

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
            module = import_type_support('observatory_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'observatory_interfaces.srv.Telescope_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__telescope__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__telescope__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__telescope__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__telescope__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__telescope__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Telescope_Response(metaclass=Metaclass_Telescope_Response):
    """Message class 'Telescope_Response'."""

    __slots__ = [
        '_telescope_response',
    ]

    _fields_and_field_types = {
        'telescope_response': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.telescope_response = kwargs.get('telescope_response', str())

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
        if self.telescope_response != other.telescope_response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def telescope_response(self):
        """Message field 'telescope_response'."""
        return self._telescope_response

    @telescope_response.setter
    def telescope_response(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'telescope_response' field must be of type 'str'"
        self._telescope_response = value


class Metaclass_Telescope(type):
    """Metaclass of service 'Telescope'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('observatory_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'observatory_interfaces.srv.Telescope')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__telescope

            from observatory_interfaces.srv import _telescope
            if _telescope.Metaclass_Telescope_Request._TYPE_SUPPORT is None:
                _telescope.Metaclass_Telescope_Request.__import_type_support__()
            if _telescope.Metaclass_Telescope_Response._TYPE_SUPPORT is None:
                _telescope.Metaclass_Telescope_Response.__import_type_support__()


class Telescope(metaclass=Metaclass_Telescope):
    from observatory_interfaces.srv._telescope import Telescope_Request as Request
    from observatory_interfaces.srv._telescope import Telescope_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
