cmake_minimum_required(VERSION 3.5)

project(ex5-2 LANGUAGES C)

add_executable(ex5-2
    shoes2.c)

include(GNUInstallDirs)
install(TARGETS ex5-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
