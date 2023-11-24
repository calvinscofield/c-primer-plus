cmake_minimum_required(VERSION 3.5)

project(ex13-6 LANGUAGES C)

add_executable(ex13-6
    randbin.c)

include(GNUInstallDirs)
install(TARGETS ex13-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
