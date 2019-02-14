#include <iostream>
#include <vector>
#include <utility>
using namespace std;

std::pair<unsigned long long, long> longest_collatz(unsigned long long const limit)
{
  
}

ostream& operator<<(ostream& os, const pair<unsigned long long, long>& obj)
{
  // write obj to stream
  os << "Length: " << obj.second << "\t" << "Starting Num: " << obj.first << endl;
  return os;
}

int main()
{
   std::cout << longest_collatz(1000000);
}
