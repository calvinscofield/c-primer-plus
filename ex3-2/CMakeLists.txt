cmake_minimum_required(VERSION 3.5)

project(ex3-2 LANGUAGES C)

add_executable(ex3-2
    print1.c)

include(GNUInstallDirs)
install(TARGETS ex3-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
