cmake_minimum_required(VERSION 3.5)

project(ex10-9 LANGUAGES C)

add_executable(ex10-9 day_mon3.c)

include(GNUInstallDirs)
install(TARGETS ex10-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
