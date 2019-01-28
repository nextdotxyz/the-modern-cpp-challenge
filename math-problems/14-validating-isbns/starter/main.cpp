#include <iostream>

bool validate_isbn_10(std::string_view isbn)
{
   
}

int main()
{
   std::string_view input = "";
   std::cout << "ISBN: ";
   std::cin >> input;
   
   bool valid = validate_isbn_10(input);
   
   if(valid)
   {
     std::cout << input << " is a valid ISBN.";
   }
   else
   {
     std::cout << input << " is not a valid ISBN.";
   }
}
