#include <math.h>
#include <iostream>

using namespace std;
int main()
{
    int n = 100, i = 0, ans = 0;
    cout << "Enter number: " << n << endl;
    while (n != 0)
    {
        /* Reason behind doing mod is we are taking input as
         binary and based on 1 and 0 we are taking decisions.
        */
        int bit = (n % 10);
        if (bit)
        {
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }
    cout << "Decimal: " << ans << endl;
}