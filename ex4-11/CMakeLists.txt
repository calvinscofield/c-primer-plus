cmake_minimum_required(VERSION 3.5)

project(ex4-11 LANGUAGES C)

add_executable(ex4-11
    intconv.c)

include(GNUInstallDirs)
install(TARGETS ex4-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
