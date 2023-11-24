cmake_minimum_required(VERSION 3.5)

project(ex14-9 LANGUAGES C)

add_executable(ex14-9
    names2.c)

include(GNUInstallDirs)
install(TARGETS ex14-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
