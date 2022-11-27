/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
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
        int t1 = 1;
        while (t1 <= n - i + 1)
        {
            cout << t1;
            t1 += 1;
        }
        int t2 = i - 1;
        while (t2 > 0)
        {
            cout << "**";
            t2 -= 1;
        }

        int t3 = n - i + 1;
        while (t3 > 0)
        {
            cout << t3;
            t3 -= 1;
        }

        cout << endl;
        i += 1;
    }
}