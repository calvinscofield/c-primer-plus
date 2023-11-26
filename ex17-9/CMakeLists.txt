cmake_minimum_required(VERSION 3.5)

project(ex17-9 LANGUAGES C)

add_executable(ex17-9
    mall.c queue.c queue.h)

include(GNUInstallDirs)
install(TARGETS ex17-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
