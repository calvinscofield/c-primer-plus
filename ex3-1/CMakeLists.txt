cmake_minimum_required(VERSION 3.5)

project(ex3-1 LANGUAGES C)

add_executable(ex3-1
    platinum.c)

include(GNUInstallDirs)
install(TARGETS ex3-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
