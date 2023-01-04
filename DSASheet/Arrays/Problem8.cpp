#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
    long long ans = 0, maxi = INT_MIN;
    int startIndex = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
        if (maxi < ans)
        {
            maxi = ans;
        }
        if (ans < 0)
        {
            ans = 0;
        }
    }
    return maxi;
}

int main()
{
    int arr[99] = {-1, 2, 3, -2, 5};
    int size = 5;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "Maximum Sum is: " << maxSubarraySum(arr, size);
}