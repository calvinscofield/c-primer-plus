cmake_minimum_required(VERSION 3.5)

project(ex11-26 LANGUAGES C)

add_executable(ex11-26 copy2.c)

include(GNUInstallDirs)
install(TARGETS ex11-26
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
