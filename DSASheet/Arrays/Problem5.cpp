// Move all the negative elements to one side of the array
#include <bits/stdc++.h>
using namespace std;

void moveNegatives(vector<int> &v)
{
    int length = v.size();
    int start = 0;
    int end = start + 1;
    // cout << "size: " << end;
    while (start < length && end < length)
    {
        cout << "start: " << start << " end: " << end << endl;
        if (v[start] < 0)
            start++, end++;
        else if (v[end] < 0)
        {
            swap(v[start], v[end]);
            start++;
            end = start + 1;
        }
        else if (v[end] >= 0)
        {
            end++;
        }
    }
    return;
}

int main()
{
    vector<int> v = {0, 0, -1, 0};
    cout << "Original Array: ";
    for (int i : v)
        cout << i << " ";
    cout << endl;
    moveNegatives(v);
    cout << endl
         << "Sorted Array: ";
    for (int i : v)
        cout << i << " ";
}
