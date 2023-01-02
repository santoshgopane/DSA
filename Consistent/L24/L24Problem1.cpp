// Count Primes
#include <bits/stdc++.h>
using namespace std;
// Got TLE on LeetCode.
int countPrimesTLE(int n)
{
    int totalNumbers = n;
    int notPrime = 0;
    for (int count = n - 1; count >= 0; count--)
    {
        if (count <= 1)
            notPrime++;
        for (int i = 2; i < count; i++)
        {
            if (count % i == 0 || count == 1)
            {
                notPrime++;
                cout << "Not A PRIME: " << count << endl;
                break;
            }
        }
    }
    cout << "notPrime: " << notPrime << endl;
    return (totalNumbers - notPrime);
}

// Algorithm: Sieve of Eratosthenes
int countPrimes(int n)
{
    int ans = 0;
    vector<bool> Primes(n + 1, true);
    Primes[0] = Primes[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (Primes[i])
        {
            ans++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                Primes[j] = false;
            }
        }
    }

    return ans;
}

int main()
{
    int n = 10;
    cout << "Number of primes till " << n << ": " << countPrimes(n);
}