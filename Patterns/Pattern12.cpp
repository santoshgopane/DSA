/*
_ _ 1 _ _
_ 1 2 1 _
1 2 3 2 1
*/
// Approach 1: Making 3 triangles!
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;
    cout << "Enter number: ";
    cin >> n;
    while (i <= n)
    {
        int spaces1 = n - i;
        while (spaces1 > 0)
        {
            cout << " ";
            spaces1 -= 1;
        }

        int j = 1;
        while (j <= i)
        {
            cout << j;
            j += 1;
        }

        int k = i - 1;
        while (k > 0)
        {
            cout << k;
            k -= 1;
        }

        cout << endl;
        i += 1;
    }
}