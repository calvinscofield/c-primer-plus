cmake_minimum_required(VERSION 3.5)

project(ex3-10 LANGUAGES C)

add_executable(ex3-10 main.c)

include(GNUInstallDirs)
install(TARGETS ex3-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
