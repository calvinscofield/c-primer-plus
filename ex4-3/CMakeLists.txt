cmake_minimum_required(VERSION 3.5)

project(ex4-3 LANGUAGES C)

add_executable(ex4-3
    praise2.c)

include(GNUInstallDirs)
install(TARGETS ex4-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
