#include <string>
#include <sstream>
#include <cctype>
#include <assert.h>

using namespace std;

template <class Elem>
using tstring = basic_string<Elem, char_traits<Elem>, allocator<Elem>>;

template <class Elem>
using tstringstream = basic_stringstream<Elem, char_traits<Elem>, allocator<Elem>>;

template <class Elem>
tstring<Elem> capitalize(tstring<Elem> const & text)
{
   tstringstream<Elem> result;

   bool newWord = true;
   for (auto const ch : text)
   {
      newWord = newWord || ispunct(ch) || isspace(ch);
      if (isalpha(ch))
      {
         if (newWord)
         {
            result << static_cast<Elem>(toupper(ch));
            newWord = false;
         }
         else
            result << static_cast<Elem>(tolower(ch));
      }
      else result << ch;
   }

   return result.str();
}

int main()
{
   using namespace string_literals;

   string text = "THIS IS an ExamplE, should wORk!";
   string expected = "This Is An Example, Should Work!";
   assert(expected == capitalize(text));
   
   assert(
          L"The C++ Challenger"s ==
          capitalize(L"the c++ challenger"s));
   
   assert(
      L"This Is An Example, Should Work!"s == 
      capitalize(L"THIS IS an ExamplE, should wORk!"s));
}
