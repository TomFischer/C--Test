# Specify minimum CMake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# Project name
PROJECT( C++Test )

IF(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_GNUCC)
        IF( NOT CMAKE_BUILD_TYPE STREQUAL "Debug" )
                MESSAGE(STATUS "Set GCC release flags")
                SET(CMAKE_CXX_FLAGS "-O3 -DNDEBUG")
        ENDIF()
        # -g
        SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-deprecated -Wall -Wextra -fno-nonansi-builtins")
        ADD_DEFINITIONS(
                -DGCC
        )
        OPTION (PROFILE "Enables compiling with flags set for profiling with gprof." OFF)
        IF (PROFILE)
                SET(PROFILE_FLAGS "-pg -fno-omit-frame-pointer -O2 -DNDEBUG -fno-inline-functions -fno-inline-functions-called-once -fno-optimize-sibling-calls")
                SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${PROFILE_FLAGS}")
                SET(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${PROFILE_FLAGS}ctest")
        ENDIF (PROFILE)
ENDIF(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_COMPILER_IS_GNUCC)

ADD_SUBDIRECTORY(CopyConstructorAndCo)
ADD_SUBDIRECTORY(Inheritance)
ADD_SUBDIRECTORY(InheritanceAndMemoryConsumption)
ADD_SUBDIRECTORY(InitializerLists)

# Set build directories
SET( EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin )
SET( LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib )

