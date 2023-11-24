cmake_minimum_required(VERSION 3.5)

project(ex14-4 LANGUAGES C)

add_executable(ex14-4
    friends.c)

include(GNUInstallDirs)
install(TARGETS ex14-4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
