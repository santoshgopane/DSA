#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, k;
    vector<vector<int>> master;
    cin >> n >> q;
    // cin >> k;
    int vector_input, temp;

    while (n > 0)
    {
        vector<int> child;
        cin >> vector_input;
        for (int i = 0; i < vector_input; i++)
        {
            cin >> temp;
            child.push_back(temp);
        }
        master.push_back(child);
        n--;
    }

    int i, j;
    for (int k = 0; k < q; k++)
    {
        cin >> i >> j;
        cout << master[i][j] << endl;
    }

    return 0;
}
