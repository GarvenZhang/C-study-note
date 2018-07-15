# CMake: 跨平台的自动化构建系统, 使用一个名为 CMakeLists.txt 的文件来描述构建过程, 可产生标准的构建文件

# cmake_minimum_required(VERSION 版本号): 指定CMake版本
# PROJECT(工程名字): 指定项目工程名
# set(变量 值): 设置变量
# ${xxx}: 引用变量xxx
# add_executable(文件名 ${SOURCE_FILES}): 把 变量 SOURFE_FILES 编译成一个指定 文件名 的 可执行文件
# ADD_SUBDIRECTORY(目录): 指明项目包含的子目录

cmake_minimum_required(VERSION 3.6)
project(C语言学习笔记)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++0x")

ADD_SUBDIRECTORY(1.hello_world)
ADD_SUBDIRECTORY(2.1bian_liang)
ADD_SUBDIRECTORY(2.2shu_ju_lei_xing)
ADD_SUBDIRECTORY(2.3sheng_ming_he_shi_yong_bian_liang)
ADD_SUBDIRECTORY(2.4shu_ru_shu_chu_han_shu_he_zhuan_huan_zi_fu)
ADD_SUBDIRECTORY(2.5ji_da_ji_ben_yun_suan_fu)
ADD_SUBDIRECTORY(2.6shu_zu)
