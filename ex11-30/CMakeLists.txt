cmake_minimum_required(VERSION 3.5)

project(ex11-30 LANGUAGES C)

add_executable(ex11-30 mod_str.c)

include(GNUInstallDirs)
install(TARGETS ex11-30
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
