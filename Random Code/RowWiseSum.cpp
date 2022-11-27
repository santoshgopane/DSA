#include <bits/stdc++.h>
using namespace std;

void RowSum(int arr[][3], int row, int col){
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            sum += arr[i][j];
        cout << "Sum of " << i << "th row: " << sum << endl;
        // mainSum += sum;
        sum = 0;
    }
    return;
}

int largestRowSum(int arr[][3], int row, int col)
{
    int sum = 0, maxi = -1, idx = -1;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
            sum += arr[i][j];
        cout << "Sum of " << i << "th row: " << sum << endl;
        if (maxi < sum)
        {
            maxi = sum;
            idx = i;
        }
    }
    return idx;
}

int main()
{
    int arr[3][3] = {3, 4, 21, 2, 12, 1, 7, 8, 7};
    cout << largestRowSum(arr, 3, 3);

    return 0;
}