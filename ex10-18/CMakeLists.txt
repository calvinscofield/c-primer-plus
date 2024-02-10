# msvc好像不支持变长数组（VLA），请用其他编译器
cmake_minimum_required(VERSION 3.5)

project(ex10-18 LANGUAGES C)

add_executable(ex10-18 vararr2d.c)

include(GNUInstallDirs)
install(TARGETS ex10-18
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
