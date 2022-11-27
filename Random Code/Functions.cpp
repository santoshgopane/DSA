#include <iostream>
using namespace std;

int test(int a, int b)
{
    return a * b;
}
int main()
{
    int a = 1, b = 2;
    cout << test(a, b);
    return 0;
}