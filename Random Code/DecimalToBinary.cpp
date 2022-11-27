#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n = 5, ans = 0;
    cout << "Enter number: " << n << endl;
    int i = 0;
    while (n)
    {
        int bit = n & 1;
        cout << bit << endl;
        // ans = bit * pow(10, i) + ans;
        n = n >> 1;
        // i++;
    }
    cout << "Answer: " << ans << endl;
}