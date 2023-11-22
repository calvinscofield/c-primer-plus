cmake_minimum_required(VERSION 3.5)

project(ex10-10 LANGUAGES C)

add_executable(ex10-10 main.c)

include(GNUInstallDirs)
install(TARGETS ex10-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
