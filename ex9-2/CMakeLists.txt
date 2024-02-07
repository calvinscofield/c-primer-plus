cmake_minimum_required(VERSION 3.5)

project(ex9-2 LANGUAGES C)

add_executable(ex9-2 lethead2.c)

include(GNUInstallDirs)
install(TARGETS ex9-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
