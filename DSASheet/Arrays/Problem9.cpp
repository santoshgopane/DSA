// Minimum heights 2 - saw solution from editorial
#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];
    int tempMin = arr[0], tempMax = arr[n - 1];
    // int tempMin = -1, tempMax = -1;
    for (int i = 1; i < n; i++)
    {

        if (arr[i] - k < 0)
            continue;
        tempMin = min(arr[0] + k, arr[i] - k);
        tempMax = max(arr[n - 1] - k, arr[i - 1] + k);
        cout << "tempMax: " << tempMax << " tempMin: " << tempMin << endl;
        ans = min(ans, tempMax - tempMin);
    }
    return ans;
}

int main()
{
    int arr[99] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};
    int size = 10, k = 5; // ans:7
    cout << endl
         << "Minimum Difference is: " << getMinDiff(arr, size, k);
}