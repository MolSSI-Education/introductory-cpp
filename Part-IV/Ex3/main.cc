#include <iostream>

double dot_product_ptr(double* const x, double* const y, const int n);
double dot_product_arr(double x[], double y[], const int n);

int main()
{

  double x[] = {0.0, 1.5, 3.0, 5.0};
  double y[] = {-2.0, 3.0, 10.0, -2.5};

  std::cout << "dot_product_ptr = " << dot_product_ptr(x, y, 4) << std::endl;
  std::cout << "dot_product_arr = " << dot_product_arr(x, y, 4) << std::endl;

  return 0;
}
