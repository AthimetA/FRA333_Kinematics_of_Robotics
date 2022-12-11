# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cocoax_interfaces:msg/CocoaControlRef.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'reference_joint_position'
# Member 'reference_joint_velocity'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CocoaControlRef(type):
    """Metaclass of message 'CocoaControlRef'."""

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
            module = import_type_support('cocoax_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoax_interfaces.msg.CocoaControlRef')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cocoa_control_ref
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cocoa_control_ref
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cocoa_control_ref
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cocoa_control_ref
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cocoa_control_ref

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CocoaControlRef(metaclass=Metaclass_CocoaControlRef):
    """Message class 'CocoaControlRef'."""

    __slots__ = [
        '_reference_joint_position',
        '_reference_joint_velocity',
    ]

    _fields_and_field_types = {
        'reference_joint_position': 'double[3]',
        'reference_joint_velocity': 'double[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'reference_joint_position' not in kwargs:
            self.reference_joint_position = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.reference_joint_position = numpy.array(kwargs.get('reference_joint_position'), dtype=numpy.float64)
            assert self.reference_joint_position.shape == (3, )
        if 'reference_joint_velocity' not in kwargs:
            self.reference_joint_velocity = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.reference_joint_velocity = numpy.array(kwargs.get('reference_joint_velocity'), dtype=numpy.float64)
            assert self.reference_joint_velocity.shape == (3, )

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
        if all(self.reference_joint_position != other.reference_joint_position):
            return False
        if all(self.reference_joint_velocity != other.reference_joint_velocity):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def reference_joint_position(self):
        """Message field 'reference_joint_position'."""
        return self._reference_joint_position

    @reference_joint_position.setter
    def reference_joint_position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'reference_joint_position' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'reference_joint_position' numpy.ndarray() must have a size of 3"
            self._reference_joint_position = value
            return
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'reference_joint_position' field must be a set or sequence with length 3 and each value of type 'float'"
        self._reference_joint_position = numpy.array(value, dtype=numpy.float64)

    @property
    def reference_joint_velocity(self):
        """Message field 'reference_joint_velocity'."""
        return self._reference_joint_velocity

    @reference_joint_velocity.setter
    def reference_joint_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'reference_joint_velocity' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'reference_joint_velocity' numpy.ndarray() must have a size of 3"
            self._reference_joint_velocity = value
            return
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'reference_joint_velocity' field must be a set or sequence with length 3 and each value of type 'float'"
        self._reference_joint_velocity = numpy.array(value, dtype=numpy.float64)
