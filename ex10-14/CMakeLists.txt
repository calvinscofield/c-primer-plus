cmake_minimum_required(VERSION 3.5)

project(ex10-14 LANGUAGES C)

add_executable(ex10-14 main.c)

include(GNUInstallDirs)
install(TARGETS ex10-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
