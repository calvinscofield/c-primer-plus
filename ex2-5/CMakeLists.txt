cmake_minimum_required(VERSION 3.5)

project(ex2-5 LANGUAGES C)

add_executable(ex2-5
    stillbad.c)

include(GNUInstallDirs)
install(TARGETS ex2-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
