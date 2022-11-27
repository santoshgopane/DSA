#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int k)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == k)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size = 5, find;

    cout << "Size of array is " << size << endl
         << "Enter number you'd like to search: ";
    int arr[99] = {1, 3, 4, 5, 6};
    cin >> find;
    if (linearSearch(arr, size, find))
    {
        cout << "Element " << find << " is present in present in array!" << endl;
    }
    else
    {
        cout << "Element " << find << " is not present in present in array!" << endl;
    }
}