cmake_minimum_required(VERSION 3.5)

project(ex11-1 LANGUAGES C)

add_executable(ex11-1 strings1.c)

include(GNUInstallDirs)
install(TARGETS ex11-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
