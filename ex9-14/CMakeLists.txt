cmake_minimum_required(VERSION 3.5)

project(ex9-14 LANGUAGES C)

add_executable(ex9-14 swap2.c)

include(GNUInstallDirs)
install(TARGETS ex9-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
