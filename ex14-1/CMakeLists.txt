cmake_minimum_required(VERSION 3.5)

project(ex14-1 LANGUAGES C)

add_executable(ex14-1
    book.c)

include(GNUInstallDirs)
install(TARGETS ex14-1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
