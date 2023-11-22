cmake_minimum_required(VERSION 3.5)

project(ex5-3 LANGUAGES C)

add_executable(ex5-3 main.c)

include(GNUInstallDirs)
install(TARGETS ex5-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
