cmake_minimum_required(VERSION 3.5)

project(ex9-9 LANGUAGES C)

add_executable(ex9-9
    hotel.c hotel.h usehotel.c)

include(GNUInstallDirs)
install(TARGETS ex9-9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
