cmake_minimum_required(VERSION 3.5)

project(ex6-10 LANGUAGES C)

add_executable(ex6-10
    sweetie1.c)

include(GNUInstallDirs)
install(TARGETS ex6-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
