cmake_minimum_required(VERSION 3.5)

project(ex9-4 LANGUAGES C)

add_executable(ex9-4 main.c)

include(GNUInstallDirs)
install(TARGETS ex9-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
