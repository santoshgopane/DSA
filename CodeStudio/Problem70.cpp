#include <bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int row, int col)
{
    vector<int> ans;

    int i = 0, j = 0;
    while ((i <= row - 1) && (j <= col - 1))
    {
        while ((i >= 0) && (i <= row - 1))
        {
            // cout << i << " | " << j << endl;
            ans.push_back(arr[i][j]);
            if ((j % 2 == 0) && (i < row - 1))
            {
                i++;
            }
            else if ((j % 2 != 0) && (i > 0))
            {
                i--;
            }
            else
            {
                break;
            }
        }
        j++;
    }
    // cout << endl;
    return ans;
}

int main()
{
    vector<vector<int>> v = {{1, 2, 3, 0},
                             {4, 5, 6, 13},
                             {7, 8, 9, 11}};
    vector<int> ans = wavePrint(v, 3, 4);
    for (int i : ans)
        cout << i << " ";
}