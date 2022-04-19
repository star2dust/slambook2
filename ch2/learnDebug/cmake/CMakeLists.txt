# 声明要求的 cmake 最低版本
cmake_minimum_required(VERSION 2.8)

# 声明一个 cmake 工程
project(HelloSLAM)

# 设置编译模式
set(CMAKE_BUILD_TYPE "Debug")

# 可执行文件输出的存放路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 库文件输出的存放路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 添加头文件搜索路径（相当于g++的-I参数）
include_directories(./include)

# 添加库文件搜索路径（相当于g++的-L参数）
#link_directories(./lib)

# 添加一个可执行程序
# 语法：add_executable( 程序名 源代码文件 )
# add_executable(helloSLAM helloSLAM.cpp)

# 添加hello库
# add_library(hello ./src/libHelloSLAM.cpp)
# 共享库
add_library(hello_shared SHARED ./src/libHelloSLAM.cpp)

# 添加可执行程序调用hello库中函数
add_executable(useHello useHello.cpp)
# 将共享库文件链接到可执行程序上
target_link_libraries(useHello hello_shared)
