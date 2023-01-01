// Sort 0 1 2
#include <bits/stdc++.h>
using namespace std;

void sort012Wrong(int a[], int n)
{
    int start = 0, end = n - 1, mid = start + (end - start) / 2;
    while (start < n - 1)
    {
        cout << "Start: " << start << " End: " << end << " Mid: " << mid << endl;

        int replaceIndex = (a[mid] <= a[end]) ? mid : end;

        if (a[start] > a[replaceIndex])
            swap(a[start], a[replaceIndex]);
        else if (a[start] == a[mid] && a[start] == a[end])
        {
            if (a[start] > a[start + 1])
            {
                // cout << "here";
                swap(a[start], a[start + 1]);
            }
            else if (a[start] > a[mid + 1])
            {
                swap(a[start], a[mid + 1]);
                // mid++;
            }
            // else if
            else if (a[start] > a[end - 1])
            {
                swap(a[start], a[end - 1]);
            }
        }

        start++;
        mid = start + (end - start) / 2;
        // cout << endl;
        // break;
    }

    cout << endl
         << "Sorted Array: ";
    for (int i = 0; i <= end; i++)
        cout << a[i] << " ";
    return;
}

void sort012(int a[], int n)
{
    int start = 0, mid = 0;
    int end = n - 1;

    while (mid <= end)
    {
        if (a[mid] == 0)
        {
            swap(a[start], a[mid]);
            start++, mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[end]);
            end--;
        }
    }

    return;
}

int main()
{
    int a[99] = {2, 2, 1, 1, 2, 2, 2, 2, 2, 2};
    int size = 10;
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
    sort012(a, size);
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
}