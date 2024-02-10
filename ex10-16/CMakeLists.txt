cmake_minimum_required(VERSION 3.5)

project(ex10-16 LANGUAGES C)

add_executable(ex10-16 zippo2.c)

include(GNUInstallDirs)
install(TARGETS ex10-16
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
