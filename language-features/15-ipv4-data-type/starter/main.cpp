#include "ipv4.cpp"
using namespace std;

//do not edit this file 
int main()
{
   cout << "Test Operator <<" << endl;
   ipv4 a(168, 192, 0, 1);
   cout << a << endl << endl;

   cout << "Test Operator >>" << endl;
   ipv4 ip;
   cin >> ip;
   if(!cin.fail())
      cout << ip << endl;
}
