cmake_minimum_required(VERSION 3.5)

project(ex6-14 LANGUAGES C)

add_executable(ex6-14 zeno.c)

include(GNUInstallDirs)
install(TARGETS ex6-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
