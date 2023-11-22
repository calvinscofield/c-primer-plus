cmake_minimum_required(VERSION 3.5)

project(ex15-1 LANGUAGES C)

add_executable(ex15-1
    binbit.c
)

include(GNUInstallDirs)
install(TARGETS ex15-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
