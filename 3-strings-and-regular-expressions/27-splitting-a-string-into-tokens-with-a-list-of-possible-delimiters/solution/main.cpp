#include <string>
#include <sstream>
#include <vector>
#include <assert.h>

using namespace std;

template <class Elem>
using tstring = basic_string<Elem, char_traits<Elem>, allocator<Elem>>;

template <class Elem>
using tstringstream = basic_stringstream<Elem, char_traits<Elem>, allocator<Elem>>;

template<typename Elem>
inline vector<tstring<Elem>> split(tstring<Elem> text, Elem const delimiter)
{
   auto sstr = tstringstream<Elem>{ text };
   auto tokens = vector<tstring<Elem>>{};
   auto token = tstring<Elem>{};
   while (getline(sstr, token, delimiter))
   {
      if (!token.empty()) tokens.push_back(token);
   }

   return tokens;
}

template<typename Elem>
inline vector<tstring<Elem>> split(tstring<Elem> text, tstring<Elem> const & delimiters)
{
   auto tokens = vector<tstring<Elem>>{};

   size_t pos, prev_pos = 0;
   while ((pos = text.find_first_of(delimiters, prev_pos)) != string::npos)
   {
      if (pos > prev_pos)
         tokens.push_back(text.substr(prev_pos, pos - prev_pos));
      prev_pos = pos + 1;
   }

   if (prev_pos< text.length())
      tokens.push_back(text.substr(prev_pos, string::npos));

   return tokens;
}

int main()
{
   using namespace string_literals;

   vector<string> expected{"this", "is", "a", "sample"};

   assert(expected == split("this is a sample"s, ' '));
   assert(expected == split("this,is a.sample!!"s, ",.! "s));
}
