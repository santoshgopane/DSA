#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int i = 0;
    int jumps = 0;
    while (i <= n - 1)
    {
        i += arr[i];
        jumps++;
    }
    return (i >= n - 1) ? jumps : -1;
}

int main()
{
    int arr[99] = {1};
    int n = 1;
    cout << "Minimum Jumps: " << minJumps(arr, n);
}