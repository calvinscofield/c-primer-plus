cmake_minimum_required(VERSION 3.5)

project(ex15-2 LANGUAGES C)

add_executable(ex15-2
    invert4.c)

include(GNUInstallDirs)
install(TARGETS ex15-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
