#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    int smallest = INT_MAX, largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - k < 0)
        {
            largest = (arr[i] + k > largest) ? arr[i] + k : largest;
        }
        else
        {
            smallest = (arr[i] - k < smallest) ? arr[i] - k : smallest;
        }
        largest = (arr[i] + k > largest) ? arr[i] + k : largest;
    }
    cout << "largest: " << largest << " smallest: " << smallest << endl;
    return largest - smallest;
}

int main()
{
    int arr[99] = {1, 5, 8, 10};
    int size = 4, k = 2;
    cout << getMinDiff(arr, size, k);
}