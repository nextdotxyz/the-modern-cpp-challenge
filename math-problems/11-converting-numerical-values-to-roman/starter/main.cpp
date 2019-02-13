#include <iostream>
#include <string>
using namespace std;

string to_roman(unsigned int value)
{
   
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
