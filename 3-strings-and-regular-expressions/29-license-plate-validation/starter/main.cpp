#include <string>
#include <string_view>
#include <regex>
#include <assert.h>

using namespace std;

bool validate_license_plate_format(string_view str)
{
   //enter your code here
}

vector<string> extract_license_plate_numbers(string const & str)
{
   //enter your code here
}

int main()
{
   assert(validate_license_plate_format("ABC-DE 123"));
   assert(validate_license_plate_format("ABC-DE 1234"));
   assert(!validate_license_plate_format("ABC-DE 12345"));
   assert(!validate_license_plate_format("abc-de 1234"));

   vector<string> expected{"AAA-AA 123", "ABC-DE 1234", "XYZ-WW 0001"};
   string text("AAA-AA 123qwe-ty 1234  ABC-DE 123456..XYZ-WW 0001");
   assert(expected == extract_license_plate_numbers(text));
}
