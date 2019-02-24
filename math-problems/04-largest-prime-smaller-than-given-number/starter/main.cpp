#include<iostream>

bool is_prime(int const num) 
{
   //enter your code here
}

int main()
{
   int limit = 0;
   std::cout << "Upper limit:";
   std::cin >> limit;

   for (int i = limit; i > 1; i--)
   {
      if (is_prime(i))
      {
         std::cout << "Largest prime:" << i << std::endl;
         return 0;
      }
   }
}
