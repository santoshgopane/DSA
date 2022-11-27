#include <bits/stdc++.h>
using namespace std;
void reverseArray(vector<int> &arr, int m)
{
    int i = m + 1, j = arr.size() - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++, j--;
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    reverseArray(v, 3);
    for (int i : v)
        cout << i << " ";
}