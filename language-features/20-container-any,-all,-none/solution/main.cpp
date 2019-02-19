#include <iostream>
#include <vector>
#include <array>
#include <list>
#include <assert.h>
using namespace std;

template<class C, class T>
bool contains(C const & c, T const & value)
{
   return end(c) != find(begin(c), end(c), value);
}

template<class C, class... T>
bool contains_any(C const & c, T &&... value)
{
   return (... || contains(c, value));
}

template<class C, class... T>
bool contains_all(C const & c, T &&... value)
{
   return (... && contains(c, value));
}

template<class C, class... T>
bool contains_none(C const & c, T &&... value)
{
   return !contains_any(c, forward<T>(value)...);
}

int main()
{
   vector<int> v{ 1,2,3,4,5,6 };
   array<int, 6> a{ { 1,2,3,4,5,6 } };
   list<int> l{ 1,2,3,4,5,6 };

   assert(contains(v, 3));
   assert(contains(a, 3));
   assert(contains(l, 3));

   assert(!contains(v, 30));
   assert(!contains(v, 30));
   assert(!contains(v, 30));

   assert(contains_any(v, 0, 3, 30));
   assert(contains_any(a, 0, 3, 30));
   assert(contains_any(l, 0, 3, 30));

   assert(!contains_any(v, 0, 30));
   assert(!contains_any(a, 0, 30));
   assert(!contains_any(l, 0, 30));

   assert(contains_all(v, 1, 3, 6));
   assert(contains_all(a, 1, 3, 6));
   assert(contains_all(l, 1, 3, 6));

   assert(!contains_all(v, 0, 1));
   assert(!contains_all(a, 0, 1));
   assert(!contains_all(l, 0, 1));

   assert(contains_none(v, 0, 7));
   assert(contains_none(a, 0, 7));
   assert(contains_none(l, 0, 7));

   assert(!contains_none(v, 0, 6, 7));
   assert(!contains_none(a, 0, 6, 7));
   assert(!contains_none(l, 0, 6, 7));
}
