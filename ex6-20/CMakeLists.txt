cmake_minimum_required(VERSION 3.5)

project(ex6-20 LANGUAGES C)

add_executable(ex6-20 power.c)

include(GNUInstallDirs)
install(TARGETS ex6-20
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
