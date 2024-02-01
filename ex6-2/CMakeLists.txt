cmake_minimum_required(VERSION 3.5)

project(ex6-2 LANGUAGES C)

add_executable(ex6-2
    when.c)

include(GNUInstallDirs)
install(TARGETS ex6-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
