cmake_minimum_required(VERSION 3.0)


project(JsonReader)

set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/v0.9/conan.cmake"
                 "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_run(REQUIRES jsonformoderncpp/3.1.2@vthiery/stable
                BASIC_SETUP
                BUILD missing)


find_package(nlohmann_json CONFIG REQUIRED)

add_executable(JsonReader JsonReader.cxx)
target_link_libraries(JsonReader ${CONAN_LIBS})
