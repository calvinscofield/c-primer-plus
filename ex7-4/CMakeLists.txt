cmake_minimum_required(VERSION 3.5)

project(ex7-4 LANGUAGES C)

add_executable(ex7-4 electric.c)

include(GNUInstallDirs)
install(TARGETS ex7-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
