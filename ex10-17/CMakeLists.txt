cmake_minimum_required(VERSION 3.5)

project(ex10-17 LANGUAGES C)

add_executable(ex10-17 array2d.c)

include(GNUInstallDirs)
install(TARGETS ex10-17
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
