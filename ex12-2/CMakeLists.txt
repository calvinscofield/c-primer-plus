cmake_minimum_required(VERSION 3.5)

project(ex12-2 LANGUAGES C)

add_executable(ex12-2 forc99.c)

include(GNUInstallDirs)
install(TARGETS ex12-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
