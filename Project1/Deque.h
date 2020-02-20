// DEQUEUE.h
#ifndef DEQUEUE_H   
#define DEQUEUE_H


#include <iostream>  
#include <deque>  


class Deque
{
    public:
        int run()
        {
            std::deque<int> first = { 1,2,3,4 };

            std::deque<int> second;

            std::deque<int>::iterator itr = second.begin();

            second.assign(first.begin(), first.end());

            for (itr = second.begin(); itr != second.end(); ++itr)
            {
                std::cout << *itr << " ";
            }

            std::cout << std::endl;

            return 0;
        }

};


#endif