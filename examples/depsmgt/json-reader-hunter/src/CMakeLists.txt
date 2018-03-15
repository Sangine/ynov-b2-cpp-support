cmake_minimum_required(VERSION 3.0)
include("cmake/HunterGate.cmake")

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.20.21.tar.gz"
    SHA1 "36bc6c263eb173697724e00adac8add4b3e52a31"
)

project(JsonReader)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

hunter_add_package(nlohmann_json)
find_package(nlohmann_json CONFIG REQUIRED)

add_executable(JsonReader JsonReader.cxx)
target_link_libraries(JsonReader nlohmann_json)
