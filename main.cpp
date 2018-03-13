#include <iostream>
#include <vector>
#include "primes.hpp"

using namespace std;

int main()
{
    try
    {
        const auto start = 0u;
        const auto end = 10000u;
        cout << "Primes in range [" << start << ", " << end << "]:" << endl;
        for (auto n : primes::primes_in_range(start, end, 1))
        {
            cout << n << endl;
        }

        return 0;
    }
    catch (...)
    {
        return -1;
    }
}