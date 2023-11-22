cmake_minimum_required(VERSION 3.5)

project(ex13-1 LANGUAGES C)

add_executable(ex13-1
    count.c)

include(GNUInstallDirs)
install(TARGETS ex13-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
