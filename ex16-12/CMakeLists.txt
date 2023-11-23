cmake_minimum_required(VERSION 3.5)

project(ex16-12 LANGUAGES C)

add_executable(ex16-12
    predef.c)

include(GNUInstallDirs)
install(TARGETS ex16-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
