cmake_minimum_required(VERSION 3.5)

project(ex4-8 LANGUAGES C)

add_executable(ex4-8
    floats.c)

include(GNUInstallDirs)
install(TARGETS ex4-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
