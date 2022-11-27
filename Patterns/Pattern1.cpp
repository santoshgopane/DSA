// Pattern:
/*
1 1 1
2 2 2
3 3 3
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
        int j = 0;
        while (j < n)
        {
            cout << i + 1 << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
}