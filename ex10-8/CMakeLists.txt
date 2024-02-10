cmake_minimum_required(VERSION 3.5)

project(ex10-8 LANGUAGES C)

add_executable(ex10-8 pnt_add.c)

include(GNUInstallDirs)
install(TARGETS ex10-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
