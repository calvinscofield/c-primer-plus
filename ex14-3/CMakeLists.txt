cmake_minimum_required(VERSION 3.5)

project(ex14-3 LANGUAGES C)

add_executable(ex14-3
    friend.c)

include(GNUInstallDirs)
install(TARGETS ex14-3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
