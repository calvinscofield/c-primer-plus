cmake_minimum_required(VERSION 3.5)

project(ex16-11 LANGUAGES C)

add_executable(ex16-11
    doubincl.c names.h)

include(GNUInstallDirs)
install(TARGETS ex16-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
