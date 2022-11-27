#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a % 2 == 0) // a&1 = true => odd number
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Number " << n << " is " << isEven(n) << endl;
    return 0;
}