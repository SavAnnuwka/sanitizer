cmake_minimum_required(VERSION 3.9)
project(data_race)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -O1 -fno-omit-frame-pointer")

add_subdirectory(AddressSanitizerExampleUseAfterReturn)
add_subdirectory(AddressSanitizerExampleUseAfterScope  )
add_subdirectory(AddressSanitizerExampleStackOutOfBounds  )
add_subdirectory(AddressSanitizerInitializationOrderFiasco  )
add_executable(addr_san addr_san.cpp AddressSanitizerInitializationOrderFiasco/IOF_b.cpp)