cmake_minimum_required(VERSION 3.5)

project(ex17-12 LANGUAGES C)

add_executable(ex17-12
    petclub.c tree.c tree.h)

include(GNUInstallDirs)
install(TARGETS ex17-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
