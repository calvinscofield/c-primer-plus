cmake_minimum_required(VERSION 3.5)

project(ex17-1 LANGUAGES C)

add_executable(ex17-1
    films1.c)

include(GNUInstallDirs)
install(TARGETS ex17-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
