#include <iostream>

int sum_proper_divisors(int const number)
{
   int result = 1;
   for (int i = 2; i <= std::sqrt(number); i++)
   {
      if (number%i == 0)
      {
         result += (i == (number / i)) ? i : (i + number / i);
      }
   }
   return result;
}

void print_amicables(int const limit)
{
   
}

int main()
{
   int limit = 1000000;
   print_amicables(limit);
}
