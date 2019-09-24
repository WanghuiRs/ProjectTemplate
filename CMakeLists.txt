# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.1)

# 项目信息
project("Temp")

# 设置编译器
set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

# include路径，存放头文件
include_directories(
  ${PROJECT_SOURCE_DIR}/include
)

# 添加c++编译选项
add_compile_options(-std=c++11)

# 设置可执行文件生成路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

# 添加所有源文件, src放.cpp文件
aux_source_directory(. DIR_SRCS)
aux_source_directory(./src DIR_SRCS)

# 指定生成目标
add_executable(Temp ${DIR_SRCS})