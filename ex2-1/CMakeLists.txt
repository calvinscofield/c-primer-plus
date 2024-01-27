cmake_minimum_required(VERSION 3.5)

project(ex2-1 LANGUAGES C)

add_executable(ex2-1
    first.c)

include(GNUInstallDirs)
install(TARGETS ex2-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
