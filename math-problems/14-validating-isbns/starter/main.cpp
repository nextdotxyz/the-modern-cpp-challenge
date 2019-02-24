#include <iostream>
#include <string>
#include <algorithm> 
#include <numeric>
using namespace std;

bool validate_isbn_10(string isbn)
{
  auto valid = false;
  //enter your code here
}

int main()
{
   string input = "";
   cout << "ISBN: ";
   cin >> input;
   
   bool valid = validate_isbn_10(input);
   
   if(valid)
   {
     cout << input << " is a valid ISBN." << endl;
   }
   else
   {
     cout << input << " is not a valid ISBN." << endl;
   }
}

