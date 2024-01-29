cmake_minimum_required(VERSION 3.5)

project(ex4-15 LANGUAGES C)

add_executable(ex4-15
    input.c)

include(GNUInstallDirs)
install(TARGETS ex4-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
