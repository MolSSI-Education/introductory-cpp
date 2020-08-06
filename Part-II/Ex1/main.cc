#include <iostream>

int compute(int size)
{
    int result = 0;

    for(int i = 1; i <= size; i++)
         result += i;
         result *= size;

    return result;
}

int main()
{
    const int size = 4;

    // Print to stdout the output of compute for size = 4;

    return 0;
}
