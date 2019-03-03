#include <string>
#include <string_view>
#include <sstream>
#include <vector>
#include <array>
#include <assert.h>

using namespace std;

unsigned char hexchar_to_int(char const ch)
{
   //enter your code here
}

vector<unsigned char> hexstr_to_bytes(string_view str)
{
   //enter your code here
}

int main()
{
   vector<unsigned char> expected{ 0xBA, 0xAD, 0xF0, 0x0D, 0x42 };
   assert(hexstr_to_bytes("BAADF00D42") == expected);
   assert(hexstr_to_bytes("BaaDf00d42") == expected);
}
