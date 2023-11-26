cmake_minimum_required(VERSION 3.5)

project(ex17-2 LANGUAGES C)

add_executable(ex17-2
    films2.c)

include(GNUInstallDirs)
install(TARGETS ex17-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
