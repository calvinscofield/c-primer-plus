cmake_minimum_required(VERSION 3.5)

project(ex8-6 LANGUAGES C)

add_executable(ex8-6 showchar2.c)

include(GNUInstallDirs)
install(TARGETS ex8-6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
