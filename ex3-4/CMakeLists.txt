cmake_minimum_required(VERSION 3.5)

project(ex3-4 LANGUAGES C)

add_executable(ex3-4
    print2.c)

include(GNUInstallDirs)
install(TARGETS ex3-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
