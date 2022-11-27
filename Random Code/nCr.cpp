#include <iostream>
using namespace std;

int factorial(int n)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod *= i;
    }
    return prod;
}

int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    int n = 13, r = 0;
    cout << n << " | " << r << endl;
    cout << "nCr value is " << nCr(n, r) << endl;
}