#include <iostream>
#include <array>
#include <sstream>
#include <assert.h>
using namespace std;

class ipv4
{
   array<unsigned char, 4> data;
public:
   constexpr ipv4() :data{ {0} } {}
   constexpr ipv4(unsigned char const a, unsigned char const b, 
                  unsigned char const c, unsigned char const d):
      data{{a,b,c,d}} {}
   explicit constexpr ipv4(unsigned long a) :
      data{ { static_cast<unsigned char>((a >> 24) & 0xFF), 
              static_cast<unsigned char>((a >> 16) & 0xFF),
              static_cast<unsigned char>((a >> 8) & 0xFF),
              static_cast<unsigned char>(a & 0xFF) } } {}
   ipv4(ipv4 const & other) noexcept : data(other.data) {}
   ipv4& operator=(ipv4 const & other) noexcept 
   {
      data = other.data;
      return *this;
   }

   string to_string() const
   {
      //Enter your code here
   } 

   constexpr unsigned long to_ulong() const noexcept
   {
      //Enter your code here
   }

   friend ostream& operator<<(ostream& os, const ipv4& a)
   {
      //Enter your code here
   }

   friend istream& operator>>(istream& is, ipv4& a)
   {
      //Enter your code here
   }
};

int main()
{
   ipv4 a(168, 192, 0, 1);
   cout << a << endl;
   cout << a.to_string() << endl;

   ipv4 b = a;
   ipv4 c;
   c = b;

   ipv4 ip;
   cout << ip << endl;
   cin >> ip;
   if(!cin.fail())
      cout << ip << endl;
}
