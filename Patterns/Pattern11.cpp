/*
* * * *
_ * * *
_ _ * *
_ _ _ *
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
        int spaces = i - 1;
        while (spaces > 0)
        {
            cout << " ";
            spaces -= 1;
        }
        int j = n - i + 1;
        while (j > 0)
        {
            cout << "*";
            j -= 1;
        }

        cout << endl;
        i += 1;
    }
}
