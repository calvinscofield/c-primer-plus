cmake_minimum_required(VERSION 3.5)

project(ex6-1 LANGUAGES C)

add_executable(ex6-1
    summing.c)

include(GNUInstallDirs)
install(TARGETS ex6-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
