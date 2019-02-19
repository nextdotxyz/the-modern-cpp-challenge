#include <iostream>
#include <functional>
using namespace std;

template <typename T>
T minimum(T const a, T const b) { return a < b ? a : b; }

template <typename T1, typename... T>
T1 minimum(T1 a, T... args)
{
   return minimum(a, minimum(args...));
}

template <class Compare, typename T>
T minimumc(Compare comp, T const a, T const b) { return comp(a, b) ? a : b; }

template <class Compare, typename T1, typename... T>
T1 minimumc(Compare comp, T1 a, T... args)
{
   return minimumc(comp, a, minimumc(comp, args...));
}

int main()
{
   auto x = minimum(5, 4, 2, 3);
   cout << x << endl;
   
   auto y = minimumc(less<>(), 3, 2, 1, 0);
   cout << y << endl;
}
