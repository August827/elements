cmake_minimum_required(VERSION 3.14)

project(DataSetCatalog LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 输出路径
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}../../../build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}../../../build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}../../../build)


find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Gui)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Gui)

add_library(DataSetCatalog SHARED
  DataSetCatalog_global.h
  datasetcatalog.cpp
  datasetcatalog.h
)

target_link_libraries(DataSetCatalog PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(DataSetCatalog PRIVATE Qt6::Gui)

target_compile_definitions(DataSetCatalog PRIVATE DATASETCATALOG_LIBRARY)
