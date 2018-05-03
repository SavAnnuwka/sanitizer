

 set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=undefined -fsanitize-blacklist=/Users/jetbrains/Documents/CPP_Projects/Google_sanitaizers/UndefinedBehaviour/blacklist -fno-omit-frame-pointer -g")
add_executable(ub.cpp Undefined.cpp)