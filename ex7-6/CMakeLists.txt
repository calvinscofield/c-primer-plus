cmake_minimum_required(VERSION 3.5)

project(ex7-6 LANGUAGES C)

add_executable(ex7-6 chcount.c)

include(GNUInstallDirs)
install(TARGETS ex7-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
