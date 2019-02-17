cmake_minimum_required(VERSION 2.6.4)

set(UNITY_DIR Unity)
include_directories( ${UNITY_DIR}/src )
include_directories( ${UNITY_DIR}/extras/fixture/src )

# define a variable of project name
set(project_name "unitytest")

# set the project as the startup project
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT ${project_name})

# define a project name
project (${project_name})

# define a variable SRC with file GLOB
file(GLOB SRC *.c ${UNITY_DIR}/src/unity.c ${UNITY_DIR}/extras/fixture/src/unity_fixture.c)

# define sources files of an executable
add_executable(${project_name} ${SRC})
