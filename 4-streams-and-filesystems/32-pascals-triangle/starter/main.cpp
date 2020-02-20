#include <string>
#include <iostream>
#include <cmath>

unsigned int number_of_digits(unsigned int const i)
{
   // Enter your code here
}

void print_pascal_triangle(int const n)
{
   // Enter your code here
}

int main()
{
   int n = 0;
   std::cout << "Levels (up to 10): ";
   std::cin >> n;
   if (n > 10)
      std::cout << "Value too large" << std::endl;
   else
      print_pascal_triangle(n);
}
