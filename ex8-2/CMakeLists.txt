cmake_minimum_required(VERSION 3.5)

project(ex8-2 LANGUAGES C)

add_executable(ex8-2 main.c)

include(GNUInstallDirs)
install(TARGETS ex8-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
