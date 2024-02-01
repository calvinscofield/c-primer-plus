cmake_minimum_required(VERSION 3.5)

project(ex6-9 LANGUAGES C)

add_executable(ex6-9
    boolean.c)

include(GNUInstallDirs)
install(TARGETS ex6-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
