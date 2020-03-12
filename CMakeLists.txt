cmake_minimum_required(VERSION 3.16 FATAL_ERROR)
project(TestApp VERSION 1.0 LANGUAGES C CXX)

include(GNUInstallDirs)

add_executable(app)
target_sources(app PRIVATE src/TestApp.cpp)
target_include_directories(app PRIVATE include)

target_compile_options(app PRIVATE -Wall -O2)
target_compile_features(app PRIVATE cxx_std_17)

if(${build_logging})
target_compile_definitions(app PRIVATE BUILD_LOGGING=1)
endif()

find_package(Sempervirens REQUIRED)
target_link_libraries(app PRIVATE Sempervirens::Sempervirens)


