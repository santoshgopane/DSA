#include <iostream>
using namespace std;

int addArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[99];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int sum = addArray(arr, size);
    cout << endl
         << "Sum of array is " << sum << endl;
}