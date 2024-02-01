cmake_minimum_required(VERSION 3.5)

project(ex6-5 LANGUAGES C)

add_executable(ex6-5
    cmpflt.c)

include(GNUInstallDirs)
install(TARGETS ex6-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
