cmake_minimum_required(VERSION 3.5)

project(ex6-19 LANGUAGES C)

add_executable(ex6-19 main.c)

include(GNUInstallDirs)
install(TARGETS ex6-19
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
