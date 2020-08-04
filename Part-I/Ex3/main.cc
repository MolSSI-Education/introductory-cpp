#include <iostream>
#include <cmath>

int main()
{
    // Declare variables here

    std::cout << "Enter your weight in Kgs: ";
    std::cin >> weight;

    std::cout << "Enter your height in meters: ";
    // Read height as std input

    std::cout << "Your BMI (body mass index) is: " << weight / pow(height, 2) << std::endl;

    return 0;
}
