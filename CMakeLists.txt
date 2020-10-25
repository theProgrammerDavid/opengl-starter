cmake_minimum_required (VERSION 3.10)
project (test)  # change name as required

# add your packages here
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 3.2 REQUIRED)


include_directories(${OPENGL_INCLUDE_DIR} ${GLEW_INCLUDE_DIRS})
include_directories(include)
include_directories(${GLFW_INCLUDE_DIRS})

file(GLOB SOURCES "src/*.cpp")

add_executable(test
    ${SOURCES}
)

SET(GCC_COVERAGE_COMPILE_FLAGS "-std=c++14 -O2")
SET(GCC_COVERAGE_LINK_FLAGS    "")


SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}")
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS}")

set(EXECUTABLE_OUTPUT_PATH "${CMAKE_BINARY_DIR}/bin")

target_link_libraries(test glfw)
target_link_libraries(test ${OPENGL_LIBRARIES} ${GLEW_LIBRARIES})
