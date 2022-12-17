// LeetCode: Valid Palindrome.
#include <bits/stdc++.h>
using namespace std;

char toLower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch;
}

bool validChar(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return true;
    return false;
}

bool validPalindrome(string str)
{
    int len = str.length();
    for (int j = 0; j < len / 2; j++)
    {
        // cout << endl
        //      << char(str[j]) << "|" << char(str[len - j - 1]) << endl;
        if (char(str[j]) != char(str[len - j - 1]))
        {
            // cout << "HERE";
            return false;
        }
    }
    return true;
}

int main()
{
    // lower char, remove unnecessary stuff, check if valid
    string str = "Momp";
    string tempStr = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (validChar(str[i]))
            tempStr.push_back(toLower(str[i]));
    }

    cout << validPalindrome(tempStr);
}