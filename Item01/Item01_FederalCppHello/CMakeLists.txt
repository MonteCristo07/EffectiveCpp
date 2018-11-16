cmake_minimum_required(VERSION 3.3)
cmake_policy(SET CMP0048 NEW)

project(item01)


set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror")

add_executable(item01
                    main.cpp)

#target_compile_options(item01)

#target_sources(item01
#                            )

#target_link_libraries(item01
#                    )
