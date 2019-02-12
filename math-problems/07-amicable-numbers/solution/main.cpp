#include<iostream>
#include <math.h>

using namespace std;

int sum_proper_divisors(int const number)
{
   int result = 1;
   for (int i = 2; i <= sqrt(number); i++)
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
   for (int number = 4; number < limit; ++number)
   {
      auto sum1 = sum_proper_divisors(number);
      if (sum1 < limit)
      {
         auto sum2 = sum_proper_divisors(sum1);
         if (sum2 == number && number != sum1)
         {
            if(number < sum1){
               cout << number << "," << sum1 << endl;
            }
         }
      }
   }
}

int main()
{
   int limit = 1000000;
   print_amicables(limit);
}
