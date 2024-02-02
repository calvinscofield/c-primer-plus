cmake_minimum_required(VERSION 3.5)

project(ex7-3 LANGUAGES C)

add_executable(ex7-3 cypher2.c)

include(GNUInstallDirs)
install(TARGETS ex7-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
