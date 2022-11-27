// Unique Number of Occurrences
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkUnique(int arr[], int size)
{
    // 1, 1, 1, 2, 2, 3
    //>0  0  0  1  0  0  0  0
    // 0, 1, 2, 3, 4, 5, 6, 7
    sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int arr1[99] = {0}; //
    int count = 1;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == arr[i + 1])
        {
            count++;
            // new arry may contain the count
        }
        else if (arr[i] != arr[i + 1])
        {
            if (arr1[count] != 0)
            {
                return false;
            }
            else
            {
                arr1[count] = arr[i];
                count = 1;
            }
        }
        cout << "count: " << count << " | " << arr[i] << endl;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr1[i] << " ";
    }
    return true;
}

// return false for unique
int main()
{
    int size = 6;
    int arr[99] = {1, 2};
    cout << endl
         << checkUnique(arr, size);
    // if (checkUnique(arr, size))
    // {
    //     cout << "Array has repetative occurances.";
    // }
    // else
    // {
    //     cout << "Array has unique occurances.";
    // }
}