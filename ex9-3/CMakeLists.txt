cmake_minimum_required(VERSION 3.5)

project(ex9-3 LANGUAGES C)

add_executable(ex9-3 main.c)

include(GNUInstallDirs)
install(TARGETS ex9-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
