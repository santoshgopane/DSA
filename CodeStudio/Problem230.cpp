#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size)
{
    int set = 0;
    for (int i = 0; i < size; i++)
    {
        set ^= arr[i];
    }
    for (int i = 1; i < size; i++)
    {
        set ^= i;
    }
    return set;
}

int main()
{
    int size = 5;
    int arr[99] = {4, 2, 1, 3, 1};
    cout << "Answer: " << findDuplicate(arr, size);
}