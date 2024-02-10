cmake_minimum_required(VERSION 3.5)

project(ex10-6 LANGUAGES C)

add_executable(ex10-6 bounds.c)

include(GNUInstallDirs)
install(TARGETS ex10-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
