cmake_minimum_required(VERSION 3.5)

project(ex10-4 LANGUAGES C)

add_executable(ex10-4 day_mon2.c)

include(GNUInstallDirs)
install(TARGETS ex10-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
