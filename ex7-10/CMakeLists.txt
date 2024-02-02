cmake_minimum_required(VERSION 3.5)

project(ex7-10 LANGUAGES C)

add_executable(ex7-10 break.c)

include(GNUInstallDirs)
install(TARGETS ex7-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
