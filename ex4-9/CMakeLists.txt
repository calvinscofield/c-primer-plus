cmake_minimum_required(VERSION 3.5)

project(ex4-9 LANGUAGES C)

add_executable(ex4-9
    flags.c)

include(GNUInstallDirs)
install(TARGETS ex4-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
