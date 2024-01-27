cmake_minimum_required(VERSION 3.5)

project(ex1-2 LANGUAGES C)

add_executable(ex1-2
    1.2.c)

include(GNUInstallDirs)
install(TARGETS ex1-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
