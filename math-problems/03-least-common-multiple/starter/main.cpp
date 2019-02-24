#include<iostream>

using namespace std;

unsigned int gcd(unsigned int a, unsigned int b)
{
   while (b != 0) {
      unsigned int r = a % b;
      a = b;
      b = r;
   }
   return a;
}

int lcm(int const a, int const b)
{
   //enter your code here
}

int main()
{
    int a, b;
    cout << "Value for 'a': ";
    cin >> a;
    
    cout << "Value for 'b': ";
    cin >> b;
    
    cout << "lcm = " << lcm(a,b);
 }
