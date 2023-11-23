cmake_minimum_required(VERSION 3.5)

project(ex16-4 LANGUAGES C)

add_executable(ex16-4
    glue.c)

include(GNUInstallDirs)
install(TARGETS ex16-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
