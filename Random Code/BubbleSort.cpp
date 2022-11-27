/*
ith iteration give ith largest element from the array
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[99] = {6, 2, 8, 4, 10};
    int arr[99] = {1, 2, 3, 4, 5};
    int size = 5;
    for (int i = 0; i < size - 1; i++)
    {
        bool sortedArray = true;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                sortedArray = false;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (sortedArray)
            break;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}