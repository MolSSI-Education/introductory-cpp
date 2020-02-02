#include <iostream>

int factorial(unsigned int n)
{
    if(n)
    {
       unsigned long long output = 1;

       for(unsigned int i = 2; i <=n; ++i)
          output *= i;

       return output;
    }
    else
      return 1;
}

int main()
{
    unsigned int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " = " << factorial(n) << std::endl;

    return 0;
}
