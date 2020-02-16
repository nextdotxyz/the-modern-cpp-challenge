#include <string>
#include <string_view>
#include <sstream>
#include <vector>
#include <array>
#include <assert.h>

using namespace std;

unsigned char hexchar_to_int(char const ch)
{
   if (ch >= '0' && ch <= '9') return ch - '0';
   if (ch >= 'A' && ch <= 'F') return ch - 'A' + 10;
   if (ch >= 'a' && ch <= 'f') return ch - 'a' + 10;
   throw invalid_argument("Invalid hexadecimal character");
}

vector<unsigned char> hexstr_to_bytes(string_view str)
{
   vector<unsigned char> result;

   for (size_t i = 0; i < str.size(); i += 2) 
   {
      result.push_back(
         (hexchar_to_int(str[i]) << 4) | hexchar_to_int(str[i+1]));
   }

   return result;
}

int main()
{
   vector<unsigned char> expected{ 0xBA, 0xAD, 0xF0, 0x0D, 0x42 };
   assert(hexstr_to_bytes("BAADF00D42") == expected);
   assert(hexstr_to_bytes("BaaDf00d42") == expected);
}
