#include <bits/stdc++.h>
using namespace std;

string removeOccurances(string s, string part)
{
    int i = s.length() - 1;
    // string ans = "";
    while (i >= 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
        i++;
    }
    return s;
}

int main()
{
    string s = "axxxxyyyyb", part = "p";
    // cout << s.length() << endl;
    cout << s << endl;
    cout << s.find(part);
    // cout << s.erase(s.find(part), part.length());
    // cout
    //     << ;
    // string newStr = removeOccurances(s, part);
    // cout << newStr << endl;
}