#include <iostream>
#include <vector>

/* Make the following changes:
   1 - Function vec_demo() returns veci.
   2 - Use range-based for loop in vec_demo().
   3 - Use 'auto' keyword wherever possible to simplify the code. 
*/

void vec_demo()
{
    std::vector<int> veci;

    for (int i = 1; i <= 5; i++)
        veci.push_back(i);

    std::cout << "size initially : " << veci.size() << std::endl;
    std::cout << "Capacity : " << veci.capacity() << std::endl;
    std::cout << "Max_Size : " << veci.max_size() << std::endl;

    // resizes the vector size to 4
    veci.resize(4);

    // prints the vector size after resize()
    std::cout << "Size after resize: " << veci.size() << std::endl;

    // checks if the vector is empty or not
    if (veci.empty())
        std::cout << "Vector is empty" << std::endl;
    else
        std::cout << "Vector is not empty" << std::endl;

    // Shrinks the vector
    veci.shrink_to_fit();

    // prints the vector size after resize()
    std::cout << "Size after shrink_to_fit: " << veci.size() << std::endl;

    std::cout << "Vector elements are: ";
    for (std::vector<int>::iterator it = veci.begin(); it != veci.end(); it++)
        std::cout << *it << " ";

    std::cout << std::endl;
}

int main()
{

   vec_demo();

   return 0;
}
