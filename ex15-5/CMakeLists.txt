cmake_minimum_required(VERSION 3.5)

project(ex15-5 LANGUAGES C)

add_executable(ex15-5
    align.c
)

include(GNUInstallDirs)
install(TARGETS ex15-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
