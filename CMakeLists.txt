cmake_minimum_required(VERSION 3.6)
project(game)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        include/ResourceHolder.h
        include/World.h
        include/SceneGraph.h
        include/Game.h
        include/Commands.h
        include/Player.h
        include/Actions.h

        src/main.cpp
        src/World.cpp
        src/Game.cpp
        src/SceneGraph.cpp
        src/Actions.cpp
        src/Player.cpp
        src/Command.cpp)

add_executable(JavoGame ${SOURCE_FILES})


set(SOURCE_LIB src/World.cpp
        src/Game.cpp
        src/SceneGraph.cpp
        src/Actions.cpp
        src/Player.cpp
        src/Command.cpp)

add_library(JavoLib STATIC ${SOURCE_LIB})


# Define sources and executable
set(EXECUTABLE_NAME "MySFML")
add_executable(${EXECUTABLE_NAME} src/main.cpp)

target_link_libraries(${EXECUTABLE_NAME} JavoLib)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2 REQUIRED system window graphics network audio)
if(SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES})
endif()