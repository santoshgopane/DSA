#include <bits/stdc++.h>
using namespace std;
bool isSolution(int arr[], int size, int k, int mid)
{
    int painters = 1, roundSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (roundSum + arr[i] <= mid)
        {
            roundSum += arr[i];
        }
        else
        {
            roundSum = arr[i];
            painters++;
            if (painters > k || arr[i] > mid)
            {
                return false;
            }
        }
    }
    return true;
}

int findLargestMinDistance(int boards[], int size, int k)
{
    int start = 0, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += boards[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isSolution(boards, size, k, mid))
        {
            ans = mid;
            // cout << ans << " ";
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[99] = {5, 5, 5, 5};
    cout << findLargestMinDistance(arr, 4, 2);
}