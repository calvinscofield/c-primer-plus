cmake_minimum_required(VERSION 3.5)

project(ex16-8 LANGUAGES C)

add_executable(ex16-8
    names_st.h name_st.c useheader.c)

include(GNUInstallDirs)
install(TARGETS ex16-8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
