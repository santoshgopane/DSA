#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int i = 0;
    while (i < size)
    {
        cout << "start: " << start << " mid: " << mid << endl;
        // cout << arr[i] << " ";
        if (arr[start] > arr[mid])
        {
            swap(arr[start], arr[mid]);
            cout << "Swapped with mid: " << start << " " << mid << endl;
        }
        if (arr[mid] > arr[end])
        {
            swap(arr[mid], arr[end]);
            cout << "Swapped with end: " << mid << " " << end << endl;
        }
        if (start == mid - 1)
        {
            int temp = mid;
            // cout << start << mid << end;
            mid = start + (end - start) / 2;
            if (temp == mid)
            {
                mid++;
            }
            // mid++;
            // start++;
        }
        else
        {
            start++;
        }
        // start++;
        i++;
    }
    cout << endl;
}

int main()
{
    int arr[99] = {0, 1, 1, 0, 0, 1, 1, 0, 1, 0}; //{0,2,1,0,1,0,0,1,2}
    int size = 10;
    sort012(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}