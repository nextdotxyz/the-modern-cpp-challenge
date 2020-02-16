#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

template <class T, size_t R, size_t C>
class array2d
{
   typedef T                 value_type;
   typedef value_type*       iterator;
   typedef value_type const* const_iterator;

   vector<T> arr;
public:
   array2d() :arr(R*C) {}
   explicit array2d(initializer_list<T> l):arr(l) {}
   constexpr T* data() noexcept 
   { 
      //Enter your code here 
   }
   
   constexpr T const * data() const noexcept 
   { 
      //Enter your code here
   }

   constexpr T& at(size_t const r, size_t const c) 
   {
      //Enter your code here
   }

   constexpr T const & at(size_t const r, size_t const c) const
   {
      //Enter your code here
   }

   constexpr T& operator() (size_t const r, size_t const c)
   {
      //Enter your code here
   }

   constexpr T const & operator() (size_t const r, size_t const c) const
   {
      //Enter your code here
   }

   constexpr bool empty() const noexcept
   {
      //Enter your code here
   }

   constexpr size_t size(int const rank) const
   {
     //Enter your code here
   }

   void fill(T const & value)
   {
      //Enter your code here
   }

   void swap(array2d & other) noexcept
   {
      //Enter your code here
   }

   const_iterator begin() const 
   { 
      //Enter your code here 
   }

   const_iterator end() const 
   { 
      //Enter your code here 
   }

   iterator begin() 
   { 
      //Enter your code here 
   }

   iterator end() 
   { 
      //Enter your code here 
   }
};

template <class T, size_t R, size_t C>
void print_array2d(array2d<T, R, C> const & arr)
{
   //Enter your code here
}

int main()
{
   {
      cout << "test fill" << endl;

      array2d<int, 2, 3> a;
      a.fill(1);

      print_array2d(a);
   }

   {
      cout << "test operator()" << endl;
      array2d<int, 2, 3> a;

      for (size_t i = 0; i < a.size(1); ++i)
      {
         for (size_t j = 0; j < a.size(2); ++j)
         {
            a(i, j) = 1 + i * 3 + j;
         }
      }

      print_array2d(a);
   }

   {
      cout << "test move semantics" << endl;

      array2d<int, 2, 3> a{10,20,30,40,50,60};
      print_array2d(a);

      array2d<int, 2, 3> b(move(a));
      print_array2d(b);
   }

   {
      cout << "test swap" << endl;

      array2d<int, 2, 3> a { 1,2,3,4,5,6 };
      array2d<int, 2, 3> b { 10,20,30,40,50,60 };

      print_array2d(a);
      print_array2d(b);

      a.swap(b);

      print_array2d(a);
      print_array2d(b);
   }

   {
      cout << "test capacity" << endl;

      array2d<int, 2, 3> const a { 1,2,3,4,5,6 };

      for (size_t i = 0; i < a.size(1); ++i)
      {
         for (size_t j = 0; j < a.size(2); ++j)
         {
            cout << a(i, j) << ' ';
         }

         cout << endl;
      }
   }

   {
      cout << "test iterators" << endl;

      array2d<int, 2, 3> const a{ 1,2,3,4,5,6 };
      for (auto const e : a)
      {
         cout << e << ' ';
      }
      cout << endl;

      copy(
         begin(a), end(a), 
         ostream_iterator<int>(cout, " "));

      cout << endl;
   }
}
