// Sort 012
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[99] = {0, 1, 1, 0, 0, 1, 1, 0, 1, 0};{0,2,1,0,1,0,0,1,2}
    int arr[99] = {1, 1, 1, 1, 1, 0, 0, 0, 1, 0};
    // int arr[99] = {0, 1, 2, 2, 1, 0};
    int n = 10;
    int i = 0, j = (n - 1) / 2, k = n - 1;
    while (j >= 0)
    {
        if (i < j)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
            i++;
        }
        else if (i >= j && k > i)
        {
            if (arr[i] > arr[k])
            {
                swap(arr[i], arr[k]);
            }
            i++, k--;
            // break;
        }
        else if (j <= k)
        {
            if (arr[j] > arr[k])
            {
                swap(arr[j], arr[k]);
                j--;
            }
            else if (arr[j] == arr[k])
            {
                j--;
            }
            else
            {
                k--;
            }
        }
    }
    cout << " i: " << i << " j: " << j << " k: " << k << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}