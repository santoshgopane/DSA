#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    int n = 5, ans = 0, i = 0;
    int m = n, mask = 0;
    if (n == 0)
        ans = 1; // return 1 directly;

    cout << "Enter number: " << n << endl;
    while (m >= 0)
    {
        mask = (mask << 1) | 1;
        m >>= 1;
    }
    ans = ~(n)&mask;
    cout << ans;
}