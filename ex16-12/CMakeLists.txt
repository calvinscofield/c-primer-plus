cmake_minimum_required(VERSION 3.5)

project(ex16-12 LANGUAGES C)

message( STATUS ${CMAKE_SYSTEM_NAME} " - " ${CMAKE_C_COMPILER} " - " ${CMAKE_C_COMPILER_ID})

if(CMAKE_C_COMPILER_ID MATCHES "MSVC")
    message( STATUS ${CMAKE_C_COMPILER} " - enable /std:c17")
    set(CMAKE_C_STANDARD 17)
endif()

add_executable(ex16-12
    predef.c)

include(GNUInstallDirs)
install(TARGETS ex16-12
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
