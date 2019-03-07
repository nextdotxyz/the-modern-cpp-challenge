#include <iostream>
#include <functional>
using namespace std;

template <typename T>
T minimum(T const a, T const b) 
{
    // your code here 
}

template <typename T1, typename... T>
T1 minimum(T1 a, T... args)
{
   // your code here
}

int main()
{
   auto x = minimum(5, 4, 2, 3);
   cout << x << endl;
   
   auto y = minimum(6, 7, 7, 8, 4, 6, 9, 46, 4, 4, 33, 9);
   cout << y << endl;
    
   auto z = minimum(434, 221);
   cout << z << endl;
}
