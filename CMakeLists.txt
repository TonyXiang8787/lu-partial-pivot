cmake_minimum_required (VERSION 3.23)


project (lu_partial_pivot)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_VISIBILITY_PRESET hidden)

find_package(Eigen3 CONFIG REQUIRED)


add_executable(lu_partial_pivot main.cpp)

target_link_libraries(lu_partial_pivot
	PRIVATE Eigen3::Eigen
)

