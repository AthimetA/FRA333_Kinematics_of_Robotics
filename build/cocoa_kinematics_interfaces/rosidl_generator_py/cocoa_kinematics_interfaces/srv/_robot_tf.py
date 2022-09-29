# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cocoa_kinematics_interfaces:srv/RobotTF.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotTF_Request(type):
    """Metaclass of message 'RobotTF_Request'."""

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
            module = import_type_support('cocoa_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoa_kinematics_interfaces.srv.RobotTF_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_tf__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_tf__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_tf__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_tf__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_tf__request

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotTF_Request(metaclass=Metaclass_RobotTF_Request):
    """Message class 'RobotTF_Request'."""

    __slots__ = [
        '_jointconfig',
    ]

    _fields_and_field_types = {
        'jointconfig': 'sensor_msgs/JointState',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import JointState
        self.jointconfig = kwargs.get('jointconfig', JointState())

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
        if self.jointconfig != other.jointconfig:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def jointconfig(self):
        """Message field 'jointconfig'."""
        return self._jointconfig

    @jointconfig.setter
    def jointconfig(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'jointconfig' field must be a sub message of type 'JointState'"
        self._jointconfig = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotTF_Response(type):
    """Metaclass of message 'RobotTF_Response'."""

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
            module = import_type_support('cocoa_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoa_kinematics_interfaces.srv.RobotTF_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robot_tf__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robot_tf__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robot_tf__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robot_tf__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robot_tf__response

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotTF_Response(metaclass=Metaclass_RobotTF_Response):
    """Message class 'RobotTF_Response'."""

    __slots__ = [
        '_positionviabase',
    ]

    _fields_and_field_types = {
        'positionviabase': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.positionviabase = kwargs.get('positionviabase', Point())

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
        if self.positionviabase != other.positionviabase:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def positionviabase(self):
        """Message field 'positionviabase'."""
        return self._positionviabase

    @positionviabase.setter
    def positionviabase(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'positionviabase' field must be a sub message of type 'Point'"
        self._positionviabase = value


class Metaclass_RobotTF(type):
    """Metaclass of service 'RobotTF'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cocoa_kinematics_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cocoa_kinematics_interfaces.srv.RobotTF')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robot_tf

            from cocoa_kinematics_interfaces.srv import _robot_tf
            if _robot_tf.Metaclass_RobotTF_Request._TYPE_SUPPORT is None:
                _robot_tf.Metaclass_RobotTF_Request.__import_type_support__()
            if _robot_tf.Metaclass_RobotTF_Response._TYPE_SUPPORT is None:
                _robot_tf.Metaclass_RobotTF_Response.__import_type_support__()


class RobotTF(metaclass=Metaclass_RobotTF):
    from cocoa_kinematics_interfaces.srv._robot_tf import RobotTF_Request as Request
    from cocoa_kinematics_interfaces.srv._robot_tf import RobotTF_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
