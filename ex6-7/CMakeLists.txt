cmake_minimum_required(VERSION 3.5)

project(ex6-7 LANGUAGES C)

add_executable(ex6-7
    truth.c)

include(GNUInstallDirs)
install(TARGETS ex6-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
