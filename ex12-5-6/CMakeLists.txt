cmake_minimum_required(VERSION 3.5)

project(ex12-5-6 LANGUAGES C)

add_executable(ex12-5-6 parta.c
    partb.c)

include(GNUInstallDirs)
install(TARGETS ex12-5-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
