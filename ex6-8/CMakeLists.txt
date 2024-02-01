cmake_minimum_required(VERSION 3.5)

project(ex6-8 LANGUAGES C)

add_executable(ex6-8
    trouble.c)

include(GNUInstallDirs)
install(TARGETS ex6-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
