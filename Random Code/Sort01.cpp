#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 0, 0, 0, 1};
    // sort(arr, arr + (sizeof(arr) / sizeof(arr[0])));
    int n = 7;
    int i = 0, j = n - 1;
    while (i < n / 2 && j > 0)
    {
        if (arr[i] > arr[j])
        {
            // swap;
            swap(arr[i], arr[j]);
        }
        i++, j--;
        // else
        // {
        //     i++, j++;
        // }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}