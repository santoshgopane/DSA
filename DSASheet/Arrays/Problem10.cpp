// Wrong logic
#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{
    int i = 0;
    int jumps = 0;
    while (i <= n - 1)
    {
        cout << "i: " << i << endl;
        if (arr[i] == 0)
            return -1;
        i += arr[i];
        jumps++;
    }
    cout << "jumps: " << jumps << endl;
    return (i >= n - 1) ? jumps : -1;
}

int main()
{
    int arr[99] = {2, 3, 1, 1, 2, 4, 2, 0, 1, 1};
    int n = 10;
    cout << "Minimum Jumps: " << minJumps(arr, n);
}