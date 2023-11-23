cmake_minimum_required(VERSION 3.5)

project(ex16-1 LANGUAGES C)

add_executable(ex16-1
    preproc.c)

include(GNUInstallDirs)
install(TARGETS ex16-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
