cmake_minimum_required(VERSION 3.5)

project(ex12-13 LANGUAGES C)

add_executable(ex12-13
    diceroll.h manydice.c
    diceroll.c


)

include(GNUInstallDirs)
install(TARGETS ex12-13
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
