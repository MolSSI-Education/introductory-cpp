#include <vector>
#include "my_tuple.h"

// complete the definitions for the functions below:
// auto make_records() {}
// void print_records() {}

int main()
{
   std::tuple<std::string, bool, int> record;

   // assign values to tuple "record"
   record = std::make_tuple("Linus", true, 4);

   std::cout << "The initial values of tuple 'record' are : ";
   std::apply(custom::tuple_print, record);

   // you can make assignments to 'record' with the get method
   std::get<2>(record) = 10;
   std::cout << "The initial values of tuple 'record' are : ";
   std::apply(custom::tuple_print, record);

   // complete the definition of make_records() that returns a vector of records
   // using only std::vector for the function input args and output
   std::vector<std::string> names = {"name1", "name2", "name3"};
   std::vector<bool> states = {true, false, true};
   std::vector<int> scores = {9, 5, 6};

   // invoke make_records() and store output in records
   // auto records = make_records();

   // complete the definition of print_records()
   // print_records();

   return 0;
}
