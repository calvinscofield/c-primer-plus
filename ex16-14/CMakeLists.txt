cmake_minimum_required(VERSION 3.5)

project(ex16-14 LANGUAGES C)

add_executable(ex16-14
    rect_pol.c)

include(GNUInstallDirs)
install(TARGETS ex16-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
