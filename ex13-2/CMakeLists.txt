cmake_minimum_required(VERSION 3.5)

project(ex13-2 LANGUAGES C)

add_executable(ex13-2
    reducto.c)

include(GNUInstallDirs)
install(TARGETS ex13-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
