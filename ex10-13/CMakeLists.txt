cmake_minimum_required(VERSION 3.5)

project(ex10-13 LANGUAGES C)

add_executable(ex10-13 ptr_ops.c)

include(GNUInstallDirs)
install(TARGETS ex10-13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
