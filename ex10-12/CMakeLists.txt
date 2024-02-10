cmake_minimum_required(VERSION 3.5)

project(ex10-12 LANGUAGES C)

add_executable(ex10-12 order.c)

include(GNUInstallDirs)
install(TARGETS ex10-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
