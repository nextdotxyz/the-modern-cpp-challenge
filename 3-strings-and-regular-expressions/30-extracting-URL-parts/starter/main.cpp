#include <string>
#include <string_view>
#include <regex>
#include <assert.h>

#ifdef USE_BOOST_OPTIONAL
#  include <boost/optional.hpp>
using boost::optional;
#else
#  include <optional>
using optional;
#endif

using namespace std;

struct uri_parts
{
   string           protocol;
   string           domain;
   optional<int>    port;
   optional<string> path;
   optional<string> query;
   optional<string> fragment;
};

optional<uri_parts> parse_uri(string uri)
{
   //enter your code here
}

int main()
{
   auto p1 = parse_uri("https://packt.com");
   assert(p1);
   assert(p1->protocol == "https");
   assert(p1->domain == "packt.com");
   assert(!p1->port);
   assert(!p1->path);
   assert(!p1->query);
   assert(!p1->fragment);

   auto p2 = parse_uri("https://bbc.com:80/en/index.html?lite=true#ui");
   assert(p2);
   assert(p2->protocol == "https");
   assert(p2->domain == "bbc.com");
   assert(p2->port == 80);
   assert(p2->path.value() == "/en/index.html");
   assert(p2->query.value() == "lite=true");
   assert(p2->fragment.value() == "ui");
}
