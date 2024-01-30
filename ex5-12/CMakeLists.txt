cmake_minimum_required(VERSION 3.5)

project(ex5-12 LANGUAGES C)

add_executable(ex5-12
    bottles.c)

include(GNUInstallDirs)
install(TARGETS ex5-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
