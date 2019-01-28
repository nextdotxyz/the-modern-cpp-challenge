#include <iostream>

unsigned int gray_encode(unsigned int const num)
{
   
}

unsigned int gray_decode(unsigned int gray)
{
   
}

std::string to_binary(unsigned int value, int const digits)
{

}

int main()
{
   std::cout << "Number\tBinary\tGray\tDecoded\n";
   std::cout << "------\t------\t----\t-------\n";

   for (unsigned int n = 0; n < 32; ++n)
   {
      auto encg = gray_encode(n);
      auto decg = gray_decode(encg);

      std::cout 
         << n << "\t" << to_binary(n, 5) << "\t" 
         << to_binary(encg, 5) << "\t" << decg << "\n";
   }
}
