#include <string>
#include <string_view>
#include <regex>
#include <assert.h>

using namespace std;

string transform_date(string_view text)
{
   //enter your code here
}

int main()
{
   using namespace string_literals;

   assert(
      transform_date("today is 01.12.2017!"s) == 
      "today is 2017-12-01!"s);
}
