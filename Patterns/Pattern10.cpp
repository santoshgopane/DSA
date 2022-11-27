/*
_ _ _ *
_ _ * *
_ * * *
* * * *
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
        int space = n - i;
        while (space)
        {
            cout << " ";
            space -= 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}