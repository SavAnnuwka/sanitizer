
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -O -g")

add_executable(IOF IOF_a.cpp IOF_b.cpp)