cmake_minimum_required(VERSION 3.5)

project(ex4-12 LANGUAGES C)

add_executable(ex4-12
    floatcnv.c)

include(GNUInstallDirs)
install(TARGETS ex4-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
