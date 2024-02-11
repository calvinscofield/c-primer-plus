cmake_minimum_required(VERSION 3.5)

project(ex11-8 LANGUAGES C)

add_executable(ex11-8 fgets2.c)

include(GNUInstallDirs)
install(TARGETS ex11-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
