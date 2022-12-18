// GFG: Maximum occuring character

#include <bits/stdc++.h>
using namespace std;

char maximumOccuringChar(string str)
{
    map<char, int> m1;
    int max = 0;
    char ans;
    for (int i = 0; i < str.length(); i++)
    {
        m1[str[i]]++;
        if (max < m1[str[i]])
        {
            max = m1[str[i]];
            ans = str[i];
        }
        else if (max == m1[str[i]])
        {
            ans = (ans < str[i]) ? ans : str[i];
        }
        cout << max << "Char: " << str[i] << endl;
    }
    for (auto i : m1)
        cout << i.first << i.second << endl;
    return ans;
}

char minimumOccuringChar(string str)
{
    map<char, int> m2;
    char ans;
    int min = 0;
    for (int i = 0; i < str.length(); i++)
    {
        m2[str[i]]++;
        if (min > m2[str[i]])
        {
            min = m2[str[i]];
            ans = str[i];
        }
        else if (min == m2[str[i]])
        {
            ans = (ans < str[i]) ? ans : str[i];
        }
    }
    return ans;
}

int main()
{
    string str = "Santosh Goapne";
    cout << maximumOccuringChar(str);
}