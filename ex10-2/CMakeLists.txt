cmake_minimum_required(VERSION 3.5)

project(ex10-2 LANGUAGES C)

add_executable(ex10-2 no_data.c)

include(GNUInstallDirs)
install(TARGETS ex10-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
