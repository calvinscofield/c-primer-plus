cmake_minimum_required(VERSION 3.5)

project(ex11-28 LANGUAGES C)

add_executable(ex11-28 format.c)

include(GNUInstallDirs)
install(TARGETS ex11-28
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
