#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0, i = 0;
    while (n)
    {
        int bit = n & 1;
        ans = bit * pow(10, i) + ans;
        n >>= 1;
        i++;
    }

    cout << "answer : " << ans << endl;
    return 0;
}