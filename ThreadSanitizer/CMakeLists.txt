

 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")
 add_subdirectory(thread2)
add_executable(thread thread.cpp)