cmake_minimum_required(VERSION 3.5)

project(ex11-7 LANGUAGES C)

add_executable(ex11-7 fgets1.c)

include(GNUInstallDirs)
install(TARGETS ex11-7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
