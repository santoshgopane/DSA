#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{

    int a, i = 2;
    bool prime = true;
    cout << "Enter the number ";
    cin >> a;

    while (i <= a)
    {
        cout << i << " " << a << "=> " << a % i << "\n";
        // cout << "Inside"<<endl;
        if (a % i == 0 && i != a)
        {
            prime = false;
            cout << "Inside" << endl;
        }
        i += 1;
    }

    // true => 1; false => 0
    cout << typeid(prime).name() << endl;
    if (prime)
    {
        cout << "Entered number is a prime number " << prime << endl;
    }
    else
    {
        cout << "Entered number is not a prime number " << prime << endl;
    }
}