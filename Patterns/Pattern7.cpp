// Patter:
/*
A
BB
CCC
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
        int j = 0;
        while (j <= i)
        {
            char ch = start + i;
            cout << ch;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}