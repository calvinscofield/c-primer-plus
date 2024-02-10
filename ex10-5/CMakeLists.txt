cmake_minimum_required(VERSION 3.5)

project(ex10-5 LANGUAGES C)

add_executable(ex10-5 designate.c)

include(GNUInstallDirs)
install(TARGETS ex10-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
