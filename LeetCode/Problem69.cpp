#include <bits/stdc++.h>
using namespace std;

long long int getSquareRoot(int n)
{
    int start = 0, end = n - 1, ans;
    long long int mid = start + (end - start) / 2;
    for (int i = 0; i < n && start < end; i++)
    {
        long long int square = mid * mid;
        if (square > n)
        {
            end = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            return mid;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int n;
    int arr[1000];
    cout << "Enter number: ";
    cin >> n;
    cout << "Square root of " << n << " is " << getSquareRoot(n);
}