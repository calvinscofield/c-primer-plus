cmake_minimum_required(VERSION 3.5)

project(ex4-1 LANGUAGES C)

add_executable(ex4-1
    talkback.c)

include(GNUInstallDirs)
install(TARGETS ex4-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
