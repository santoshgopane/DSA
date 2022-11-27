#include <bits/stdc++.h>
using namespace std;
vector<int> sumOfTwoArray(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> ans;
    int i = n - 1, j = m - 1;
    int value1, value2, tempRemainder, carry = 0;
    while (i >= 0 || j >= 0)
    {
        value1 = (i >= 0) ? a[i--] : 0;
        value2 = (j >= 0) ? b[j--] : 0;
        tempRemainder = (value1 + value2 + carry) % 10;
        carry = (value1 + value2 + carry) / 10;
        ans.push_back(tempRemainder);
    }

    if (carry)
        ans.push_back(carry);

    reverse(ans.begin(), ans.end());
    for (int i : ans)
        cout << i << " ";
    return ans;
}

int main()
{
    vector<int> a;
    a.push_back(9);
    a.push_back(1);
    a.push_back(7);
    a.push_back(8);
    a.push_back(7);
    a.push_back(5);
    a.push_back(2);

    vector<int> b;
    b.push_back(2);
    b.push_back(6);
    b.push_back(9);
    b.push_back(3);
    b.push_back(7);
    // b.push_back(5);

    int n = 7, m = 5;
    sumOfTwoArray(a, n, b, m);
}