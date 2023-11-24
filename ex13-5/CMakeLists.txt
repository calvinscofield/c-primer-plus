cmake_minimum_required(VERSION 3.5)

project(ex13-5 LANGUAGES C)

add_executable(ex13-5

    append.c)

include(GNUInstallDirs)
install(TARGETS ex13-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
