#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    // int mid = (start + end) / 2; // This could excced beyond Integer limit so for that
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[99] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = 8, key;
    cout << "Enter the number you'd like to search in ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Index of " << key << " is " << binarySearch(arr, n, key);
}