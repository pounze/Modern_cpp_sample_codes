// MULTIMAP.h
#ifndef MULTIMAP_H
#define MULTIMAP_H

#include <iostream>  
#include <map>  

class Multimap
{
	public:
		int run()
		{
            std::multimap<char, std::string> mymultimap;

            mymultimap = {
                         {'a',"Java"},
                         {'b', "C++"},
                         {'b', "Python"},
                         {'a', "Android"}
            };

            // show content:  
            for (std::multimap<char, std::string>::iterator it = mymultimap.begin(); it != mymultimap.end(); ++it)
            {
                std::cout << it->first << " => " << it->second << '\n';
            }

            std::cout << std::endl;

            return 0;
		}
};

#endif