// THREAD.h
#ifndef THREAD_H
#define THREAD_H

#include <iostream>       // std::cout
#include <thread>         // std::thread

void foo()
{
    std::cout << "Hello from foo" << std::endl;
}

void bar(int x)
{
    std::cout << "Message: "<< x << std::endl;
    std::cout << "Hello from bar" << std::endl;
}

class Thread {

    public:
        int run()
        {
            std::thread first(foo);     // spawn new thread that calls foo()

            std::thread second(bar, 0);  // spawn new thread that calls bar(0)

            std::cout << "main, foo and bar now execute concurrently...\n";

            // synchronize threads:
            first.join();                // pauses until first finishes

            second.join();               // pauses until second finishes

            std::cout << "foo and bar completed.\n";

            return 0;
        }

};

#endif