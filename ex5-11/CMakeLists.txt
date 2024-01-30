cmake_minimum_required(VERSION 3.5)

project(ex5-11 LANGUAGES C)

add_executable(ex5-11
    post_pre.c)

include(GNUInstallDirs)
install(TARGETS ex5-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
