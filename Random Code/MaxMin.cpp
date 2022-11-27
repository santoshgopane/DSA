#include <iostream>
using namespace std;

int getMax(int arr1[], int size)
{
    int Max = arr1[0]; //, Min = arr1[0];
    // cout << Max << "Size: " << size << endl;
    for (int i = 0; i < size; i++)
    {
        Max = max(Max, arr1[i]); // max and min are built in functions
        // if (arr1[i] > Max)
        // {
        // Max = arr1[i];
        // }
    }
    return Max;
}

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;
    int arr[5];
    // int Max = arr[0], Min = arr[0];
    // cout << arr[5];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = getMax(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > Max)
    //     {
    //         Max = arr[i];
    //     }
    //     else
    //     {
    //         Min = arr[i];
    //     }
    // }
    cout
        << endl
        << "Max: " << maxi; // << " Min: " << min;
}