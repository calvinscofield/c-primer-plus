cmake_minimum_required(VERSION 3.5)

project(ex11-9 LANGUAGES C)

add_executable(ex11-9 fgets3.c)

include(GNUInstallDirs)
install(TARGETS ex11-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
