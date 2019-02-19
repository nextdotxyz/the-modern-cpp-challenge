#include <iostream>
#include <string>
#include <algorithm> 
#include <numeric>
using namespace std;

bool validate_isbn_10(string isbn)
{
   auto valid = false;
   if (isbn.size() == 10 &&
       count_if(isbn.begin(), isbn.end(), []( char c ) { return std::isdigit( c ); }) == 10)
   {
      auto w = 10;
      auto sum = accumulate(isbn.begin(), isbn.end(), 0,
         [&w](int const total, char const c) {
            return total + w-- * (c - '0'); });

     valid = !(sum % 11);
   }
   return valid;
}

int main()
{
   string input = "";
   cout << "ISBN: ";
   cin >> input;
   
   bool valid = validate_isbn_10(input);
   
   if(valid)
   {
     cout << input << " is a valid ISBN.";
   }
   else
   {
     cout << input << " is not a valid ISBN.";
   }
}
