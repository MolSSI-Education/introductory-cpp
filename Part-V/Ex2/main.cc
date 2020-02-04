#include "element.h"

int main()
{
   // default constructor prints a msg
   auto elemDef = FEM::Element();

   // constructor initializes 1D node vector
   std::vector<double> node1D = {1.5,2.5};
   auto elem1D = FEM::Element(node1D);
   std::cout << "elemt1D node = " << elem1D.getNode(0) << ", " << elem1D.getNode(1) << std::endl;

   // constructor initializes 2D node vector
   std::vector<double> node2D = {0.5, 1.5, -0.5, -1.5};
   auto elem2D = FEM::Element(node2D);
   std::cout << "elemt2D node 1 = " << elem2D.getNode(0) << ", " << elem2D.getNode(1) << std::endl;
   std::cout << "elemt2D node 2 = " << elem2D.getNode(2) << ", " << elem2D.getNode(3) << std::endl;

   return 0;
}
