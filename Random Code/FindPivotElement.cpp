// #include<iostream>
#include <bits/stdc++.h>
using namespace std;
int findPivot(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int main()
{
    int arr[99] = {7, 9, 10, 1, 2}; // sorted + rotated array
    cout << findPivot(arr, 5);
}