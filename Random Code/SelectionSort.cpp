/*
Selection Sort: Replace the ith element with the smallest element from right-part the array.
Time Complexity - O(n^2)
*/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int arr[99] = {6, 2, 8, 2, 8, 4, 10};
    int size = 7;
    for (int i = 0; i < size - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}