cmake_minimum_required(VERSION 3.5)

project(ex6-3 LANGUAGES C)

add_executable(ex6-3
    while1.c)

include(GNUInstallDirs)
install(TARGETS ex6-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
