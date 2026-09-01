cmake_minimum_required(VERSION 3.19)
project(Instron_4467Full LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(Instron_4467
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
 
    InstronGPIB.h
    InstronGPIB.cpp

    parametros.cpp
    parametros.h		
    parametros.ui

    recursos.qrc
    parametrosensayo.h



)

target_link_libraries(Instron_4467
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS Instron_4467
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET Instron_4467
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
