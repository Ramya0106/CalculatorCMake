cmake_minimum_required(VERSION "3.16.3")
set(CMAKE_CXX_SANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(calculator VERSION 1.0)

#static library linking
add_library(calcy SHARED src/Calcy.cpp)

#target_include_directories(calcy PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/include)
#file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(calculator Main.cpp)

#target_include_directories(calculator PUBLIC)
target_link_libraries(calculator PUBLIC calcy)

