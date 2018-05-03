
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -O -g")

add_executable(UAS UAS.cpp)