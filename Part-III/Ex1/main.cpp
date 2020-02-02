#include<iostream>

unsigned long int factorial(unsigned long int n);

int main()
{
    unsigned long int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    std::cout << "Factorial of " << n << " = " << factorial(n) << std::endl;
    return 0;
}

unsigned long int factorial(unsigned long int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
