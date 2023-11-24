cmake_minimum_required(VERSION 3.5)

project(ex16-19 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
add_executable(ex16-19
    statasrt.c)

include(GNUInstallDirs)
install(TARGETS ex16-19
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
