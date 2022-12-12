#include <bits/stdc++.h>
using namespace std;

void testFunction(int a[], int size)
{
    for (int i = 0; i < size; i++)
        cout << a[i] << endl;
    return;
}

int main()
{
    int size;
    int arr[99];

    cout << "Enter size of the array:";
    cin >> size;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    testFunction(arr, size);

    return 0;
}