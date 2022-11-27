#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    cout << "Size: " << s.length() - 1 << endl;
    int i = s.length() - 1;
    while (s.length() > 0 && (i > 0))
    {
        if (s[i] == s[i - 1])
        {
            s.erase(i - 1, 2);
        }
        i--;
    }
    return s;
}

int main()
{
    string s = "aaaaaaaabaa"; // azxxzy
    cout << s << endl;
    cout << removeDuplicates(s);
}