cmake_minimum_required(VERSION 3.5)

project(ex11-18 LANGUAGES C)

add_executable(ex11-18 str_cat.c)

include(GNUInstallDirs)
install(TARGETS ex11-18
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
