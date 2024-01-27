cmake_minimum_required(VERSION 3.5)

project(ex3-6 LANGUAGES C)

add_executable(ex3-6
    altnames.c)

include(GNUInstallDirs)
install(TARGETS ex3-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
