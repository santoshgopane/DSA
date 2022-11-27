#include <bits/stdc++.h>
using namespace std;
int getPivot(int arr[], int size)
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

int binarySearch(int arr[], int start, int end, int key)
{
    //     int start=0,end=-1;
    cout << endl
         << "Start: " << start << " end: " << end << endl;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key == arr[mid])
        {
            cout << "HERE";
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[99] = {100, 106, -2, 6, 10, 11, 13};
    int size = 7, key = 11;
    int pivot = getPivot(arr, size);
    cout << pivot;
    int ans;
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        ans = binarySearch(arr, pivot, size - 1, key);
    }
    else
    {
        ans = binarySearch(arr, 0, pivot - 1, key);
    }
    cout << endl
         << ans;
}