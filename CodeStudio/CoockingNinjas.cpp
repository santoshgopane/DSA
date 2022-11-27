#include <bits/stdc++.h>
using namespace std;

bool isSolution(int arr[], int m, int mid)
{
    int readyDishes = 0, cooks = 1;
    int baked = 1;
    int cooksDishesh = 0;
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        int j = 1;
        while ((cooksDishesh + j * arr[i]) <= mid)
        {
            cooksDishesh += j * arr[i];
            readyDishes++;
            j++;
        }
        cout << "Ready by " << i << "th cook: " << cooksDishesh << endl;
        cooksDishesh = 0;
        cout << readyDishes << endl;
        if (readyDishes >= m)
        {
            return true;
        }
    }
    cout << "Ready: " << readyDishes << endl;

    return false;
}

int main()
{
    int arr[99] = {1, 1, 1, 1, 1, 1, 1, 1};
    int n = 8; // number of Coocks
    int m = 8; // number of Dishes
    sort(arr, arr + n);

    int start = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum * 2;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isSolution(arr, m, mid))
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
    cout << "Answer:" << ans;
}