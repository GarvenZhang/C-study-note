# Install script for directory: /Users/garven/codetest/realProject/C语言学习笔记

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/1.hello_world/cmake_install.cmake")
  include("/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/2.1bian_liang/cmake_install.cmake")
  include("/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/2.2shu_ju_lei_xing/cmake_install.cmake")
  include("/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/2.3sheng_ming_he_shi_yong_bian_liang/cmake_install.cmake")
  include("/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/2.4shu_ru_shu_chu_han_shu_he_zhuan_huan_zi_fu/cmake_install.cmake")
  include("/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/2.5ji_da_ji_ben_yun_suan_fu/cmake_install.cmake")
  include("/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/2.6shu_zu/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/garven/codetest/realProject/C语言学习笔记/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
