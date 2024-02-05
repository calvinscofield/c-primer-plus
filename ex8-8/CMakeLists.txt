cmake_minimum_required(VERSION 3.5)

project(ex8-8 LANGUAGES C)

add_executable(ex8-8 menuette.c)

include(GNUInstallDirs)
install(TARGETS ex8-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
