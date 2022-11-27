// Pattern:
/*
D
CD
BCD
ABCD
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    char start = 'A';
    cout << "Enter number: ";
    cin >> n;
    while (i < n)
    {
        int j = n - i;
        while (j <= n)
        {
            char ch = start + j - 1; // n-j
            cout << ch;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}