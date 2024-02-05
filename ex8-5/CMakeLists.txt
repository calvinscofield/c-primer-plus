cmake_minimum_required(VERSION 3.5)

project(ex8-5 LANGUAGES C)

add_executable(ex8-5 showchar1.c)

include(GNUInstallDirs)
install(TARGETS ex8-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
