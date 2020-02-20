#ifndef VECTOR_H   
#define VECTOR_H

#include<iostream>  
#include<vector>

class Vector
{
	public:
		int run()
		{

			std::vector<std::string> v1;

			v1.push_back("Sudeep ");

			v1.push_back("Dasgupta");

			for (std::vector<std::string>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
			{
				std::cout << *itr;
			}

			std::cout << std::endl;

			return 0;
		}
};

#endif