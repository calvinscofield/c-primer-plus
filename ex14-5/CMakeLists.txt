cmake_minimum_required(VERSION 3.5)

project(ex14-5 LANGUAGES C)

add_executable(ex14-5
    funds1.c)

include(GNUInstallDirs)
install(TARGETS ex14-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
