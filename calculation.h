#ifndef CALCULATION
#define CALCULATION
#include <string>
#include <vector>
#include <cstdlib>

/* convert std::string number to float */
float toFloat(std::string str);

/* do a caculation where the operation is : {number, operator, number} */
double calcul(std::vector<std::string> operation);

#endif