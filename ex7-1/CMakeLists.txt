cmake_minimum_required(VERSION 3.5)

project(ex7-1 LANGUAGES C)

add_executable(ex7-1 colddays.c)

include(GNUInstallDirs)
install(TARGETS ex7-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
