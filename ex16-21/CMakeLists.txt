cmake_minimum_required(VERSION 3.5)

project(ex16-21 LANGUAGES C)

add_executable(ex16-21
    varargs.c)

include(GNUInstallDirs)
install(TARGETS ex16-21
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
