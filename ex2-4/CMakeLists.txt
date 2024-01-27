cmake_minimum_required(VERSION 3.5)

project(ex2-4 LANGUAGES C)

add_executable(ex2-4
    nogood.c)

include(GNUInstallDirs)
install(TARGETS ex2-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
