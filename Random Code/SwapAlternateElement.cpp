#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size)
{
    // Initially you were doing (i*2)everywhere. Instead doing i+=2 which will increment i by 2.
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    return;
}

int main()
{
    int size = 6;
    int arr[99] = {1, 2, 3, 4, 5, 6, 7};
    swapAlternate(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}