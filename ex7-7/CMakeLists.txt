cmake_minimum_required(VERSION 3.5)

project(ex7-7 LANGUAGES C)

add_executable(ex7-7 wordcnt.c)

include(GNUInstallDirs)
install(TARGETS ex7-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
