cmake_minimum_required(VERSION 3.5)

project(ex5-5 LANGUAGES C)

add_executable(ex5-5
    wheat.c)

include(GNUInstallDirs)
install(TARGETS ex5-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
