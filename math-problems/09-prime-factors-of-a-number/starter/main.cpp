#include <iostream>

std::vector<unsigned long long> prime_factors(unsigned long long n)
{
 
}

int main()
{
   unsigned long long number = 0;
   std::cout << "number:";
   std::cin >> number;
   auto factors = prime_factors(number);
   std::copy(std::begin(factors), std::end(factors),
   std::ostream_iterator<unsigned long long>(std::cout, " "));
}
