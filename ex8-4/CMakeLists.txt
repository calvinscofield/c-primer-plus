cmake_minimum_required(VERSION 3.5)

project(ex8-4 LANGUAGES C)

add_executable(ex8-4 guess.c)

include(GNUInstallDirs)
install(TARGETS ex8-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
