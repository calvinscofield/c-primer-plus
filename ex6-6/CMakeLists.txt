cmake_minimum_required(VERSION 3.5)

project(ex6-6 LANGUAGES C)

add_executable(ex6-6 main.c)

include(GNUInstallDirs)
install(TARGETS ex6-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
