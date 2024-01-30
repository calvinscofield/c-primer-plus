cmake_minimum_required(VERSION 3.5)

project(ex5-13 LANGUAGES C)

add_executable(ex5-13
    addemup.c)

include(GNUInstallDirs)
install(TARGETS ex5-13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
