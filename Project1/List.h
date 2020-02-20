// LIST.h
#ifndef LIST_H
#define LIST_H

#include <iostream>  
#include <list>  

class List
{
	public:
		int run()
		{
			std::list<int> li = { 1,2,3,4 };

			std::list<int>::iterator itr = li.begin();

			li.insert(itr, 5);

			for (itr = li.begin(); itr != li.end(); ++itr)
			{
				std::cout << *itr;
			}

			std::cout << std::endl;

			return 0;
		}
};


#endif