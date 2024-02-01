cmake_minimum_required(VERSION 3.5)

project(ex6-4 LANGUAGES C)

add_executable(ex6-4
    while2.c)

include(GNUInstallDirs)
install(TARGETS ex6-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
