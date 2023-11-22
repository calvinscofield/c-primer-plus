cmake_minimum_required(VERSION 3.5)

project(ex12-14 LANGUAGES C)

add_executable(ex12-14 dyn_arr.c)

include(GNUInstallDirs)
install(TARGETS ex12-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
