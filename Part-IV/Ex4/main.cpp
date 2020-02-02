#include <iostream>

// complete function args below
void print()
{
   for(int i = 0; i < N; i++)
     std::cout << "ptr[" << i <<  "] = " << ptr[i] << std::endl;
}

int main(int argc, char *argv[])
{
   // print all items stored in argv
   for (int i = 0; i < argc; ++i)
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;

   if(argc > 1)
   {
      int N = std::stoi(argv[1]);
      // allocate block of memory of size N for ptr of type int

      for(int i = 0; i < N; i++)
         ptr[i] = i*i;

      print(ptr, N);

      // free memory allocated by ptr
   }

   return 0;
}
