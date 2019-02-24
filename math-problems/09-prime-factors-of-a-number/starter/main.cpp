#include <iostream>
#include <math.h>
#include <vector>
#include <iterator>
using namespace std;

vector<unsigned long long> prime_factors(unsigned long long n)
{
   //enter your code here
}

int main()
{
   unsigned long long number = 0;
   cout << "number:";
   cin >> number;
   auto factors = prime_factors(number);
   copy(std::begin(factors), end(factors),
   ostream_iterator<unsigned long long>(cout, " "));
   cout << endl;
}
