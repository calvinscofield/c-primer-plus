cmake_minimum_required(VERSION 3.5)

project(ex1-1 LANGUAGES C)

add_executable(ex1-1
    1.1.c)

include(GNUInstallDirs)
install(TARGETS ex1-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
