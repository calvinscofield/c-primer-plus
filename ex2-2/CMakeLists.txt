cmake_minimum_required(VERSION 3.5)

project(ex2-2 LANGUAGES C)

add_executable(ex2-2
    fathm_ft.c)

include(GNUInstallDirs)
install(TARGETS ex2-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
