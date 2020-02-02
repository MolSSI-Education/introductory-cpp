#include <iostream>


void print(int* const ptr, const int N)
{

   for(int i = 0; i < N; i++)
     std::cout << "ptr[" << i <<  "] = " << ptr[i] << std::endl;
}

int main(int argc, char *argv[])
{
   for (int i = 0; i < argc; i++)
        // print all items stored in argv

   if(argc > 1)
   {
      int N = std::stoi(argv[1]);
      // allocate block of memory of size N for ptr of type int

      for(int i = 0; i < N; i++)
         ptr[i] = i*i;

      print(ptr, N);

      // free memory allocated for ptr
   }

   return 0;
}
