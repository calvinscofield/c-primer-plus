cmake_minimum_required(VERSION 3.5)

project(ex11-29 LANGUAGES C)

add_executable(ex11-29 main.c)

include(GNUInstallDirs)
install(TARGETS ex11-29
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
