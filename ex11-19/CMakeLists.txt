cmake_minimum_required(VERSION 3.5)

project(ex11-19 LANGUAGES C)

add_executable(ex11-19 join_chk.c)

include(GNUInstallDirs)
install(TARGETS ex11-19
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
