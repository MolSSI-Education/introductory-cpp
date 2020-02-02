#include <iostream>
#include "equation.h"

int main()
{
   std::cout << "equation (default) output = " << equation(2.0, 3.0) << std::endl;
   std::cout << "equation (a = 10) output = " << equation(2.0, 3.0, 10.0) << std::endl;

   return 0;
}

