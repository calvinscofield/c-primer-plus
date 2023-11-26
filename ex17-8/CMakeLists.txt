cmake_minimum_required(VERSION 3.5)

project(ex17-8 LANGUAGES C)

add_executable(ex17-8
    queue.c queue.h use_q.c)

include(GNUInstallDirs)
install(TARGETS ex17-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
