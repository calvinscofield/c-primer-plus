cmake_minimum_required(VERSION 3.5)

project(ex5-4 LANGUAGES C)

add_executable(ex5-4
    squares.c)

include(GNUInstallDirs)
install(TARGETS ex5-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
