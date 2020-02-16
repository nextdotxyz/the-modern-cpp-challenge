#include <string>
#include <string_view>
#include <regex>
#include <assert.h>

using namespace std;

string transform_date(string_view text)
{
   auto rx = regex{ R"((\d{1,2})(\.|-|/)(\d{1,2})(\.|-|/)(\d{4}))" };
   return regex_replace(text.data(), rx, R"($5-$3-$1)");
}

int main()
{
   using namespace string_literals;

   assert(
      transform_date("today is 01.12.2017!"s) == 
      "today is 2017-12-01!"s);
}
