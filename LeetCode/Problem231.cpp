// Power of two
#include <iostream>
using namespace std;
int main()
{
    int n = 16, count = 0;
    bool powof = false;
    cout << "Enter number: " << n << endl;
    while (n)
    {
        int bit = n & 1;
        if (bit)
            count++;
        if (count > 1 || n == 0)
        {
            powof = false;
            break;
        }
        n >>= 1;
        powof = true;
    }
    cout << powof << endl;
}