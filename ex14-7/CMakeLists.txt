cmake_minimum_required(VERSION 3.5)

project(ex14-7 LANGUAGES C)

add_executable(ex14-7
    funds3.c)

include(GNUInstallDirs)
install(TARGETS ex14-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
