// STACK.h
#ifndef STACK_H
#define STACK_H

#include <iostream>  
#include <stack>  

class Stack
{

	public:
		int run()
		{
            std::stack<int> newstack;

            for (int j = 0; j < 5; j++)
            {
                newstack.push(j);
            }

            std::cout << "Poping the elements out of the stack...";

            while (!newstack.empty())
            {
                std::cout << " " << newstack.top();
                newstack.pop();
            }

            std::cout << std::endl;

            return 0;
		}
};

#endif