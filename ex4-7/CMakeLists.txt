cmake_minimum_required(VERSION 3.5)

project(ex4-7 LANGUAGES C)

add_executable(ex4-7
    width.c)

include(GNUInstallDirs)
install(TARGETS ex4-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
