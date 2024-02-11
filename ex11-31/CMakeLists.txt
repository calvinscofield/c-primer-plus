cmake_minimum_required(VERSION 3.5)

project(ex11-31 LANGUAGES C)

add_executable(ex11-31 repeat.c)

include(GNUInstallDirs)
install(TARGETS ex11-31
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
