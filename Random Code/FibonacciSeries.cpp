// Print N fibonacci series
//  0,1,1,2,3,5,8,13,21,34,...........
#include <iostream>
using namespace std;
int main()
{
    int i, n, a = 0, b = 1, next;
    cout << "Enter number: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        next = a + b;
        cout << a;
        a = b;
        b = next;
    }
}