cmake_minimum_required(VERSION 3.5)

project(ex16-16 LANGUAGES C)

add_executable(ex16-16 byebye.c)

include(GNUInstallDirs)
install(TARGETS ex16-16
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
