#include <iostream>
#include <string>
#include <vector>
using namespace std;

string to_roman(unsigned int value)
{
   vector<pair<unsigned int, char const*>> roman {
      { 1000, "M" },{ 900, "CM" }, { 500, "D" },{ 400, "CD" }, 
      { 100, "C" },{ 90, "XC" }, { 50, "L" },{ 40, "XL" },
      { 10, "X" },{ 9, "IX" }, { 5, "V" },{ 4, "IV" }, { 1, "I" }};

   string result;
   for (auto const & kvp : roman) {
      while (value >= kvp.first) {
         result += kvp.second;
         value -= kvp.first;
      }
   }
   return result;
}

int main()
{
   for(int i = 1; i <= 100; ++i) 
   {
      cout << i << "\t" << to_roman(i) << endl; 
   }

   int number = 0;
   cout << "number:";
   cin >> number;
   cout << to_roman(number) << endl;
}
