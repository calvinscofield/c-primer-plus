cmake_minimum_required(VERSION 3.5)

project(ex9-7 LANGUAGES C)

add_executable(ex9-7 main.c)

include(GNUInstallDirs)
install(TARGETS ex9-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
