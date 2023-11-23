cmake_minimum_required(VERSION 3.5)

project(ex16-9 LANGUAGES C)

add_executable(ex16-9
    ifdef.c
)

include(GNUInstallDirs)
install(TARGETS ex16-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
