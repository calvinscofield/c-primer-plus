cmake_minimum_required(VERSION 3.5)

project(ex7_12 LANGUAGES C)

add_executable(ex7_12 vowels.c)

include(GNUInstallDirs)
install(TARGETS ex7_12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
