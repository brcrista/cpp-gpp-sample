#include <iostream>
#include "primes_in_range.hpp"

using namespace std;

int main()
{
    try
    {
        const auto start = 0u;
        const auto end = 10000u;
        cout << "Primes in range [" << start << ", " << end << "]:" << endl;
        for (auto n : primes_in_range(start, end))
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