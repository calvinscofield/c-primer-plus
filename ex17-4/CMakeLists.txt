cmake_minimum_required(VERSION 3.5)

project(ex17-4 LANGUAGES C)

add_executable(ex17-4
    films3.c list.c list.h)

include(GNUInstallDirs)
install(TARGETS ex17-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
