// SAMPLE.h
#ifndef SAMPLE_H   
#define SAMPLE_H

#include<iostream>
#include<string>

class Sample {

public:
    int sum()
    {
		int a = 5;
		int b = 10;

		int c = a + b;

		std::string s = std::to_string(c);

		std::cout << "The sum is " + s;

		std::cout << std::endl;

		return 0;
    }
};

#endif