// Pattern:
/*
1
2 1
3 2 1
4 3 2 1
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
        int j = i;
        while (j > 0)
        {

            cout << j;
            j -= 1;
            /* code */
        }
        cout << endl;
        i += 1;
    }
}