cmake_minimum_required(VERSION 3.5)

project(ex5-7 LANGUAGES C)

add_executable(ex5-7
    rules.c)

include(GNUInstallDirs)
install(TARGETS ex5-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
