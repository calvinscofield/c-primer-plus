cmake_minimum_required(VERSION 3.5)

project(ex3-5 LANGUAGES C)

add_executable(ex3-5
    charcode.c)

include(GNUInstallDirs)
install(TARGETS ex3-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
