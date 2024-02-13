cmake_minimum_required(VERSION 3.5)

project(ex12-1 LANGUAGES C)

add_executable(ex12-1 hiding.c)

include(GNUInstallDirs)
install(TARGETS ex12-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
