#include <iostream>

// complete definition of factorial function
unsigned long int factorial(unsigned int n) {};

int main()
{
    unsigned long int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << "Factorial of " << n << " = " << factorial(n) << std::endl;

    return 0;
}
