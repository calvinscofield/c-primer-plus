cmake_minimum_required(VERSION 3.5)

project(ex11-17 LANGUAGES C)

add_executable(ex11-17 main.c)

include(GNUInstallDirs)
install(TARGETS ex11-17
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
