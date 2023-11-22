cmake_minimum_required(VERSION 3.5)

project(ex6-13 LANGUAGES C)

add_executable(ex6-13 main.c)

include(GNUInstallDirs)
install(TARGETS ex6-13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
