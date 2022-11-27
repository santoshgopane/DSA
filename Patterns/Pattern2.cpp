// Pattern:
/*
3 2 1
3 2 1
3 2 1
*/

#include <iostream>
using namespace std;
int main()
{

    int n, i = 0;
    cout << "Enter number: ";
    cin >> n;
    while (i < n)
    {
        int j = n;
        while (j > 0)
        {
            cout << j << " ";
            j -= 1;
        }
        cout << endl;
        i += 1;
    }
}