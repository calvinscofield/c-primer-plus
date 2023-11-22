cmake_minimum_required(VERSION 3.5)

project(ex13-3 LANGUAGES C)

add_executable(ex13-3
    addaword.c)

include(GNUInstallDirs)
install(TARGETS ex13-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
