cmake_minimum_required(VERSION 3.5)

project(ex9-9-10-11 LANGUAGES C)

add_executable(ex9-9-10-11 usehotel.c
    hotel.c
    hotel.h)

include(GNUInstallDirs)
install(TARGETS ex9-9-10-11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
