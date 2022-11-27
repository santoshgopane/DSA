#include <bits/stdc++.h>
using namespace std;
int isSolution(int arr[], int size, int k, int mid)
{
    int cows = 1;
    int lastPosition = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] - lastPosition >= mid)
        {
            cows++;
            if (cows == k)
            {
                return true;
            }
            lastPosition = arr[i];
        }
    }
    return false;
}

int main()
{

    int arr[99] = {4, 2, 1, 3, 6};
    sort(arr, arr + 5);
    int size = 5, ans = -1, start = 0, maxint = -1, k = 2;
    for (int i = 0; i < size; i++)
    {
        maxint = max(maxint, arr[i]);
    }
    int end = maxint;
    cout << "End: " << end << endl;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isSolution(arr, size, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << ans;
}