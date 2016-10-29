cmake_minimum_required(VERSION 2.8)
project(rtklib_gui)

file(GLOB_RECURSE    rtklib_c      lib/*.c)
include_directories(lib)

FIND_PACKAGE(Threads)

set(sources ${rtklib_c})
set (CMAKE_EXE_LINKER_FLAGS -lm)

add_executable(str2str ${sources} app/str2str/str2str.c)
target_link_libraries(str2str ${CMAKE_THREAD_LIBS_INIT})

set(rtk_agri_hpp app/rtk_agri/qt/mainwindow.hpp app/rtk_agri/qt/include_qt.hpp app/rtk_agri/qt/optionsbasertk.hpp)
set(rtk_agri_cpp app/rtk_agri/rtk_agri.cpp app/rtk_agri/qt/mainwindow.cpp app/rtk_agri/qt/optionsbasertk.cpp)
set(src_rtk_agri ${rtk_agri_hpp} ${rtk_agri_cpp})

SET(CMAKE_INCLUDE_CURRENT_DIR ON)
ADD_DEFINITIONS(-g -ggdb)
set(CMAKE_AUTOMOC ON)
FIND_PACKAGE(Qt5Core)
add_executable(rtk_agri ${sources} ${src_rtk_agri})
qt5_use_modules(rtk_agri Widgets)
target_link_libraries(rtk_agri ${CMAKE_THREAD_LIBS_INIT})

###
# grouping files for visual studio or xcode
###

set(sources ${sources} app/str2str/str2str.c ${src_rtk_agri})

SET(dirlist "")
FOREACH(file_path ${sources})
GET_FILENAME_COMPONENT(dir_path ${file_path} PATH)
STRING(REPLACE "${PROJECT_SOURCE_DIR}/" "" dir_path2 ${dir_path})
SET(dir_list ${dir_list} ${dir_path2})
ENDFOREACH()
LIST(REMOVE_DUPLICATES dir_list)

foreach(next_ITEM ${dir_list})
file(GLOB   source_ExecutionProvider_source ${next_ITEM}/*)
STRING(REPLACE "/" "\\\\" source_group_path ${next_ITEM})
source_group(${source_group_path} FILES ${source_ExecutionProvider_source})
endforeach(next_ITEM ${MY_SOURCES})


