cmake_minimum_required(VERSION 3.5)

project(ex15-4 LANGUAGES C)

add_executable(ex15-4
    dualview.c)

include(GNUInstallDirs)
install(TARGETS ex15-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
