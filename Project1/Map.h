// MAP.h
#ifndef MAP_H
#define MAP_H

#include <iostream>  
#include <map>  

class Map
{
	public:
		int run()
		{
            std::map<char, int> m = {
            {'a', 1},
            {'b', 2},
            {'c', 3},
            };

            // inserting new element  
            m.insert(std::pair<char, int>('d', 4));

            m.insert(std::pair<char, int>('e', 5));

            std::cout << "Map contains following elements" << std::endl;

            for (auto it = m.begin(); it != m.end(); ++it)
            {
                std::cout << it->first << " = " << it->second << std::endl;
            }

            std::cout << std::endl;

            return 0;
		}
};

#endif