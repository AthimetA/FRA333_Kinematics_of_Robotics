#!/usr/bin/env python3
import os
import xacro
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
import sys

def generate_launch_description():

    ### How to get path of a file from "install" directory ###
    #
    ## If our custom package [package_name] consists of a folder [folder_name].
    ## And inside that folder, there is a file name [file_name.extension].
    ## This is how to get full path to the file (in a form of string)
    # package_name = 'cocoa_description'
    # path_to_package = get_package_share_directory(package_name)
    # sub_folder = 'meshes'
    # file_name = 'cocoa_kinematics.rviz'
    # file_path = os.path.join(path_to_package,sub_folder,file_name) 
    
    ## You must build the custom package before. Otherwise, these codes will not find the file
    # in "install" directory

    ### How to run rviz2 ###
    #
    ## With -d rviz_file_path, you can load the previous setting of rviz
    #
    package_name = 'cocoa_description'
    path_to_package = get_package_share_directory(package_name)
    sub_folder = 'config'
    file_name = 'cocoa.rviz'
    rviz_file_path = os.path.join(path_to_package,sub_folder,file_name) 
    print(rviz_file_path)
    rviz = Node(
       package='rviz2',
       executable='rviz2',
       name='rviz',
       arguments=['-d', rviz_file_path],
       output='screen')
    
    ### How to read URDF file ###
    #
    # Assume that you have the correct path [robot_description_path]
    # with open(robot_description_path, 'r') as infp:
    urdf_file_name = 'cocoa.urdf.xacro'
    sub_folder = 'robot'
    urdf = os.path.join(
        get_package_share_directory(package_name)
        ,sub_folder
        ,urdf_file_name)
    with open(urdf, 'r') as infp:
        robot_description = infp.read()
    
    ### How to run robot_state_publisher ###
    #
    # You must have a valid robot_description
    #
    robot_desc_path = os.path.join(get_package_share_directory(
                                package_name), 
                                sub_folder,
                                urdf_file_name)
    robot_description = xacro.process_file(robot_desc_path).toxml()
    
    robot_state_publisher = Node(package='robot_state_publisher',
                                  executable='robot_state_publisher',
                                  name='robot_state_publisher',
                                  output='screen',
                                  parameters=[
                                    {'use_sim_time': False},
                                    {'robot_description': robot_description}
                                  ],
    )

    ### How to add actions to launch description ###
    #
    # You must create an object called "LaunchDescription"
    # and add actions one by one
    #
    # Launch Description
    launch_description = LaunchDescription()
    launch_description.add_action(rviz)
    launch_description.add_action(robot_state_publisher)
    return launch_description

def main(args=None):
    try:
        generate_launch_description()
    except KeyboardInterrupt:
        # quit
        sys.exit()

if __name__ == '__main__':
    main()
    