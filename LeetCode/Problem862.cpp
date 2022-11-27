#include <iostream>
using namespace std;
int peakIndexInMountainArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // else if (arr[mid] < arr[mid - 1])
        // {
        //     end = mid - 1;
        // }
        else
        {
            // return mid;
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}
int main()
{
    int arr[99] = {0, 10, 6, 5, 4, 3, 2, 1, 0}; //[0,10,5,2]
    cout << peakIndexInMountainArray(arr, 9);
}