cmake_minimum_required(VERSION 3.5)

project(ex14-11 LANGUAGES C)

add_executable(ex14-11
    complit.c)

include(GNUInstallDirs)
install(TARGETS ex14-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
