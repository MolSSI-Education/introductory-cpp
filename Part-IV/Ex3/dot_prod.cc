#include <iostream>

double dot_product_ptr(double* const x, double* const y, const int n)
{
   double xi, yi, product = 0;

   for(int i = 0; i < n; i++)
   {
       xi = *(x+i) ;
       yi = *(y+i);

       product += xi * yi;
   }

  return product;
}

double dot_product_arr(double x[], double y[], const int n)
{
   double xi, yi, product = 0;

   for(int i = 0; i < n; i++)
   {
       xi = x[i] ;
       yi = y[i];

       product += xi * yi;
   }

  return product;
}
