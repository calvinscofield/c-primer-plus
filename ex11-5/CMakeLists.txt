cmake_minimum_required(VERSION 3.5)

project(ex11-5 LANGUAGES C)

add_executable(ex11-5 p_and_s.c)

include(GNUInstallDirs)
install(TARGETS ex11-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
