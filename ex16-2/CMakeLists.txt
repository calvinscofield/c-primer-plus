cmake_minimum_required(VERSION 3.5)

project(ex16-2 LANGUAGES C)

add_executable(ex16-2
    mac_arg.c)

include(GNUInstallDirs)
install(TARGETS ex16-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
