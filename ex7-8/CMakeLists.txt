cmake_minimum_required(VERSION 3.5)

project(ex7-8 LANGUAGES C)

add_executable(ex7-8 paint.c)

include(GNUInstallDirs)
install(TARGETS ex7-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
