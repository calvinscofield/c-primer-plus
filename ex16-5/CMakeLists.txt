cmake_minimum_required(VERSION 3.5)

project(ex16-5 LANGUAGES C)

message( STATUS ${CMAKE_SYSTEM_NAME} " - " ${CMAKE_C_COMPILER} " - " ${CMAKE_C_COMPILER_ID})

if(CMAKE_C_COMPILER_ID MATCHES "GNU" AND CMAKE_SYSTEM_NAME MATCHES "Linux")
    message( STATUS ${CMAKE_C_COMPILER} " - linking librarie libm.so")
    link_libraries(m)
endif()


add_executable(ex16-5
    variadic.c)

include(GNUInstallDirs)
install(TARGETS ex16-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)


