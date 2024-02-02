cmake_minimum_required(VERSION 3.5)

project(ex7-2 LANGUAGES C)

add_executable(ex7-2 cypher1.c)

include(GNUInstallDirs)
install(TARGETS ex7-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
