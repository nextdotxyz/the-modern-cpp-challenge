#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <array>
#include <assert.h>

using namespace std;

template <typename Iter>
string bytes_to_hexstr(Iter begin, Iter end, bool const uppercase = false)
{
   //enter your code here
}

template <typename C>
string bytes_to_hexstr(C const & c, bool const uppercase = false)
{
   //enter your code here
}

int main()
{
   vector<unsigned char> v{ 0xBA, 0xAD, 0xF0, 0x0D };
   array<unsigned char, 6> a{{ 1,2,3,4,5,6 }};
   unsigned char buf[5] = {0x11, 0x22, 0x33, 0x44, 0x55};

   assert(bytes_to_hexstr(v, true) == "BAADF00D");
   assert(bytes_to_hexstr(a, true) == "010203040506");
   assert(bytes_to_hexstr(buf, true) == "1122334455");

   assert(bytes_to_hexstr(v) == "baadf00d");
   assert(bytes_to_hexstr(a) == "010203040506");
   assert(bytes_to_hexstr(buf) == "1122334455");
}
