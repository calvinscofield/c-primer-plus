cmake_minimum_required(VERSION 3.5)

project(ex3-9 LANGUAGES C)

add_executable(ex3-9 main.c)

include(GNUInstallDirs)
install(TARGETS ex3-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
