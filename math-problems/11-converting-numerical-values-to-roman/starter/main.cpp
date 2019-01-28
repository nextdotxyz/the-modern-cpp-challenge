#include <iostream>

std::string to_roman(unsigned int value)
{
   
}

int main()
{
   for(int i = 1; i <= 100; ++i) 
   {
      std::cout << i << "\t" << to_roman(i) << std::endl; 
   }

   int number = 0;
   std::cout << "number:";
   std::cin >> number;
   std::cout << to_roman(number) << std::endl;
}
