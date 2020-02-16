#include <string>
#include <iterator>
#include <sstream>
#include <vector>
#include <array>
#include <list>
#include <assert.h>

using namespace std;

template <typename Iter>
string join_strings(Iter begin, Iter end, char const * const separator)
{
   ostringstream os;
   copy(begin, end-1, ostream_iterator<string>(os, separator));
   os << *(end-1);
   return os.str();
}


template <typename C>
string join_strings(C const & c, char const * const separator)
{
   if (c.size() == 0) return string{};
   return join_strings(begin(c), end(c), separator);
}

int main()
{
   using namespace string_literals;

   vector<string> v1{ "this","is","an","example" };
   vector<string> v2{ "example" };
   vector<string> v3{ };
   
   assert(
      join_strings(v1, " ") == "this is an example"s);

   assert(
      join_strings(v2, " ") == "example"s);

   assert(
      join_strings(v3, " ") == ""s);

   array<string, 4> a1{ {"this","is","an","example"} };
      array<string, 1> a2{ {"example"} };
   array<string, 0> a3{};

   assert(
      join_strings(a1, " ") == "this is an example"s);

   assert(
      join_strings(a2, " ") == "example"s);

   assert(
      join_strings(a3, " ") == ""s);
}
