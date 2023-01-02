// Remove all adjecent duplicates in a string.
#include <bits/stdc++.h>
using namespace std;

string removeAdjecentDuplicates(string str)
{
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == str[i + 1])
        {
            str.erase(((i > 0) ? i-- : i), 2);
        }
        else
        {
            i++;
        }
    }
    return str;
}

int main()
{
    string str = "aaaaaaaa";
    cout << removeAdjecentDuplicates(str);
}