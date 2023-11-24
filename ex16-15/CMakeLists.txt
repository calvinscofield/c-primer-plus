cmake_minimum_required(VERSION 3.5)

project(ex16-15 LANGUAGES C)

if(CMAKE_C_COMPILER_ID MATCHES "MSVC")
    message( STATUS ${CMAKE_C_COMPILER} " - enable /std:c17")
    set(CMAKE_C_STANDARD 17)
endif()

add_executable(ex16-15
    generic.c)

include(GNUInstallDirs)
install(TARGETS ex16-15
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
