cmake_minimum_required(VERSION 3.5)

project(ex8-3 LANGUAGES C)

add_executable(ex8-3 file_eof.c)

include(GNUInstallDirs)
install(TARGETS ex8-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
