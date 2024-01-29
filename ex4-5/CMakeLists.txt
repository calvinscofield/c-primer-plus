cmake_minimum_required(VERSION 3.5)

project(ex4-5 LANGUAGES C)

add_executable(ex4-5
    defines.c)

include(GNUInstallDirs)
install(TARGETS ex4-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
