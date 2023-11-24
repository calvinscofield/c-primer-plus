cmake_minimum_required(VERSION 3.5)

project(ex16-17 LANGUAGES C)

add_executable(ex16-17
    qsorter.c)

include(GNUInstallDirs)
install(TARGETS ex16-17
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
