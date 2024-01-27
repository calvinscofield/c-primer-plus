cmake_minimum_required(VERSION 3.5)

project(ex3-3 LANGUAGES C)

add_executable(ex3-3
    bases.c)

include(GNUInstallDirs)
install(TARGETS ex3-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
