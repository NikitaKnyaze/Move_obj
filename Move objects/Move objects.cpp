
#include <iostream>
#include <vector>

template <typename T>

void move_vectors(T& a, T& b)
{
  b = std::move(a);
}

int main()
{
   std::vector <std::string> one = { "test_string1", "test_string2" };
   std::vector <std::string> two;
   move_vectors(one, two);

   for (const auto & c : two)
   {
      std::cout << c <<" ";
   }
   std::cout << std::endl;

   return 0;
}

