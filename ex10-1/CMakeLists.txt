cmake_minimum_required(VERSION 3.5)

project(ex10-1 LANGUAGES C)

add_executable(ex10-1 day_mon1.c)

include(GNUInstallDirs)
install(TARGETS ex10-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
