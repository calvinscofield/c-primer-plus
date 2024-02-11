cmake_minimum_required(VERSION 3.5)

project(ex11-23 LANGUAGES C)

add_executable(ex11-23 quit_chk.c)

include(GNUInstallDirs)
install(TARGETS ex11-23
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
