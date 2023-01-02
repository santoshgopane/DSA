#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);

    for (int i = 0; i < m; i++)
        s.insert(b[i]);

    for (int i : s)
        cout << i << " ";
    cout << endl;
    return s.size();
}

int main()
{
    int a[99] = {1, 2, 3, 4, 5};
    int b[99] = {1, 2, 6};
    cout << "size of array is: " << doUnion(a, 5, b, 3);
}