#include <iostream>
using namespace std;
int main()
{
    int a, i = 1;
    cout << "Entered number to check if prime: ";
    cin >> a;
    while (i <= a)
    {
        if (a % i == 0)
        {
            cout << "Entered number to check if prime: " << endl;
        }
        else
        {
            cout << "Not" << endl;
        }
        i += 1;
    }
}