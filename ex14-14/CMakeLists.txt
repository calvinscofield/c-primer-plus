cmake_minimum_required(VERSION 3.5)

project(ex14-14 LANGUAGES C)

add_executable(ex14-14
    booksave.c)

include(GNUInstallDirs)
install(TARGETS ex14-14
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
