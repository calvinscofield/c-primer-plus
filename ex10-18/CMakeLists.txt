cmake_minimum_required(VERSION 3.5)

project(ex10-18 LANGUAGES C)

add_executable(ex10-18 main.c)

include(GNUInstallDirs)
install(TARGETS ex10-18
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
