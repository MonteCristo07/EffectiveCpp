project(Item02_PreferNotDefine)
cmake_minimum_required(VERSION 2.8)

aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})

target_sources(${PROJECT_NAME}
    PUBLIC
        item02.cc)
