# generated from rosidl_generator_py/resource/_idl.py.em
# with input from artscript_interfaces:srv/ServoGroup.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoGroup_Request(type):
    """Metaclass of message 'ServoGroup_Request'."""

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
            module = import_type_support('artscript_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'artscript_interfaces.srv.ServoGroup_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__servo_group__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__servo_group__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__servo_group__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__servo_group__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__servo_group__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoGroup_Request(metaclass=Metaclass_ServoGroup_Request):
    """Message class 'ServoGroup_Request'."""

    __slots__ = [
        '_command_list',
        '_servo_speed',
    ]

    _fields_and_field_types = {
        'command_list': 'sequence<string>',
        'servo_speed': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command_list = kwargs.get('command_list', [])
        self.servo_speed = kwargs.get('servo_speed', int())

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
        if self.command_list != other.command_list:
            return False
        if self.servo_speed != other.servo_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def command_list(self):
        """Message field 'command_list'."""
        return self._command_list

    @command_list.setter
    def command_list(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'command_list' field must be a set or sequence and each value of type 'str'"
        self._command_list = value

    @property
    def servo_speed(self):
        """Message field 'servo_speed'."""
        return self._servo_speed

    @servo_speed.setter
    def servo_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_speed' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'servo_speed' field must be an integer in [-2147483648, 2147483647]"
        self._servo_speed = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ServoGroup_Response(type):
    """Metaclass of message 'ServoGroup_Response'."""

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
            module = import_type_support('artscript_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'artscript_interfaces.srv.ServoGroup_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__servo_group__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__servo_group__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__servo_group__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__servo_group__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__servo_group__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoGroup_Response(metaclass=Metaclass_ServoGroup_Response):
    """Message class 'ServoGroup_Response'."""

    __slots__ = [
        '_move_status',
    ]

    _fields_and_field_types = {
        'move_status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.move_status = kwargs.get('move_status', bool())

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
        if self.move_status != other.move_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def move_status(self):
        """Message field 'move_status'."""
        return self._move_status

    @move_status.setter
    def move_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'move_status' field must be of type 'bool'"
        self._move_status = value


class Metaclass_ServoGroup(type):
    """Metaclass of service 'ServoGroup'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('artscript_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'artscript_interfaces.srv.ServoGroup')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__servo_group

            from artscript_interfaces.srv import _servo_group
            if _servo_group.Metaclass_ServoGroup_Request._TYPE_SUPPORT is None:
                _servo_group.Metaclass_ServoGroup_Request.__import_type_support__()
            if _servo_group.Metaclass_ServoGroup_Response._TYPE_SUPPORT is None:
                _servo_group.Metaclass_ServoGroup_Response.__import_type_support__()


class ServoGroup(metaclass=Metaclass_ServoGroup):
    from artscript_interfaces.srv._servo_group import ServoGroup_Request as Request
    from artscript_interfaces.srv._servo_group import ServoGroup_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
