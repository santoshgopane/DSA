#include <iostream>
using namespace std;
int main()
{
    int n = 4421, sum = 0, product = 1;
    cout << "Enter number: " << n << endl;
    // cin >> n;
    cout << n % 10 << " " << n / 10;
    while (n != 0)
    {
        sum += n % 10;
        product *= n % 10;
        n = n / 10;
        cout << n % 10 << ":" << product << "|" << sum << endl;
    }
    cout << "Difference: " << product - sum << endl;
}