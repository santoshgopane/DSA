#include <bits/stdc++.h>
using namespace std;

void updateArray(int a[], int size)
{

    // IMP: This concludes that array to the function is passed as a pointer not as an array!
    a[0] = 5;
    return;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    cout << "Before: ";
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    updateArray(arr, 4);

    cout << endl
         << "After: ";
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
}