#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
using namespace std;

vector<unsigned long long> prime_factors(unsigned long long n)
{
   vector<unsigned long long> factors;
   while (n % 2 == 0) {
      factors.push_back(2);
      n = n / 2;
   }
   for (unsigned long long i = 3; i <= sqrt(n); i += 2)
   {
      while (n%i == 0) {
         factors.push_back(i);
         n = n / i;
      }
   }

   if (n > 2) 
      factors.push_back(n);
   return factors;
}

int main()
{
   unsigned long long number = 0;
   cout << "number:";
   cin >> number;
   auto factors = prime_factors(number);
   copy(std::begin(factors), end(factors),
   ostream_iterator<unsigned long long>(cout, " "));
}
