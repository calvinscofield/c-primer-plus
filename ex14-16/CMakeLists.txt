cmake_minimum_required(VERSION 3.5)

project(ex14-16 LANGUAGES C)

add_executable(ex14-16
    func_ptr.c)

include(GNUInstallDirs)
install(TARGETS ex14-16
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
