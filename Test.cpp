#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[99] = {1, 2, 3, 4, 5};
    a[0] = 9;
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";
    return 0;
}