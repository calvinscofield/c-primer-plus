cmake_minimum_required(VERSION 3.5)

project(ex14-15 LANGUAGES C)

add_executable(ex14-15
    enum.c)

include(GNUInstallDirs)
install(TARGETS ex14-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
