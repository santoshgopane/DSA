#include <bits/stdc++.h>
using namespace std;
bool isSolution(int arr[], int n, int m, int mid)
{
    int students = 1, pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            pageSum = arr[i];
            students++;
            if (students > m || arr[i] > mid)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int arr[1000] = {10, 20, 30, 40};
    int n = 4, m = 2, sum = 0;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isSolution(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << "Answer is: " << ans;
}