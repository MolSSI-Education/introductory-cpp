#include "element.h"

int main()
{
   double node1D[] = {1.5,2.5};
   auto elem1D = FEM::Element(node1D, 2);
   std::cout << "elemt1D node = " << elem1D.getNode(0) << ", " << elem1D.getNode(1) << std::endl;

   return 0;
}
