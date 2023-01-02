// Print Like Wave.

#include <bits/stdc++.h>
using namespace std;

vector<int> printLikeAWave(vector<vector<int>> v, int nRows, int nCols)
{
    int start = 0, end = 0;
    vector<int> ans;

    while (start <= nRows - 1 && end <= nCols - 1)
    {

        if (start % 2 == 0)
        {
            // increment the end till ncols-1
            if (end < nCols - 1)
            {
                // cout << v[end++][start];
                ans.push_back(v[end++][start]);
            }
            else
            {
                // cout << v[end][start++];
                ans.push_back(v[end][start++]);
            }
        }
        else
        {
            // Decrement the end till 0
            if (end > 0)
            {
                // cout << v[end--][start];
                ans.push_back(v[end--][start]);
            }
            else
            {
                // cout << v[end][start++];
                ans.push_back(v[end][start++]);
            }
        }
        // cout << " ";
        // cout << endl;
    }

    return ans;
}

int main()
{

    vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    cout << "Original Array: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    cout << "Wave output: " << endl;
    vector<int> ans;
    ans = printLikeAWave(v, 4, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}