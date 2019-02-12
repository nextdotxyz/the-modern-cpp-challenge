#include <iostream>
#include <math.h>
#include <string>
using namespace std;

unsigned int gray_encode(unsigned int const num)
{
   
}

unsigned int gray_decode(unsigned int gray)
{
   
}

string to_binary(unsigned int value, int const digits)
{

}

int main()
{
   cout << "Number\tBinary\tGray\tDecoded\n";
   cout << "------\t------\t----\t-------\n";

   for (unsigned int n = 0; n < 32; ++n)
   {
      auto encg = gray_encode(n);
      auto decg = gray_decode(encg);

      cout 
         << n << "\t" << to_binary(n, 5) << "\t" 
         << to_binary(encg, 5) << "\t" << decg << "\n";
   }
}
