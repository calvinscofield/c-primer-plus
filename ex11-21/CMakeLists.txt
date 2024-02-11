cmake_minimum_required(VERSION 3.5)

project(ex11-21 LANGUAGES C)

add_executable(ex11-21 compare.c)

include(GNUInstallDirs)
install(TARGETS ex11-21
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
