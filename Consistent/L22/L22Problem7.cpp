// Remove all occurances of substring
#include <bits/stdc++.h>
using namespace std;

string removeAllOccurances(string str, string part)
{

    for (int i = 0; str.find(part) <= str.length() - 1; i++)
    {
        str.erase(str.find(part), part.length());
    }
    return str;
}

int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    // cout << str.find(part);
    cout << removeAllOccurances(str, part);
}
