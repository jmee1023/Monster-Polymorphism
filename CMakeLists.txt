cmake_minimum_required(VERSION 3.14)
project(Project5Alternate)

set(CMAKE_CXX_STANDARD 14)

add_executable(Water_Monster Water_Monster.cpp Water_Monster_Main.cpp Lake_Monster.cpp Sea_Monster.cpp)
add_executable(Water_Monster_Testing Water_Monster.cpp Water_Monster_Testing.cpp Lake_Monster.cpp Sea_Monster.cpp)
add_executable(Darkness_Monster Darkness_Monster.cpp Closet_Monster.cpp Under_Bed_Monster.cpp Darkness_Monster_Main.cpp)
add_executable(Darkness_Monster_Testing Darkness_Monster.cpp Closet_Monster.cpp Darkness_Monster_Testing.cpp Under_Bed_Monster.cpp)
add_executable(Sky_Monster Sky_Monster.cpp Cloud_Monster.cpp Comet_Monster.cpp Sky_Monster_Main.cpp)
add_executable(Sky_Monster_Testing Sky_Monster.cpp Cloud_Monster.cpp Comet_Monster.cpp Sky_Monster_Testing.cpp)

