#include <iostream>
#include <thread>

void thread_function()
{
    for (int i = -100; i < 0; i++)
        std::cout << "thread function: " << i << "\n";
}

int main()
{
    std::thread t(&thread_function);
    for (int i = 0; i < 100; i++)
        std::cout << "main thread: " << i << "\n";
    t.join();
    return 0;
}
