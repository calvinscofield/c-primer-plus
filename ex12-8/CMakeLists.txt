cmake_minimum_required(VERSION 3.5)

project(ex12-8 LANGUAGES C)

add_executable(ex12-8
    ../12.8/r_drive0.c
    ../12.7/rand0.c )

include(GNUInstallDirs)
install(TARGETS ex12-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
