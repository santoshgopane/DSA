#include <iostream>
using namespace std;

// pair<int, int> firstAndLastPosition(int arr[], int size, int key)
void lastPosition(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int first, last;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            end = mid - 1;
            first = mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << "Left Most Bit is: " << first;
}

void lastOccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    int last;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << last;
}

int main()
{
    int arr[99] = {0, 5, 5, 6, 6, 6};
    lastOccurance(arr, 6, 5);
}