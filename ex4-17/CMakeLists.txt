cmake_minimum_required(VERSION 3.5)

project(ex4-17 LANGUAGES C)

add_executable(ex4-17
    skip2.c)

include(GNUInstallDirs)
install(TARGETS ex4-17
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
