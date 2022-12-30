// Search in 2D matix
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int start = 0;
    int rows = matrix.size(), cols = matrix[0].size();
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;
    int element;

    while (start <= end)
    {
        element = matrix[mid / cols][mid % cols];
        if (element == target)
        {
            return true;
        }
        if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }

    return false;
}

int main()
{
    vector<vector<int>> v = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Element Found: " << searchMatrix(v, 9);
}
