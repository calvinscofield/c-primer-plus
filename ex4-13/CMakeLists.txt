cmake_minimum_required(VERSION 3.5)

project(ex4-13 LANGUAGES C)

add_executable(ex4-13 main.c)

include(GNUInstallDirs)
install(TARGETS ex4-13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
