cmake_minimum_required(VERSION 3.5)

project(ex6-11 LANGUAGES C)

add_executable(ex6-11
    sweetie2.c)

include(GNUInstallDirs)
install(TARGETS ex6-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
