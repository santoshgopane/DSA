#include <bits/stdc++.h>
using namespace std;

int modularExpression(int x, int y, int a)
{
    int ans = 1;
    while (y > 0)
    {
        if (y & 1) // odd
        {
            ans = (1LL * (x) % a * (ans) % a) % a; // Typecasted to Long
        }
        ans = (1LL * (ans) % a * (ans) % a) % a;
        y = y >> 1; // divde by 2
    }

    return ans;
}

int main()
{
    int x = 3, y = 1, a = 2;
    cout << "Answer is: " << modularExpression(x, y, a);
}