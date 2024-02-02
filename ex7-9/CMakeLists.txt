cmake_minimum_required(VERSION 3.5)

project(ex7-9 LANGUAGES C)

add_executable(ex7-9 skippart.c)

include(GNUInstallDirs)
install(TARGETS ex7-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
