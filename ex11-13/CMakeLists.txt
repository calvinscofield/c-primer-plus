cmake_minimum_required(VERSION 3.5)

project(ex11-13 LANGUAGES C)

add_executable(ex11-13 nono.c)

include(GNUInstallDirs)
install(TARGETS ex11-13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
