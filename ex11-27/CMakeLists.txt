cmake_minimum_required(VERSION 3.5)

project(ex11-27 LANGUAGES C)

add_executable(ex11-27 main.c)

include(GNUInstallDirs)
install(TARGETS ex11-27
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
