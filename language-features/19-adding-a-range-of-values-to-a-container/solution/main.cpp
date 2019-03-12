#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <list>
using namespace std;

template<typename C, typename... Args>
void push_back(C& c, Args&&... args)
{
   (c.push_back(args), ...);
}

int main()
{
   vector<int> v;
   push_back(v, 1, 2, 3, 4);
   copy(begin(v), end(v), ostream_iterator<int>(cout, " "));
   
   cout << endl;

   list<int> l;
   push_back(l, 43, 432, 2, 4, 56);   
   copy(begin(l), end(l), ostream_iterator<int>(cout, " "));
    
   cout << endl;
    
   list<int> x;
   push_back(x, 6, 4, 3, 25, 6, 2, 2, 4, 3, 2, 53, 7);
   copy(begin(x), end(x), ostream_iterator<int>(cout, " "));
}
