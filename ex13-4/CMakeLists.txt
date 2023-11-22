cmake_minimum_required(VERSION 3.5)

project(ex13-4 LANGUAGES C)

add_executable(ex13-4
    reverse.c )

include(GNUInstallDirs)
install(TARGETS ex13-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
