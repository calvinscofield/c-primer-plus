cmake_minimum_required(VERSION 3.5)

project(ex11-25 LANGUAGES C)

add_executable(ex11-25 copy1.c)

include(GNUInstallDirs)
install(TARGETS ex11-25
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
