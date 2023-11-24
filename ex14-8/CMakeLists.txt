cmake_minimum_required(VERSION 3.5)

project(ex14-8 LANGUAGES C)

add_executable(ex14-8
    names1.c)

include(GNUInstallDirs)
install(TARGETS ex14-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
