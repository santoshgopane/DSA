// Reverse Integer Problem
#include <math.h>
#include <iostream>

using namespace std;
int main()
{
    int n = -123, i = 0, ans = 0;
    cout << "Enter number: " << n << endl;

    while (n)
    {
        int dig = n % 10;
        if ((ans > pow(2, 32) - 1) || (ans < -pow(2, 32)))
        {
            ans = 0;
            break;
        }
        ans = ans * 10 + dig;
        cout << ans << endl;
        n /= 10;
        i++;
    }
    cout << "Decimal: " << ans << endl;
}