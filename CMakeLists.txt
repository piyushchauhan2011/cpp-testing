cmake_minimum_required(VERSION 3.5)
project(BoostNew)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

message(STATUS "start running cmake...")

find_package(Boost COMPONENTS system filesystem unit_test_framework REQUIRED)

if(Boost_FOUND)

    message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
    message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
    message(STATUS "Boost_VERSION: ${Boost_VERSION}")

    include_directories(${Boost_INCLUDE_DIRS})

endif()

set(SOURCE_FILES main.cpp)
add_executable(BoostNew ${SOURCE_FILES})

if(Boost_FOUND)

    target_link_libraries(BoostNew ${Boost_LIBRARIES})

endif()

enable_testing()
add_test(BoostNew test)