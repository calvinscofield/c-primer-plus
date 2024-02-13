cmake_minimum_required(VERSION 3.5)

project(ex12-10 LANGUAGES C)

add_executable(ex12-10
    r_drive1.c s_and_r.c)

include(GNUInstallDirs)
install(TARGETS ex12-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
