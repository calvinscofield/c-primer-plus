cmake_minimum_required(VERSION 3.5)

project(ex6-12 LANGUAGES C)

add_executable(ex6-12 for_cube.c)

include(GNUInstallDirs)
install(TARGETS ex6-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
