cmake_minimum_required(VERSION 3.5)

project(ex12-3 LANGUAGES C)

add_executable(ex12-3 loc_stat.c)

include(GNUInstallDirs)
install(TARGETS ex12-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
