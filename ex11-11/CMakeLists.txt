cmake_minimum_required(VERSION 3.5)

project(ex11-11 LANGUAGES C)

add_executable(ex11-11 scan_str.c)

include(GNUInstallDirs)
install(TARGETS ex11-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
