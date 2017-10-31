cmake_minimum_required(VERSION 3.8)
project(Adapter_Pattern)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Target.cpp Adapter.cpp Adaptee.cpp Target.h Adapter.cpp Adapter.h Adaptee.cpp Adaptee.h)
add_executable(Adapter_Pattern ${SOURCE_FILES})