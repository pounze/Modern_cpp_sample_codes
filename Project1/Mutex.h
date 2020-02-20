// MUTEX.h
#ifndef MUTEX_H
#define MUTEX_H

#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex


std::mutex mtxlock;           // mutex for critical section

void print_block(int n, char c)
{
    // critical section (exclusive access to std::cout signaled by locking mtx):
    mtxlock.lock();

    for (int i = 0; i < n; ++i)
    { 
        std::cout << c; 
    }

    std::cout << '\n';

    mtxlock.unlock();
}

class Mutex
{
    public:
        int run()
        {
            std::thread th1(print_block, 50, '*');

            std::thread th2(print_block, 50, '$');

            th1.join();

            th2.join();

            return 0;
        }
};

#endif