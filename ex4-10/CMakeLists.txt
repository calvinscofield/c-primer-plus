cmake_minimum_required(VERSION 3.5)

project(ex4-10 LANGUAGES C)

add_executable(ex4-10
    stringf.c)

include(GNUInstallDirs)
install(TARGETS ex4-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
