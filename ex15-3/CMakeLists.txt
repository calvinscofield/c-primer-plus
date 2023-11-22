cmake_minimum_required(VERSION 3.5)

project(ex15-3 LANGUAGES C)

add_executable(ex15-3
    fields.c)

include(GNUInstallDirs)
install(TARGETS ex15-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
