// Search 2D Matrix II
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int curRow = 0, curCol = matrix[0].size() - 1;
    for (int i = 0; curRow <= matrix.size() - 1 && curCol >= 0; i++)
    {
        cout << matrix[curRow][curCol] << endl;
        if (target < matrix[curRow][curCol])
        {
            curCol--;
        }
        else if (target > matrix[curRow][curCol])
        {
            curRow++;
        }
        else
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> v = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};
    // vector<vector<int>> v = {{1, 1}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Element Found: " << searchMatrix(v, 1);
}
