cmake_minimum_required(VERSION 3.5)

project(ex14-13 LANGUAGES C)

add_executable(ex14-13
    funds4.c)

include(GNUInstallDirs)
install(TARGETS ex14-13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
