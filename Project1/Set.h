// SET.h
#ifndef SET_H
#define SET_H

#include <iostream>  
#include <set>  

class Set
{
    public:
	    int run()
	    {
            std::set<std::string> myset = { "Java", "C++", "SQL" };

            // show content:  
            std::cout << "Contents of myset are: " << std::endl;

            for (std::set<std::string>::iterator it = myset.begin(); it != myset.end(); ++it)
            {
                std::cout << *it << '\n';
            }

            std::cout << std::endl;

            return 0;
	    }
};

#endif