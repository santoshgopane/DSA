#include <iostream>
using namespace std;
int main()
{
    int n, i;
    bool prime = true;
    cout << "Enter number: ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0 && i != n)
        {
            prime = false;
            break;
        }
    }
    if (prime)
    {
        cout << n << " is a prime number!";
    }
    else
    {
        cout << n << " is Not a prime number!";
    }
}