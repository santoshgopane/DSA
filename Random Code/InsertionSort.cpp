#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[99] = {6, 5, 4, 3, 2, 1};
    int size = 6;
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (temp < arr[j])
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
        break;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}