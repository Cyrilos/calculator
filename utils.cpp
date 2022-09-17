#include "utils.h"

/* concatenate strings in an array of strings */ 
std::string toString(std::vector<std::string> strArray) 
{
  std::string strResult{""}; 
  for(const auto& str : strArray) 
    strResult += str; 
  return strResult; 
}

/* number to string */ 
std::string numberToString(double number) 
{
  std::stringstream stringStream; 
  stringStream << number; 
  return stringStream.str();
}

/* check if a std::string is an integer string */ 
bool isIntegerString(std::string str) 
{
  std::vector<std::string> integersString{"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
  for(const auto& integerString : integersString)
    if(integerString == str)
      return true; 
  return false; 
}

/* check if a std::string is an operator string */ 
bool isOperatorString(std::string str) 
{
  std::vector<std::string> operatorsString{"+", "-", "*", "/"};
  for(const auto& operatorString : operatorsString) 
    if(operatorString == str)
      return true;
  return false; 
}