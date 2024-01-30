cmake_minimum_required(VERSION 3.5)

project(ex5-16 LANGUAGES C)

add_executable(ex5-16
    running.c)

include(GNUInstallDirs)
install(TARGETS ex5-16
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
