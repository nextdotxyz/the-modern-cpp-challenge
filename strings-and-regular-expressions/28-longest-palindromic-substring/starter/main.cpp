#include <string>
#include <string_view>
#include <vector>
#include <assert.h>

using namespace std;

string longest_palindrome(string_view str)
{
   //enter your code here
}

int main()
{
   using namespace string_literals;

   assert(longest_palindrome("sahararahnide") == "hararah");
   assert(longest_palindrome("level") == "level");
   assert(longest_palindrome("s") == "s");
   assert(longest_palindrome("aabbcc") == "aa");
   assert(longest_palindrome("abab") == "aba");
}
