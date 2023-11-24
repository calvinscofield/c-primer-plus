cmake_minimum_required(VERSION 3.5)

project(ex14-2 LANGUAGES C)

add_executable(ex14-2
    manybook.c)

include(GNUInstallDirs)
install(TARGETS ex14-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
