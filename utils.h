#ifndef UTILS
#define UTILS
#include <string>
#include <vector>
#include <sstream>

/* concatenate strings in an array of strings */ 
std::string toString(std::vector<std::string> strArray);

/* number to string */ 
std::string numberToString(double number);

/* check if a std::string is an integer string */ 
bool isIntegerString(std::string str);

/* check if a std::string is an operator string */ 
bool isOperatorString(std::string str);

#endif 