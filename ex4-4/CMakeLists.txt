cmake_minimum_required(VERSION 3.5)

project(ex4-4 LANGUAGES C)

add_executable(ex4-4
    pizza.c)

include(GNUInstallDirs)
install(TARGETS ex4-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
