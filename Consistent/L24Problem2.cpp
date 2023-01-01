#include <bits/stdc++.h>
using namespace std;

// gcd(a-b,b)
// gcd(a%b,b)

int gcd(int a, int b)
{
    if (a == 0)
        return a;
    if (b == 0)
        return b;

    while (a != b)
    {
        if (a > b)
            a = a - b;
        if (b > a)
            b = b - a;
    }

    return a;
}

int main()
{
    int a = 24, b = 72;
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);
}