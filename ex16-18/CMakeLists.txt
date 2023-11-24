cmake_minimum_required(VERSION 3.5)

project(ex16-18 LANGUAGES C)

add_executable(ex16-18
    assert.c)

include(GNUInstallDirs)
install(TARGETS ex16-18
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
