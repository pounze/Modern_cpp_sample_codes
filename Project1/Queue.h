// QUEUE.h
#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>  
#include <queue>  

class Queue
{
	
	public:
		int run()
		{
			std::queue<int> newqueue;

			newqueue.push(24);

			newqueue.push(80);

			newqueue.front() += 20;

			std::cout << "newqueue.front() is modified to " << newqueue.front();

			std::cout << std::endl;

			return 0;
		}
};

#endif