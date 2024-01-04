# 指定 CMake 的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(MyProject)

# 创建一个可执行文件
# "${PROJECT_NAME}" 将使用项目名称作为可执行文件名
add_executable(${PROJECT_NAME} main.cpp LinkedList.cpp)

# 指定包含的头文件目录
# 如果你的 .h 文件和 .cpp 文件不在同一个目录，你需要这样做
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
