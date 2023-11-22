cmake_minimum_required(VERSION 3.5)

project(ex15-5 LANGUAGES C)

add_executable(ex15-5
    align.c)

include(GNUInstallDirs)
install(TARGETS ex15-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# 设置指定的C++编译器版本是必须的，如果不设置，或者为OFF，则指定版本不可用时，会使用上一版本。
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 指定为C++11 版本
set(CMAKE_CXX_STANDARD 17)
