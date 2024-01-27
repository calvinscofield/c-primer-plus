cmake_minimum_required(VERSION 3.5)

project(ex3-8 LANGUAGES C)

add_executable(ex3-8
    typesize.c)

include(GNUInstallDirs)
install(TARGETS ex3-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
