#include <bits/stdc++.h>
using namespace std;

int rowWiseSum(int arr[][3], int row, int col)
{
    int max = 0, largestIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < col; j++)
        {
            rowSum += arr[i][j];
        }
        if (rowSum > max)
            largestIndex = i;
        cout << "RowSum for Index " << i << " is: " << rowSum << endl;
    }
    return 0;
}

int main()
{
    int row = 3, col = 3;
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rowWiseSum(arr, row, col);
}