cmake_minimum_required(VERSION 3.5)

project(ex4-2 LANGUAGES C)

add_executable(ex4-2
    praise1.c)

include(GNUInstallDirs)
install(TARGETS ex4-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
