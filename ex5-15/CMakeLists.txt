cmake_minimum_required(VERSION 3.5)

project(ex5-15 LANGUAGES C)

add_executable(ex5-15
    pound.c)

include(GNUInstallDirs)
install(TARGETS ex5-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
