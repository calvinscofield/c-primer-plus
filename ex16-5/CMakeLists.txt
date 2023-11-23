cmake_minimum_required(VERSION 3.5)

project(ex16-5 LANGUAGES C)

#message( SEND_ERROR ${CMAKE_C_COMPILER_ID})
#message( SEND_ERROR ${CMAKE_SYSTEM_NAME})
if(CMAKE_C_COMPILER_ID MATCHES "GNU")
    #message( SEND_ERROR ${CMAKE_C_COMPILER})
    link_libraries(m)
endif()


add_executable(ex16-5
    variadic.c)

include(GNUInstallDirs)
install(TARGETS ex16-5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)


