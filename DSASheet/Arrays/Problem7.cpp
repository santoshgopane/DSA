#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int temp1 = arr[0], temp2 = -1;
    for (int i = 0; i < n - 1; i++)
    {
        temp2 = arr[i + 1];
        cout << "temp1:" << temp1 << " temp2: " << temp2 << endl;
        arr[i + 1] = temp1;
        temp1 = temp2;
    }
    arr[0] = temp1;
}

// Solution from Editorial
// void rotate(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {

//         swap(arr[i], arr[n - 1]);
//     }
// }

int main()
{
    int a[99] = {1, 2, 3, 4, 5};
    int size = 5;
    cout << "Array before rotation: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    rotate(a, size);
    cout << "Array after rotation: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}