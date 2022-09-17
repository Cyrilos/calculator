#include "calculation.h"

/* convert std::string number to float */
float toFloat(std::string str) 
{
  return atof(str.c_str());
}

/* do a caculation where the operation is : {number, operator, number} */
double calcul(std::vector<std::string> operation) 
{
  /* statement for (+, -, / , *) operators */
  switch((operation[1]).c_str()[0]) {
    case '+' :
      return toFloat(operation[0]) + toFloat(operation[2]);
    case '-' :
      return toFloat(operation[0]) - toFloat(operation[2]);
    case '*' :
      return toFloat(operation[0]) * toFloat(operation[2]);
    case '/' :
      return toFloat(operation[0]) / toFloat(operation[2]);
  }
}
