// Spiral Print
#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int input[][4], int nRows, int nCols)
{
    int startRow = 0, startCol = 0;
    int endCol = nCols - 1, endRow = nRows - 1;
    int indexer = 1;

    while (indexer < nRows * nCols)
    {
        // Print left to right
        for (int idx = startCol; idx <= endCol && indexer <= nRows * nCols; idx++)
        {
            cout << input[startRow][idx] << " ";
            indexer++;
        }
        startRow++;

        // print top to bottom
        for (int idx = startRow; idx <= endRow && indexer <= nRows * nCols; idx++)
        {
            cout << input[idx][endCol] << " ";
            indexer++;
        }
        endCol--;

        // print right to left (here we be decreasing the counter)
        for (int idx = endCol; idx >= startCol && indexer <= nRows * nCols; idx--)
        {
            cout << input[endRow][idx] << " ";
            indexer++;
        }
        endRow--;
        // print bottom to top
        for (int idx = endRow; idx >= startRow && indexer <= nRows * nCols; idx--)
        {
            cout << input[idx][startCol] << " ";
            indexer++;
        }
        startCol++;
    }

    return;
}
int main()
{
    int nRow = 3, nCol = 4;
    int arr[3][4] = {{1, 2, 3, 0}, {4, 5, 6, 18}, {7, 8, 9, 10}};
    // int arr[4][4] = {{1, 2, 3, 0}, {4, 5, 6, 19}, {7, 8, 9, 10}, {11, 12, 14, 17}};
    cout << "Original Array: " << endl;
    for (int i = 0; i < nRow; i++)
    {
        for (int j = 0; j < nCol; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    cout << "Spiral pattern is: " << endl;
    spiralPrint(arr, nRow, nCol);
}
