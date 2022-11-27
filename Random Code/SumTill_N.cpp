#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Total Sum: " << sum << endl;
}