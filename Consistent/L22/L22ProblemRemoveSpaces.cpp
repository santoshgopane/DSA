// Remove Spaces from given String(Inplace)
#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.replace(i, 1, "@40");
        }
        // break;
    }

    return str;
}

int main()
{
    string str = " Sa  ntosh Gopane ";
    cout << removeSpaces(str);
}
