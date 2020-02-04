#ifndef MY_TUPLE_H
#define MY_TUPLE_H

#include <iostream>
#include <tuple>
#include <string>
#include <functional>

namespace custom {
   template <class T>
   int tuple_size(T t)
   {
      return std::tuple_size<T>::value;
   }

   auto tuple_print = [](std::string name, bool state, int score) { std::cout<< name << " "<< state << " " << score << std::endl; };

}

#endif
