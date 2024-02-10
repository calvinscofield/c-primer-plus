cmake_minimum_required(VERSION 3.5)

project(ex10-7 LANGUAGES C)

add_executable(ex10-7 rain.c)

include(GNUInstallDirs)
install(TARGETS ex10-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
