cmake_minimum_required(VERSION 3.5)

project(ex14-10 LANGUAGES C)

add_executable(ex14-10
    names3.c)

include(GNUInstallDirs)
install(TARGETS ex14-10
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
