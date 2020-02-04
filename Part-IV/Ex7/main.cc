#include <vector>
#include "my_tuple.h"

auto make_records() {};

void print_records(std::vector<std::tuple<std::string, bool, int>> records)
{
   for(auto record: records)
   {
      for(int i = 0; i < custom::tuple_size(record); i++)
         std::apply(custom::tuple_print, record);
      std::cout << std::endl;
   }
}

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

   // complete the function "make_records" that returns a vector of records
   // use only std::vector for the function input args and output
   std::vector<std::string> names = {"name1", "name2", "name3"};
   std::vector<bool> states = {true, false, true};
   std::vector<int> scores = {9, 5, 6};

   auto records = make_records(names, states, scores);
   print_records(records);

   return 0;
}
