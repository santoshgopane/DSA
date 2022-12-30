#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr, arr + r + 1);
    cout << endl
         << "Sorted Array: ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return arr[k - 1];
}

int main()
{
    int arr[99] = {7, 10, 4, 3, 20, 15};
    int l = 0, r = 5, k = 3;
    cout << "Original Array: ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl
         << k << "th smallest element is: " << kthSmallest(arr, l, r, k);
}