cmake_minimum_required(VERSION 3.5)

project(ex5-9 LANGUAGES C)

add_executable(ex5-9
    min_sec.c)

include(GNUInstallDirs)
install(TARGETS ex5-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
