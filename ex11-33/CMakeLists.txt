cmake_minimum_required(VERSION 3.5)

project(ex11-33 LANGUAGES C)

add_executable(ex11-33 main.c)

include(GNUInstallDirs)
install(TARGETS ex11-33
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
