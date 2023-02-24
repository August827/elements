cmake_minimum_required(VERSION 3.5)

project(elements VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

include_directories("include" "E:\\Vscode_elementsEdit\\DataSetCatalog")
include_directories("include" "E:\\Vscode_elementsEdit\\elements\\subassembly")
LINK_DIRECTORIES("E:\\Vscode_elementsEdit\\elements\\build\\Debug")

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        mainwindow.qrc
        subassembly/subassembly.cpp
        subassembly/subassembly.h
        subassembly/subassembly.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(elements
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
else()
    if(ANDROID)
        add_library(elements SHARED
            ${PROJECT_SOURCES}
        )

    else()
        add_executable(elements
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(elements PRIVATE Qt${QT_VERSION_MAJOR}::Widgets DataSetCatalog.dll)

set_target_properties(elements PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS elements
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(elements)
endif()
