cmake_minimum_required(VERSION 3.12)
project(Project)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(Project src/main.cpp)
# add_executable(Project src/test.cpp)

set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

# First build:
# 	cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..

# if run error please use:
# 	LD_PRELOAD=/lib/x86_64-linux-gnu/libpthread.so.0 ./Project
