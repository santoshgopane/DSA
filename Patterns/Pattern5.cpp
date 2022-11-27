// Pattern:
/*
1
23
345
*/
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter number: ";
    cin >> n;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << i + j;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}