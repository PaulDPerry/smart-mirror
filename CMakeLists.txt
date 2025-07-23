cmake_minimum_required(VERSION 3.10)
project(SmartMirrorApp)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

# Automatically find all .cpp files in src/
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Build the executable
add_executable(smart-mirror ${SOURCES})

#copy config/assets into the build directory
configure_file(config.json ${CMAKE_CURRENT_BINARY_DIR}/config.json COPYONLY)
file(COPY assets/ DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/assets/)
