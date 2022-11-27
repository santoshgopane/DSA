#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    // cout << endl;
}

int main()
{

    int arr1[5];
    char arr2[5];
    double arr3[5];
    float arr4[5];
    bool arr5[5];
    // cout << "Arr: " << arr[2];
    int n = 5;
    // printArray(arr, sizeof(arr) / sizeof(int));
    return 0;
}