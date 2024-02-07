cmake_minimum_required(VERSION 3.5)

project(ex9-15 LANGUAGES C)

add_executable(ex9-15 swap3.c)

include(GNUInstallDirs)
install(TARGETS ex9-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
