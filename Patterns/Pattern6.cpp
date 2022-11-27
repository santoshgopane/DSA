// Pattern:
/*
ABC
ABC
ABC
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    char start = 'A';
    cout << "Enter number: ";
    cin >> n;
    while (i <= n)
    {
        int j = 0;
        while (j < n)
        {
            char ch = start + j;
            cout << ch;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}