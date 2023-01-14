cmake_minimum_required(VERSION 3.0)
project(puk)

set(CMAKE_CXX_STANDARD 17)
set(SFML_DIR "${CMAKE_SOURCE_DIR}/SFML-2.5.1/lib/cmake/SFML")

add_executable(puk game.cpp)

find_package(SFML 2.5 COMPONENTS graphics audio window system REQUIRED)
target_link_libraries(puk sfml-graphics sfml-audio sfml-window sfml-system)