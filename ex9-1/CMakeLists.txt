cmake_minimum_required(VERSION 3.5)

project(ex9-1 LANGUAGES C)

add_executable(ex9-1 lethead1.c)

include(GNUInstallDirs)
install(TARGETS ex9-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
