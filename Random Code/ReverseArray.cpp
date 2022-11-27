#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        // temp = arr[i];
        // arr[i] = arr[size - i - 1];
        // arr[size - i - 1] = temp;
        swap(arr[i], arr[size - i - 1]);
    }
}

int main()
{
    int size = 6;
    int arr[99] = {9, 2, 3, 4, 5, 6};
    reverseArray(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}