cmake_minimum_required(VERSION 3.5)

project(ex4-14 LANGUAGES C)

add_executable(ex4-14 main.c)

include(GNUInstallDirs)
install(TARGETS ex4-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
