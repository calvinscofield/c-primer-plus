cmake_minimum_required(VERSION 3.5)

project(ex8-1 LANGUAGES C)

add_executable(ex8-1 echo.c)

include(GNUInstallDirs)
install(TARGETS ex8-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
