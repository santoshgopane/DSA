#include <bits/stdc++.h>
using namespace std;

long long int getIntegerRoot(int n)
{
    int start = 0, end = n - 1;
    long long int mid = start + (end - start) / 2;
    int ans = -1;
    while (start < end)
    {
        long long int square = mid * mid;
        if (square == n)
            return mid;
        if (square > n)
        {
            end = mid - 1;
        }
        else
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int intSolution)
{
    double factor = 1;
    double ans = intSolution;
    for (int i = 0; i < precision; i++)
    {
        factor /= 10;
        for (double j = ans; j * j <= n; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int intSolution = getIntegerRoot(n);

    cout << "Square root of " << n << " is " << morePrecision(n, 3, intSolution);
}