#include <iostream>
#include <math.h>
#include <random>
#include <chrono>
#include <array>
#include <algorithm>
#include <cstdlib>
using namespace std;

template <typename E = mt19937, 
          typename D = uniform_real_distribution<>>
          
double compute_pi(E& engine, D& dist, int const samples = 1000000)
{

}

int RandomNumber () { return (rand()%100); }

int main()
{
   auto seed_data = array<int, mt19937::state_size> {};
   generate(begin(seed_data), end(seed_data), RandomNumber);
   seed_seq seq(begin(seed_data), end(seed_data));
   auto eng = mt19937{ seq };
   auto dist = uniform_real_distribution<>{ 0, 1 };

   for (auto j = 0; j < 10; j++)
      cout << compute_pi(eng, dist) << endl;
}
