// Rotate Image
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    /*
    q1 ---- q2
    |--------|
    |--------|
    q4 ---- q3
    */
    int startRow = 0, startCol = 0;
    int endRow = matrix.size() - 1, endCol = matrix.size() - 1;
    int temp1, temp2, temp3, temp4;
    int runTill = 0;
    while (runTill < matrix.size() / 2)
    {
        for (int i = 0; i < endCol - startCol; i++)
        {
            temp1 = matrix[startRow][startCol + i];
            temp2 = matrix[startCol + i][endCol];
            temp3 = matrix[endRow][endCol - i];
            temp4 = matrix[endRow - i][startCol];

            matrix[startCol + i][endCol] = matrix[startRow][startCol + i]; // q1 =>q2
            matrix[endRow][endCol - i] = temp2;                            // q2 =>q3
            matrix[endRow - i][startCol] = temp3;                          // q3 => q4

            matrix[startRow][startCol + i] = temp4;
        }
        startCol++, endCol--, startRow++, endRow--;
        runTill++;
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int k = 0; k < matrix[i].size(); k++)
            cout << matrix[i][k] << " ";
        cout << endl;
    }
}

int main()
{
    // vector<vector<int>> v = {{1, 2, 3, 10}, {4, 5, 6, 11}, {7, 8, 9, 19}, {12, 13, 14, 15}};
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < v.size(); i++)
    {
        for (int k = 0; k < v[i].size(); k++)
            cout << v[i][k] << " ";
        cout << endl;
    }
    cout << "After rotating the Image:" << endl;
    rotate(v);
}