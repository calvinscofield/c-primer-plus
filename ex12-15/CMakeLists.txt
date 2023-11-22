cmake_minimum_required(VERSION 3.5)

project(ex12-15 LANGUAGES C)

add_executable(ex12-15
    where.c)

include(GNUInstallDirs)
install(TARGETS ex12-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
