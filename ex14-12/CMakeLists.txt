cmake_minimum_required(VERSION 3.5)

project(ex14-12 LANGUAGES C)

add_executable(ex14-12
    flexmemb.c)

include(GNUInstallDirs)
install(TARGETS ex14-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
