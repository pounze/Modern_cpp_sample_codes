// REGEX.h
#ifndef REGEX_H
#define REGEX_H

#include <iostream> 
#include <regex>

class Regex
{

    // match

	public:
		int match()
		{
            std::string a = "GeeksForGeeks";

            // Here b is an object of regex (regular expression) 
            std::regex b("(Geek)(.*)"); // Geeks followed by any character 

            // regex_match function matches string a against regex b 
            if (regex_match(a, b))
            {
                std::cout << "String 'a' matches regular expression 'b' \n";
            }

            // regex_match function for matching a range in string  
            // against regex b 
            if (regex_match(a.begin(), a.end(), b))
            {
                std::cout << "String 'a' matches with regular expression "
                    "'b' in the range from 0 to string end\n";
            }

            return 0;
		}

    public:
        int search()
        {
            // Target sequence 
            std::string s = "I am looking for GeeksForGeeks "
                "articles";

            // An object of regex for pattern to be searched 
            std::regex r("Geek[a-zA-Z]+");

            // flag type for determining the matching behavior 
            // here it is for matches on 'string' objects 
            std::smatch m;

            // regex_search() for searching the regex pattern 
            // 'r' in the string 's'. 'm' is flag for determining 
            // matching behavior. 
            std::regex_search(s, m, r);

            // for each loop 
            for (auto x : m)
            {
                std::cout << x << " ";
            }

            return 0;
        }

    public:
        int replace()
        {
            std::string s = "I am looking for GeeksForGeek \n";

            // matches words beginning by "Geek" 
            std::regex r("Geek[a-zA-z]+");

            // regex_replace() for replacing the match with 'geek'  
            std::cout << std::regex_replace(s, r, "geek");

            std::string result;

            // regex_replace( ) for replacing the match with 'geek' 
            std::regex_replace(back_inserter(result), s.begin(), s.end(),
                r, "geek");

            std::cout << result;

            return 0;
        }
};


#endif