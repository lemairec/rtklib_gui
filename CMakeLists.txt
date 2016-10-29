cmake_minimum_required(VERSION 2.8)
project(rtklib_gui)

file(GLOB_RECURSE    rtklib_c      lib/*.c)
include_directories(lib)

set(sources ${rtklib_c})

add_executable(str2str ${sources} app/str2str/str2str.c)
add_executable(rtk_agri ${sources} app/rtk_agri/rtk_agri.c)

###
# grouping files for visual studio or xcode
###

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


