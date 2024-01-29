cmake_minimum_required(VERSION 3.5)

project(ex4-16 LANGUAGES C)

add_executable(ex4-16
    varwid.c)

include(GNUInstallDirs)
install(TARGETS ex4-16
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
