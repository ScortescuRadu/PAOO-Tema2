cmake_minimum_required(VERSION 3.26)
project(PAOO-Tema2)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(Student)
add_executable(PAOO-Tema2 main.cpp
)

target_link_libraries(PAOO-Tema2 Student)

target_include_directories(PAOO-Tema2 PUBLIC
        "${PROJECT_BINARY_DIR}"
        "${PROJECT_SOURCE_DIR}/Student"
)