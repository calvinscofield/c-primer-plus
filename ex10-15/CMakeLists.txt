cmake_minimum_required(VERSION 3.5)

project(ex10-15 LANGUAGES C)

add_executable(ex10-15 main.c)

include(GNUInstallDirs)
install(TARGETS ex10-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
